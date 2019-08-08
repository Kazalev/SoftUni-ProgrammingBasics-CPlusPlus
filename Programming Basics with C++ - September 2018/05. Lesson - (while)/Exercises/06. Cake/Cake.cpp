#include<iostream>

using namespace std;

int main(){

    int pieces = 0;
    int width, lenght;
    cin >> width >> lenght;
    cin.ignore();
    pieces = width * lenght;
    string getPieces;
    getline (cin, getPieces);
    int allPieces = 0;

    while(getPieces != "STOP"){
        int piecesAsStr;
        piecesAsStr = stoi(getPieces);
        allPieces+=piecesAsStr;

        if(allPieces > pieces){
            break;
        }
        getline(cin, getPieces);
    }

    if(getPieces == "STOP"){
        cout << pieces - allPieces << " pieces are left." << endl;
    }else if(allPieces >= pieces){
        cout << "No more cake left! You need " << allPieces - pieces << " pieces more." << endl;
    }


    return 0;
}
