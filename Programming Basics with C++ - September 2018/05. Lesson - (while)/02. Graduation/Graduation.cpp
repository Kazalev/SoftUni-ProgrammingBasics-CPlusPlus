#include <iostream>
#include <string>

using namespace std;

int main(){

    string name;
    cin >> name;

    int grade = 1;
    double totalMarks;

    while(grade <= 12){
        double mark;
        cin >> mark;

        if(mark >= 4.00){
            totalMarks += mark;
            grade++;
        }
    }
    grade--;
    double average = totalMarks / grade;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << name << " graduated. Average grade: " << average << endl;


    return 0;
}
