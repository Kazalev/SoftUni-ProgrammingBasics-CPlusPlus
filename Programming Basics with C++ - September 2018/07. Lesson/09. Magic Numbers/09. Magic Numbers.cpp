#include  <iostream>
#include  <cstdlib>
using  namespace  std;
int main()
{
    int n;cin>>n;
 for(int a=1;a<=9;a++){
        for(int b=1;b<=9;b++){
            for(int c=1;c<=9;c++){
                for(int d=1;d<=9;d++){
                    for(int e=1;e<=9;e++){
                            for(int f=1;f<=9;f++){
                       int value=a*b*c*d*e*f;
                       if(value==n){
                        cout<<a<<b<<c<<d<<e<<f<<" ";
                       }
                    }
                }
            }
        }
 }
}
return 0;

}
