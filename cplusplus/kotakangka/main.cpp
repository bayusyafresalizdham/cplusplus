#include <iostream>

using namespace std;
void checkabjar(int b){
    if(b==0){
                cout << "A";
            }else if(b==1){
                cout << "B";
            }else if(b==2){
                cout << "C";
            }else if(b==3){
                cout << "D";
            }else if(b==4){
                cout << "E";
            }else if(b==5){
                cout << "F";
            }else if(b==6){
                cout << "G";
            }else if(b==7){
                cout << "H";
            }else if(b==8){
                cout << "I";
            }else if(b==9){
                cout << "J";
            }else if(b==10){
                cout << "K";
            }else if(b==11){
                cout << "L";
            }else if(b==12){
                cout << "M";
            }else if(b==13){
                cout << "N";
            }else if(b==14){
                cout << "O";
            }else if(b==15){
                cout << "P";
            }else if(b==16){
                cout << "Q";
            }else if(b==17){
                cout << "R";
            }else if(b==18){
                cout << "S";
            }else if(b==19){
                cout << "T";
            }else if(b==20){
                cout << "U";
            }else if(b==21){
                cout << "V";
            }else if(b==22){
                cout << "W";
            }else if(b==23){
                cout << "X";
            }else if(b==24){
                cout << "Y";
            }else if(b==25){
                cout << "Z";
            }else{
                cout << " ";
            }

}
int main()
{
    int jum = 0;
    int g=0;
    cout << "masukan jumlah baris";
    cin >> jum;
    for(int a=0;a<1;a++){

        for(int b=g;b<jum;b++){
            checkabjar(b);
        }

        cout << "\n";
        for(int b=g+jum;b<jum+jum;b++){
            checkabjar(b);
        }
        cout << "\n";
         for(int b=g+jum+jum;b<jum+jum+jum;b++){
            checkabjar(b);
        }
        cout << "\n";
        for(int b=g+jum+jum+jum;b<jum+jum+jum+jum;b++){
            checkabjar(b);
        }
        cout << "\n";
        for(int b=g+jum+jum+jum+jum;b<jum+jum+jum+jum+jum;b++){
            checkabjar(b);
        }
        cout << "\n";

    }
    return 0;
}
