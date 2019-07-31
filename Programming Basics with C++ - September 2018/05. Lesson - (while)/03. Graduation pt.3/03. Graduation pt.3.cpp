#include <iostream>

using namespace std;

int main(){

    string name;
    cin >> name;
    int grades = 1;
    double sum = 0;
    bool passed = true;
    while(grades <= 12)
    {
      double grade;
      cin >> grade;
      if(grade >= 4.0){
        sum += grade;}
      else if(passed){
        passed = false;}
      else
        break;
      grades++;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    if(grades > 12)
      cout << name << " graduated. Average grade: "<< sum / 12 << endl;
    else
      cout << name << " has been excluded at " << --grades << " grade" << endl;
}
