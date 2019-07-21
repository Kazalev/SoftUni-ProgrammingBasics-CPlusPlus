#include <iostream>

using namespace std;

int main(){

   string type;
   cin >> type;
   double area = 0;

   if (type == "square"){
        double side;
        cin >> side;
        area = side * side;
   }
   else if (type == "rectangle"){
        double a, b;
        cin >> a >> b;
        area = a * b;
   }
   else if (type == "circle"){
        double r, pi = 3.14159265359;
        cin >> r;
        area = pi * r * r;
   }
   else if (type == "triangle"){
        double side, height;
        cin >> side >> height;
        area = side * height / 2;
   }

   cout.setf(ios::fixed);
   cout.precision(3);
   cout << area << endl;

    return 0;
}
