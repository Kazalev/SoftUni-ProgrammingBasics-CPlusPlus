#include <iostream>
#include <cmath>

using namespace std;

int main (){

    int days, sladkari, cakes, waffles, pancakes;
    cin >> days >> sladkari >> cakes >> waffles >> pancakes;

    int priceCakes = cakes * 45;
    double priceWaffles = waffles * 5.80;
    double pricePancakes = pancakes * 3.20;
    double sumDay = (priceCakes + priceWaffles + pricePancakes) * sladkari;
    double sumCampaign = sumDay * days;
    double sumCost = sumCampaign - (sumCampaign / 8 );

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << sumCost << endl;

    return 0;
}
