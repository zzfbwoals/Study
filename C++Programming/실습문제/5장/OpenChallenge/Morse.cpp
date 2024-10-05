#include <iostream>
#include <string>
using namespace std;

#include "Morse.h"

Morse::Morse()
{
	alphabet[0] = ".-"; alphabet[1] = "-..."; alphabet[2] = "-.-.";
	alphabet[3] = "-.."; alphabet[4] = "."; alphabet[5] = "..-.";
	alphabet[6] = "--."; alphabet[7] = "...."; alphabet[8] = "..";
	alphabet[9] = ".---"; alphabet[10] = "-.-"; alphabet[11] = ".-..";
	alphabet[12] = "--"; alphabet[13] = "-."; alphabet[14] = "---";
	alphabet[15] = ".--."; alphabet[16] = "--.-"; alphabet[17] = ".-.";
	alphabet[18] = "..."; alphabet[19] = "-"; alphabet[20] = "..-";
	alphabet[21] = "...-"; alphabet[22] = ".--"; alphabet[23] = "-..-";
	alphabet[24] = "-.--"; alphabet[25] = "--..";
	digit[0] = "-----"; digit[1] = ".----"; digit[2] = "..---";
	digit[3] = "...--"; digit[4] = "....-"; digit[5] = ".....";
	digit[6] = "-...."; digit[7] = "--..."; digit[8] = "---..";
	digit[9] = "----.";
	slash = "-..-."; question = "..--.."; comma = "--..--";
	period = ".-.-.-"; plus = ".-.-."; equal = "-...-";
}
void Morse::run()
{
	cout << "아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다." << endl;
	string text;
	string morse;
	getline(cin, text, '\n');
	text2Morse(text, morse);
	cout << morse << endl << endl;
	cout << "모스 부호를 다시 영문 텍스트로 바꿉니다." << endl;
	text = "";
	if (morse2Text(morse, text))
		cout << text << endl;
}
void Morse::text2Morse(string text, string& morse)
{
	for (int i = 0; i < text.length(); i++)
	{
		char c = text[i];
		if (c == ' ')
		{
			morse += "   "; // 단어 사이의 공백
		}
		else if (c >= 'a' && c <= 'z')
		{
			morse += alphabet[c - 'a'];
			morse += ' ';
		}
		else if (c >= 'A' && c <= 'Z')
		{
			morse += alphabet[c - 'A'];
			morse += ' ';
		}
		else if (c >= '0' && c <= '9')
		{
			morse += digit[c - '0'];
			morse += ' ';
		}
		else
		{
			switch (c)
			{
			case '/':
				morse += slash;
				break;
			case '?':
				morse += question;
				break;
			case ',':
				morse += comma;
				break;
			case '.':
				morse += period;
				break;
			case '+':
				morse += plus;
				break;
			case '=':
				morse += equal;
				break;
			default:
				cout << "Error!!" << endl;
				exit(1);
			}
			morse += ' ';
		}
	}
}
bool Morse::morse2Text(string morse, string& text)
{
	string temp;         // 현재 처리 중인 모스 부호를 저장하는 임시 문자열
	int spaceCount = 0;  // 연속된 공백의 개수를 세는 변수

	// 모스 부호 문자열을 끝까지 순회 (마지막 문자 처리를 위해 length() + 1 만큼 반복)
	for (int i = 0; i <= morse.length(); i++)
	{
		// 현재 문자가 공백인 경우
		if (morse[i] == ' ')
		{
			// 누적된 모스 부호가 있으면 해독
			if (!temp.empty())
			{
				bool found = false;

				// 알파벳 검사
				for (int j = 0; j < 26; j++)
				{
					if (temp == alphabet[j])
					{
						text += 'a' + j;  // 해당 알파벳을 결과 문자열에 추가
						found = true;
						break;
					}
				}

				// 숫자 검사 (알파벳에서 찾지 못한 경우)
				if (!found)
				{
					for (int j = 0; j < 10; j++)
					{
						if (temp == digit[j])
						{
							text += '0' + j;  // 해당 숫자를 결과 문자열에 추가
							found = true;
							break;
						}
					}
				}

				// 특수 문자 검사 (알파벳과 숫자에서 찾지 못한 경우)
				if (!found)
				{
					if (temp == slash) text += '/';
					else if (temp == question) text += '?';
					else if (temp == comma) text += ',';
					else if (temp == period) text += '.';
					else if (temp == plus) text += '+';
					else if (temp == equal) text += '=';
				}

				temp = "";  // 임시 문자열 초기화
			}

			spaceCount++;  // 공백 개수 증가

			// 3개의 연속된 공백을 만나면 단어 사이의 공백으로 처리
			if (spaceCount == 3)
			{
				text += ' ';  // 결과 문자열에 공백 추가
			}
		}
		else  // 공백이 아닌 문자를 만난 경우
		{
			if (spaceCount > 0)
			{
				spaceCount = 0;  // 공백 카운트 초기화
			}
			temp += morse[i];  // 현재 문자를 임시 문자열에 추가
		}
	}

	return true;
}