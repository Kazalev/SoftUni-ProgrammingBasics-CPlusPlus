#include <iostream>
#include <string>

using namespace std;

int main(){

    int badGradeLimit, grade;
    cin >> badGradeLimit;
    string taskName, lastTaskName;
    double avrGrade = 0;
    int countBadGrades = 0;
    int taskCount = 0;
a
    while(true){
        cin >> taskName;
        cin >> grade;

    }

    cout.setf(ios::fixed);
    cout.precision(2);
    if(taskName == "Enough"){
           cout << "Average score: " << avrGrade / taskCount << endl;
           cout << "Number of problems: " << taskCount << endl;
           cout << "Last problem: " << lastTaskName << endl;
        }
    else if(badGradeLimit = countBadGrades){
           cout << "You need a break, " << countBadGrades << " poor grades." << endl;
        }

    return 0;
}
