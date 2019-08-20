#include <iostream>

using namespace std;

int main(){

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    for(int i = a; i <= b; i++){
        int x1 = i;
        for(int j = a;j <= b; j++){
            int x2 = j;
            if(x2!=x1){
                for(int i=c; i<=d; i++){
                    int y1=i;
                    for(int j=c; j<=d; j++){
                        int y2=j;
                        if(y2!=y1){
                                if(x1+y2==x2+y1){

                                cout << x1 << x2 << endl;
                                cout << y1 << y2 << endl;
                                cout << endl;
                                }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
