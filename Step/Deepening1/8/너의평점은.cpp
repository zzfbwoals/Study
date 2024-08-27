#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char name[51], grade[3];
    double credit, creditSum=0, gradeSum=0;
    for(int i=0; i<20; i++)
    {
        cin >> name >> credit >> grade;
        creditSum += credit;
        if(strcmp(grade, "A+") == 0)
            gradeSum += credit*4.5;
        else if(strcmp(grade, "A0") == 0)
            gradeSum += credit*4.0;
        else if(strcmp(grade, "B+") == 0)
            gradeSum += credit*3.5;
        else if(strcmp(grade, "B0") == 0)
            gradeSum += credit*3.0;
        else if(strcmp(grade, "C+") == 0)
            gradeSum += credit*2.5;
        else if(strcmp(grade, "C0") == 0)
            gradeSum += credit*2.0;
        else if(strcmp(grade, "D+") == 0)
            gradeSum += credit*1.5;
        else if(strcmp(grade, "D0") == 0)
            gradeSum += credit*1.0;
        else if(strcmp(grade, "F") == 0)
            gradeSum += credit*0.0;
        else
            continue;
    }
    cout << gradeSum/creditSum << endl;
    return 0;
}