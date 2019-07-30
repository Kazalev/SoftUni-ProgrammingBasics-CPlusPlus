#include <iostream>
#include <cmath>

using namespace std;
int main(){

    int n1, n2, result;
    char op;
    cin >> n1 >> n2 >> op;

   if(op == '+'){
        result = n1 + n2;
        if(result % 2 == 0){
            cout << n1 << " " << op << " " << n2 << " = " << result << " - " << "even" << endl;
    }else { cout << n1 << " " << op << " " << n2 << " = " << result << " - " << "odd" << endl; }
    }

    if(op == '-'){
        result = n1 - n2;
        if(result % 2 == 0){
            cout << n1 << " " << op << " " << n2 << " = " << result << " - " << "even" << endl;
    }else { cout << n1 << " " << op << " " << n2 << " = " << result << " - " << "odd" << endl; }
    }

    else if(op == '*'){
        result = n1 * n2;
        if(result % 2 == 0){
            cout << n1 << " " << op << " " << n2 << " = " << result << " - " << "even" << endl;
    }else { cout << n1 << " " << op << " " << n2 << " = " << result << " - " << "odd" << endl; }
    }

    else if(op == '/'){
        double result1;
        double n11 = n1;
        double n22 = n2;
        cout.setf(ios::fixed);
        cout.precision(2);
         if (n2 == 0){
        cout << "Cannot divide " << n1 << " by zero" << endl;
        }else{
         result1 = n11 / n22;
         cout << n1 << " " << op << " " << n2 << " = " << result1 << endl;
        }
    }

    else if (op == '%'){
         if (n2 == 0){
        cout << "Cannot divide " << n1 << " by zero" << endl;
        }
        else{ result = n1 % n2;
        cout << n1 << " " << op << " " << n2 << " = " << result << endl;
        }
    }


    return 0;
}
