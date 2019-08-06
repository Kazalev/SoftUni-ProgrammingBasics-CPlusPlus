#include <iostream>
#include <string>

using namespace std;

int main(){

    int width, length, height;
    cin >> width >> length >> height;

    int volume = width * length * height;

    string boxes;
    cin >> boxes;

    while(boxes != "Done"){
        int currentCount;

        currentCount = stoi(boxes);
        volume -= currentCount;

        if(volume <= 0){
            break;
        }
        cin >> boxes;
    }

    if(volume < 0){
        cout << "No more free space! You need "
       << volume * -1 << " Cubic meters more." << endl;
    }else{
        cout << volume << " Cubic meters left." << endl;
    }

    return 0;
}
