#include <iostream>
#include <string>

using namespace std;

int main(){

    string book;
    string nextBook;
    int numberBooks;
    int counter = 0;

    getline(cin, book);
    cin >> numberBooks;

    while(true){
        getline(cin, nextBook);
        counter++;

        if(nextBook != book){

        }

    }



   if(book == numberBooks){
        cout << "You checked " << counter << " books and found it." << endl;
    }else if(counter = numberBooks){
    cout << "The book you search is not here! " << "You checked " << counter << " books." << endl;}

    return 0;
}
