#include <iostream>

using namespace std;

int main (){

    double whiskey, beerL, wineL, rakiaL, whiskeyL;
    cin >> whiskey >> beerL >> wineL >> rakiaL >> whiskeyL;

    double rakiaPrice = whiskey / 2;
    double winePrice = rakiaPrice - (0.4 * rakiaPrice);
    double beerPrice = rakiaPrice - (0.8 * rakiaPrice);
    double rakiaSum = rakiaPrice * rakiaL;
    double wineSum = winePrice * wineL;
    double beerSum = beerPrice * beerL;
    double whiskeySum = whiskey * whiskeyL;
    double sum = rakiaSum + wineSum + beerSum + whiskeySum;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << sum << endl;

    return 0;
}
