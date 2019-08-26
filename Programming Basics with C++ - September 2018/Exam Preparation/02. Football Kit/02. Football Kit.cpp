#include <iostream>

using namespace std;

int main(){

    double tshirtPrice, sumForBall;
    cin >> tshirtPrice >> sumForBall;

    double shortsPrice = tshirtPrice * 0.75;
    double socksPrice  = shortsPrice * 0.20;
    double bootsPrice  = (tshirtPrice + shortsPrice) * 2;
    double totalSum = tshirtPrice + shortsPrice + socksPrice + bootsPrice;
    double totalSumAfterDiscount = totalSum * 0.85;



    cout.setf(ios::fixed);
    cout.precision(2);
    if(totalSumAfterDiscount >= sumForBall){
        cout << "Yes, he will earn the world-cup replica ball!" << endl;
        cout << "His sum is " << totalSumAfterDiscount << " lv." << endl;
    }else{
        cout << "No, he will not earn the world-cup replica ball." << endl;
        cout << "He needs " << sumForBall - totalSumAfterDiscount << " lv. more." << endl;
    }




    return 0;
}
