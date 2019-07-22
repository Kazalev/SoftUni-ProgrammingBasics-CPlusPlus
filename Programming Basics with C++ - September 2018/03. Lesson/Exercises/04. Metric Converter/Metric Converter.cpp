#include <iostream>
using namespace std;

int main(){

    double value;
    string input, output;
    cin >> value >> input >> output;

    double mm = 1000;
    double cm = 100;
    double mi = 0.000621371192;
    double in = 39.3700787;
    double km = 0.001;
    double ft = 3.2808399;
    double yd = 1.0936133;
    double m  = 1.0;


    if (input == "mm"){
        value = value / mm;
    }
    else if (input == "cm"){
        value = value / cm;
    }
    else if (input == "mi"){
        value = value / mi;
    }
    else if (input == "in"){
        value = value / in;
    }
    else if (input == "km"){
        value = value / km;
    }
    else if (input == "ft"){
        value = value / ft;
    }
     else if (input == "yd"){
        value = value / yd;
    }


    if (output == "m"){
        value = value * m;
    }
    if (output == "mm"){
        value = value * mm;
    }
    else if (output == "cm"){
        value = value * cm;
    }
    else if (output == "mi"){
        value = value * mi;
    }
    else if (output == "in"){
        value = value * in;
    }
    else if (output == "km"){
        value = value * km;
    }
    else if (output == "ft"){
        value = value * ft;
    }
    else if (output == "yd"){
        value = value * yd;
    }


    cout.setf(ios::fixed);
    cout.precision(8);
    cout << value << endl;

    return 0;
}
