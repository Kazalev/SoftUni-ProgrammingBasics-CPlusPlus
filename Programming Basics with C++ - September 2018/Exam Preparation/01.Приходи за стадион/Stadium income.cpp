#include <iostream>

using namespace std;

int main(){

    int sectors ,capacity;
    double priceTicet;
    cin >> sectors >> capacity >> priceTicet;


    double totalIncome = capacity * priceTicet;
    double incomePerSector = totalIncome / sectors;
    double charity = (totalIncome - (incomePerSector * 0.75)) / 8;


    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Total income - " << totalIncome << " BGN" << endl;
    cout << "Money for charity - " << charity << " BGN" << endl;


    return 0;
}
