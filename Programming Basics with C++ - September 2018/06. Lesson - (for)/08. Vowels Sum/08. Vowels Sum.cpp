#include <iostream>
#include <string>

using namespace std;

int main(){

    string word;
    getline(cin, word);

    int sum = 0;

    for(int i = 0; i < word.size(); i++){
       char letter = word[i];

       switch(letter){
        case 'a':
        sum += 1;
        break;
        case 'e':
        sum += 2;
        break;
        case 'i':
        sum += 3;
        break;
        case 'o':
        sum += 4;
        break;
        case 'u':
        sum += 5;
        break;
       }
    }

    cout << sum << endl;

    return 0;
}
