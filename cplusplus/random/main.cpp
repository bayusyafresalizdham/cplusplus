#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0));
    int c[10];
    for(int a =0;a<10;a++){
        c[a] =rand() % 20 ;
        cout << setw(3) << a << setw(17)<< c[a] << setw(19) ;
        for(int k =0;k<c[a];k++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
