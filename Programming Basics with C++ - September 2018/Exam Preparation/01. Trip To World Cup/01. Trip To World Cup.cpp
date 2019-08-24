#include <iostream>

using namespace std;

int main(){

    double ticketPriceGoing, ticketPriceReturn, ticketPricePerMatch;
    int allMatches;
    double discount;
    cin >> ticketPriceGoing >> ticketPriceReturn >> ticketPricePerMatch >> allMatches >> discount;


    double totalTicketPrice = 6 * (ticketPriceGoing + ticketPriceReturn);
    double totalTicketPriceDiscount = totalTicketPrice * (discount / 100);
    totalTicketPriceDiscount = totalTicketPrice - totalTicketPriceDiscount;
    double totalMatchesSum = 6 * allMatches * ticketPricePerMatch;
    double totalSum = totalTicketPriceDiscount + totalMatchesSum;
    double pricePerFriend = totalSum / 6;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Total sum: " << totalSum << " lv." << endl;
    cout << "Each friend has to pay " << pricePerFriend << " lv." << endl;


    return 0;
}
