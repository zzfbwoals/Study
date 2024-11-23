#include <iostream>
#include <string>
using namespace std;

class Print {
	string model; // 모델명
	string manufacturer; // 제조사
	int printedCount; // 인쇄 매수
	int availableCount; // 인쇄 종이 잔량
public:
	Print(string model = "", string manufacturer = "", int printedCount = 0, int availableCount = 0) {
		this->model = model; this->manufacturer = manufacturer; this->printedCount = printedCount; this->availableCount = availableCount;
	}
	// getter 함수
	string getModel() { return model; }
	string getManufacturer() { return manufacturer; }
	int getPrintedCount() { return printedCount; }
	int getAvailableCount() { return availableCount; }

	bool print(int pages) {
		if (availableCount < pages) {
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
			return false;
		}
		availableCount -= pages;
		return true;
	}
};
class InkJet : public Print {
	int availableInk; // 잉크 잔량
public:
	InkJet(string model = "", string manufacturer = "", int printedCount = 0, int availableCount = 0, int availableInk=0)
		: Print(model, manufacturer, printedCount, availableCount) {
		this->availableInk = availableInk;
	}
	
	int getAvailableInk() { return availableInk; }

	void printInkJet(int pages) {
		if (availableInk < pages) {
			cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
			return;
		}

		if (print(pages)) { // 용지 체크 및 차감
			availableInk -= pages;
			cout << "프린트하였습니다." << endl;
		}
	}
	void show() { cout << "잉크젯 : " << getModel() << " ," << getManufacturer() << " ,남은 종이 " << getAvailableCount() << "장 ,남은 잉크 " << getAvailableInk() << endl; }
};
class Laser : public Print {
	int availableToner; // 토너 잔량
public:
	 Laser(string model = "", string manufacturer = "", int printedCount = 0, int availableCount = 0, int availableToner=0)
		: Print(model, manufacturer, printedCount, availableCount) {
		this->availableToner = availableToner;
	}

	int getAvailableToner() { return availableToner; }

	void printLaser(int pages) {
		if (availableToner < pages) {
			cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
			return;
		}

		if (print(pages)) { // 용지 체크 및 차감
			availableToner -= pages;
			cout << "프린트하였습니다." << endl;
		}
	}
	void show() { cout << "레이저 : " << getModel() << " ," << getManufacturer() << " ,남은 종이 " << getAvailableCount() << "장 ,남은 토너 " << getAvailableToner() << endl; }
};

int main()
{
	InkJet inkjet("Officejet V40", "HP", 0, 5, 10);
	Laser laser("SCX-6x45", "삼성전자", 0, 3, 20);
	cout << "현재 작동중인 2 대의 프린터는 아래와 같다." << endl;
	inkjet.show();
	laser.show();

	while (true)
	{
		cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		int name, cnt; cin >> name >> cnt;
		if (name == 1)
		{
			inkjet.printInkJet(cnt);
		}
		else if (name == 2)
		{
			laser.printLaser(cnt);
		}
		else
		{
			cout << "올바른 프린터와 매수를 입력해주세요." << endl;
			continue;
		}
		inkjet.show();
		laser.show();
		cout << "게속 프린트 하시겠습니까(y/n)>>";
		string cmd; cin >> cmd;
		if (cmd == "n") break;
	}
}