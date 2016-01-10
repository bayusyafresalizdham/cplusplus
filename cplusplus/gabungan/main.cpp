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
    int input,jum;
    cout << "Daftar Pilihan ";
    cout << "\n1. kotak";
    cout << "\n2. frame kotak";
    cout << "\n3. Segitiga siku siku";
    cout << "\n4. Segitigat siku siku terbalik";
    cout << "\n5. Belah Ketupat";
    cout << "\n6. Segitiga Sama Sisi";
    cout << "\n7. Segitiga Pascal";
    cout << "\n8. Kotak Alphabet";
    cout << "\n9. Kotak Obat Nyamuk";
    cout << "\nMasukan pilihan : ";
    cin >> input;
    cout << "Masukan jumlah Panjang : ";
    cin >> jum;
    if(input == 1){
        for(int a=0;a<jum;a++){
        for(int b=0;b<jum;b++){
            cout << "*";
        }
        cout << "\n";
        }
    }else if(input == 2){
        for(int a=0;a<jum;a++){
        if(a == 0 || a==jum-1){
            for(int b=0;b<jum;b++){
                cout << "*";
            }
            cout << "\n";
        }else{
            for(int b=0;b<jum;b++){
                if(b ==0 || b == jum-1){
                cout << "*";
                }else{
                cout << " ";
                }
            }
            cout << "\n";
        }
        }
    }else if(input == 3){
        for(int a=0;a<=jum;a++){
            for(int b=0;b<a;b++){
                cout << "*";
            }
            cout << "\n";
        }
    }else if(input ==4){
         for(int a=0;a<=jum;a++){
            for(int b=a;b<jum;b++){
                cout << " ";
            }
            for(int b=0;b<a;b++){
                cout << "";
            }
            for(int b=0;b<a;b++){
                cout << "*";
            }
            cout << "\n";
        }
    }else if(input == 5){
        for(int a=0;a<jum;a++){
            for(int b=a;b<jum;b++){
                cout << " ";
            }
            for(int b=1;b<a;b++){
                cout << "*";
            }
            for(int b=0;b<a;b++){
                cout << "*";
            }
            cout << "\n";
        }
        for(int a=0;a<jum;a++){

            for(int b=0;b<a;b++){
                cout << " ";
            }
             for(int b=a+1;b<jum;b++){
                cout << "*";
            }
             for(int b=a;b<jum;b++){
                cout << "*";
            }
            cout << "\n";
        }
    }else if(input == 6){
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
    }else if(input == 7){
        int a;
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
    }else if(input == 8){
        int g=0;
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
    }else if(input == 9){
        int f = jum;
        int g=0;
        int c=0;
        int cakhir=0;
        int cakhir1=0;
        int ctengah=0;
        int h=0;
        bool check = true;
        for(int a=0;a<1;a++){

            for(int b=g;b<f;b++){
                checkabjar(b);
                c = 0+f-1;
            }

            cout << "\n";
            for(int b=g+f;b<f+f;b++){
                if(b == f+f-1){
                    c = c+1;
                    checkabjar(c);
                 }
                 else if(b==g+f){
                    cakhir=(c+1)*2+3;
                    cakhir1 =(c+1)*2+3;
                    checkabjar(cakhir);
                 }else{
                     int j=++cakhir;
                     ctengah =cakhir;
                     checkabjar(j);
                 }
            }
            cout << "\n";
             for(int b=g+f+f;b<f+f+f;b++){
                 if(b == f+f+f-1){
                    c = c+1;
                    checkabjar(c);
                 }
                 else if(b==g+f+f){
                    cakhir1=cakhir1-1;
                    checkabjar(cakhir1);
                 }else{
                    if(check == true){
                       h = ctengah +f-1;
                       check = false;
                    }
                     int a=--h;
                     checkabjar(a);

                 }
            }
            cout << "\n";
            for(int b=c+f;b>=c+1;b--){
                 checkabjar(b);
            }
            cout << "\n";

        }
    }
    return 0;
}
