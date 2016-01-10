#include <iostream>

using namespace std;

int main()
{
     int jum,a;

    cout<<"masukkan batas : ";
    cin>>jum;
    for (int i=0; i<=jum; i++){
        for (int k=0; k<=((2*jum)-(2*i)); k++){
            cout<<" ";
        }
        for (int j=0; j<=i; j++){
            if (j==0||i==j){
                a=1;
            }else{
                a=a*(i+1-j)/j;
            }
            cout<<"  ";
            cout<<a;
            cout<<" ";
        }
            cout<<" ";
        cout<<endl<<endl;
    }
    return 0;
}
