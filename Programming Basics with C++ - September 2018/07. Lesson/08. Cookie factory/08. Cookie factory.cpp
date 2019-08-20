#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        string ingredient;
        cin >> ingredient;

        bool flour = false, eggs = false, sugar = false;
        while(ingredient != "Bake!" || !flour || !eggs || !sugar ){

                if(ingredient == "flour"){
                    flour = true;
                }else if(ingredient == "eggs"){
                    eggs = true;
                }else if(ingredient == "sugar"){
                    sugar = true;
                }

                if(ingredient == "Bake!" && (!flour || !eggs || !sugar)){
                    cout << "The batter should contain flour, eggs and sugar!" << endl;
                }

                cin >> ingredient;
        }
        cout << "Baking batch number " << i << "..." << endl;
    }


    return 0;
}
