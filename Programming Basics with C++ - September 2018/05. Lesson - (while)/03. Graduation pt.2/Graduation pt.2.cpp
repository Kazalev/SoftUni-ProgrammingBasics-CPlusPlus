#include <iostream>
#include <string>

using namespace std;

int main(){

    string name;
    cin >> name;

    double grade = 1;
    double totalMarks;
    int passed = 0;

    while(grade <= 12){
        double mark;
        cin >> mark;

        if(mark >= 4.00){
            totalMarks += mark;
            grade++;
        }
        if(mark < 4){
            passed = passed + 1;
            if(passed > 1){
                cout << name << " has been excluded at " << grade << " grade" << endl;
            }
        }
    }
    grade--;
    double average = totalMarks / grade;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << name << " graduated. Average grade: " << average << endl;


    return 0;
}
