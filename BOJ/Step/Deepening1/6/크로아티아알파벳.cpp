#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[101];
    cin >> str;
    int str_len = strlen(str);
    // 크로아티아 알파벳
    // č	c=
    // ć	c-
    // dž	dz=
    // đ	d-
    // lj	lj
    // nj	nj
    // š	s=
    // ž	z=
    int count = 0;
    for (int i = 0; i<str_len; i++)
    {
        if (str[i] == 'c' && str[i+1] == '=')
        {
            count++;
            i++;
        }
        else if (str[i] == 'c' && str[i+1] == '-')
        {
            count++;
            i++;
        }
        else if (str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '=')
        {
            count++;
            i += 2;
        }
        else if (str[i] == 'd' && str[i+1] == '-')
        {
            count++;
            i++;
        }
        else if (str[i] == 'l' && str[i+1] == 'j')
        {
            count++;
            i++;
        }
        else if (str[i] == 'n' && str[i+1] == 'j')
        {
            count++;
            i++;
        }
        else if (str[i] == 's' && str[i+1] == '=')
        {
            count++;
            i++;
        }
        else if (str[i] == 'z' && str[i+1] == '=')
        {
            count++;
            i++;
        }
        else
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}