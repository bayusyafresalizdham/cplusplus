#include <iostream>

using namespace std;

int main()
{
    for(int a=0;a<4;a++){
        if(a == 0 || a==3){
            for(int b=0;b<4;b++){
                cout << "*";
            }
            cout << "\n";
        }else{
            for(int b=0;b<4;b++){
                if(b ==0 || b == 3){
                cout << "*";
                }else{
                cout << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
