#include <iostream>

using namespace std;

int main(){

    int floors, rooms;
    cin >> floors >> rooms;

    for(int f = floors; f >= 1; f--){
        for(int r = 0; r < rooms; r++){
                if(f == floors){
                    cout << "L" << f << r << " ";
                }else{
                    if(f % 2 == 0){
                    cout << "O" << f << r << " ";
                    }else{
                        cout << "A" << f << r << " ";
                        }
                }
        }
        cout << endl;
    }


    return 0;
}
