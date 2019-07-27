#include <iostream>
#include <cmath>

using namespace std;

int main(){

    string year;
    int p, h;
    double leapGames;
    cin >> year >> p >> h;

    double gamesSofia = (48 - h) * 0.75;
    double sofiaHoliday = p * 0.66666667;
    double allGames = gamesSofia + sofiaHoliday + h;

    if(year == "leap"){
       leapGames = allGames * 0.15;
        cout << floor(leapGames + allGames) << endl;
    }else{
        cout << floor(allGames) << endl;
    }

    return 0;
}
