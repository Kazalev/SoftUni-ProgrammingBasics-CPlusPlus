#include <iostream>
#include <cmath>
using namespace std;

int main (){

    double income, mark, minSalary, scholarship, ExScholarship;
    cin >> income >> mark >> minSalary;

    ExScholarship = mark * 25;
    scholarship = minSalary * 0.35;

    if(mark < 4.50){
        cout << "You cannot get a scholarship!" << endl;
    }
    else if(income > minSalary && mark < 5.50){
        cout << "You cannot get a scholarship!" << endl;
    }
    /* else if(income < minSalary && mark < 4.50){
        cout << "You cannot get a scholarship!" << endl;
    } */

    else if (income < minSalary && mark >= 4.50 && mark < 5.50){
        cout << "You get a Social scholarship " << floor(scholarship) << " BGN" << endl;
    }
    else if (income < minSalary && mark >= 5.50 && scholarship > ExScholarship){
        cout << "You get a Social scholarship " << floor(scholarship) << " BGN" << endl;
    }



    else if (income < minSalary && mark >= 5.50 && scholarship < ExScholarship){
        cout << "You get a scholarship for excellent results " << floor(ExScholarship) << " BGN" << endl;
    }
    else if (income > minSalary && mark >= 5.50){
        cout << "You get a scholarship for excellent results " << floor(ExScholarship) << " BGN" << endl;
    }

    return 0;
}
