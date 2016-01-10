#include <iostream>

using namespace std;

int main()
{
    int jum;
    cin >> jum;
    for(int a=0;a<=jum;a++){
        for(int b=a;b<=jum;b++){
            cout << " ";
        }
        for(int b=0;b<a;b++){
            cout << "*";
        }
        for(int b=1;b<a;b++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
