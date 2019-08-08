#include<iostream>
using namespace std;

int main(){
int counter=0;
double input;
cin>>input;

    while(input>=2.00){
    input-=2.00;
    counter++;
    }
    while(input>=1.00){
    input-=1.00;
    counter++;
    }
    while(input>=0.50){
    input-=0.50;
    counter++;
    }
    while(input>=0.20){
    input-=0.20;
    counter++;
    }
    while(input>=0.10){
    input-=0.10;
    counter++;
    }
    while(input>=0.05){
    input-=0.05;
    counter++;
    }
    while(input>=0.02){
    input-=0.02;
    counter++;
    }
    while(input>=0.01){
    input-=0.01;
    counter++;
    break;
    }

cout<<counter<<endl;
return 0;
}
