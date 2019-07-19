#include <iostream>

using namespace std;

int main(){

    double value;
    cin >> value;
    string input;
    cin >> input;
    string output;
    cin >> output;

    double usd = 1.79549;
    double eur = 1.95583;
    double gbp = 2.53405;
    double bgn = 1.0;

    if(input == "USD")
    {
        value = value * usd;
    }

    if(input == "EUR")
    {
        value = value * eur;
    }

    if(input == "GBP")
    {
        value = value * gbp;
    }


    if(output == "BGN")
    {
        value = value / bgn;
    }
    if(output == "USD")
    {
        value = value / usd;
    }
    if(output == "EUR")
    {
        value = value / eur;
    }
    if(output == "GBP")
    {
        value = value / gbp;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << value << " " << output << endl;


    return 0;
}
