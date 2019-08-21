#include <iostream>
#include <string>

using namespace std;

int main(){

    string n;
    cin >> n;

    int arrayy[20];

    for(int i = 0; i < n.size(); i++){     // creating rows long as n
            arrayy[i] = n[i] - '0';
    }
    for (int kl = n.size(); kl >= 1; kl--) { // reading digits from last to first (oldest one)
    for (int zl = arrayy[kl-1]; zl >=1; zl--) {//------------    printing AscII symbols digits time

            int New_num = arrayy[kl - 1] + 33;

            if(arrayy[kl-1]==0){
                cout << "ZERO";
            }
            else {
                cout << char(New_num) ;
            }

        }
        cout << endl;

    }

    system("pause");
    return 0;
}
