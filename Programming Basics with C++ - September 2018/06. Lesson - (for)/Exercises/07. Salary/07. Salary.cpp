#include <iostream>
#include <string>

using namespace std;

int main(){

    int n, salary;
    cin >> n >> salary;

    int fineFacebook = 150;
    int fineInstagram = 100;
    int fineReddit = 50;

    bool isBroke = false;

    for(int i = 0; i < n; i++){
        string site;
        cin >> site;

        if(site == "Facebook"){
            salary = salary - fineFacebook;
        }
        else if(site == "Instagram"){
            salary -= fineInstagram;
        }
        else if(site == "Reddit"){
            salary -= fineReddit;
        }
        if(salary <= 0){
            cout << "You have lost your salary." << endl;
            isBroke = true;
            break;
        }

    }
    if(isBroke == false)
    {
        cout << salary << endl;
    }


    return 0;
}
