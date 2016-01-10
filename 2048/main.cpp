#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>
using namespace std;

int main()
{

    int a[17][4]={{1,3,3,3},{4,2,2,2},{4,2,2,2},{4,2,2,2},{1,3,3,3},{4,2,2,2},{4,2,2,2},{4,2,2,2},{1,3,3,3},{4,2,2,2},{4,2,2,2},{4,2,2,2},{1,3,3,3},{4,2,2,2},{4,2,2,2},{4,2,2,2},{1,3,3,3}};
    int b[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    // change value array b with {{2,4,2,4},{4,2,4,2},{2,4,2,4},{4,2,4,2}}; for check gameover
    // change value array b with {{2048,4,2,4},{4,2,4,2},{2,4,2,4},{4,2,4,2}}; for check gameover
    bool kondisi=true,key=true;
    int checknilai=1;
    int pl=-1;
    int x,y;
    int check=0;
    int score=0;int op=0;
    srand(time(0));
    int nol=0;
    for(int i=0;i>-1;i++){
        kondisi=true;
        check=0;
        op =0;
        nol=0;
        for(int k=0;k<4;k++){
            for(int l=0;l<4;l++){
                 if(b[k][l] == 2048){
                    key = false;
                 }else if(b[k][l]!=0){
                    nol++;
                 }
            }
        }
         for(int k=0;k<4;k++){
            for(int l=0;l<4;l++){
                if(k==0 && l==0){
                     if(b[0][0]!=b[0][1]&&b[0][0]!=b[1][0]){
                        op=op+1;
                     }
                }else if(k== 0 && l==1){
                    if(b[0][1]!=b[0][2]&&b[0][1]!=b[1][1]&&b[0][1]!=b[0][0]){
                         op=op+1;
                     }
                }else if(k== 0 && l==2){
                    if(b[0][2]!=b[0][3]&&b[0][2]!=b[1][2]&&b[0][2]!=b[0][1]){
                         op=op+1;
                     }
                }else if(k== 0 && l==3){
                    if(b[0][3]!=b[0][2]&&b[0][3]!=b[1][3]){
                         op=op+1;
                     }
                }else if(k== 1 && l==0){
                    if(b[1][0]!=b[1][1]&&b[1][0]!=b[0][0]&&b[1][0]!=b[2][0]){
                         op=op+1;
                     }
                }else if(k== 1 && l==1){
                    if(b[1][1]!=b[1][2]&&b[1][1]!=b[1][0]&&b[1][1]!=b[2][1]&&b[1][1]!=b[0][1]){
                         op=op+1;
                     }
                }else if(k== 1 && l==2){
                    if(b[1][2]!=b[1][3]&&b[1][2]!=b[1][1]&&b[1][2]!=b[2][2]&&b[1][2]!=b[0][2]){
                         op=op+1;
                     }
                }else if(k== 1 && l==3){
                    if(b[1][3]!=b[1][2]&&b[1][3]!=b[0][3]&&b[1][3]!=b[2][3]){
                         op=op+1;
                     }
                }else if(k== 2 && l==0){
                    if(b[2][0]!=b[2][1]&&b[2][0]!=b[1][0]&&b[2][0]!=b[3][0]){
                         op=op+1;
                     }
                }else if(k== 2 && l==1){
                    if(b[2][1]!=b[2][2]&&b[2][1]!=b[2][0]&&b[2][1]!=b[3][1]&&b[2][1]!=b[1][1]){
                         op=op+1;
                     }
                }else if(k== 2 && l==2){
                    if(b[2][2]!=b[2][3]&&b[2][2]!=b[2][1]&&b[2][2]!=b[3][2]&&b[2][2]!=b[1][2]){
                         op=op+1;
                     }
                }else if(k== 2 && l==3){
                    if(b[2][3]!=b[2][2]&&b[2][3]!=b[1][3]&&b[2][3]!=b[3][3]){
                         op=op+1;
                     }
                }else if(k== 3 && l==0){
                    if(b[3][0]!=b[3][1]&&b[3][0]!=b[2][0]){
                         op=op+1;
                     }
                }else if(k== 3 && l==1){
                    if(b[3][1]!=b[3][2]&&b[3][1]!=b[3][0]&&b[3][1]!=b[2][1]){
                         op=op+1;
                     }
                }else if(k== 3 && l==2){
                    if(b[3][2]!=b[3][3]&&b[3][2]!=b[3][1]&&b[3][2]!=b[2][2]){
                         op=op+1;
                     }
                }else if(k== 3 && l==3){
                    if(b[3][3]!=b[3][2]&&b[3][3]!=b[2][3]){
                         op=op+1;
                     }
                }
            }
        }
        if(op == 16 && nol ==16){
            key=false;
        }

        if(key==true){

        for(int k=0;k<4;k++){
            for(int l=0;l<4;l++){
                if(b[k][l] ==0){
                    while(kondisi){
                            x = rand() % 4;
                            y= rand() % 4;
                         if((b[x][y]==0 && b[x][y+1]==0) ||
                            (b[x][y]==0 && b[x][y-1]==0) ||
                            (b[x][y]==0 && b[x+1][y]==0) ||
                            (b[x][y]==0 && b[x-1][y]==0)){
                            b[x][y]=b[x][y] + 2;
                            kondisi=false;
                         }else if((b[x][y]==0 && b[x][y+1]==2) || (b[x][y]==0 && b[x+1][y]==2)){
                            b[x][y]=b[x][y] +2;
                            kondisi=false;
                         }else if((b[x][y]==0 && b[x][y-1]==2) || (b[x][y]==0 && b[x-1][y]==2)){
                            b[x][y]=b[x][y] +2;
                            kondisi=false;
                         }else if((b[x][y]==0 && b[x][y+1]==4) || (b[x][y]==0 && b[x+1][y]==4)){
                            b[x][y]=b[x][y] +4;
                            kondisi=false;
                         }else if((b[x][y]==0 && b[x][y-1]==4) || (b[x][y]==0 && b[x-1][y]==4)){
                            b[x][y]=b[x][y] +4;
                            kondisi = false;
                         }else {
                            kondisi = true;
                         }
                    }
                }
            }
            }
        }
        for(int i=0;i<17;i++){
            for(int j=0;j<4;j++){
                if(a[i][j]==1){
                    cout << "#####";
                }else if(a[i][j]==3){
                    cout << "########";
                }else if(a[i][j]==4){
                    if(i==2){
                        if(b[0][j]>9&&b[0][j]<100){
                            cout << "#   "<<b[0][j]<< " #";
                        }else if(b[0][j]>99 && b[0][j]<1000){
                            cout << "#  "<<b[0][j]<< " #";
                        }else if(b[0][j]>999 && b[0][j]<10000){
                            cout << "# "<<b[0][j]<< " #";
                        }else if(b[0][j]==0){
                            cout << "#      #";
                        }else{
                            cout << "#    "<<b[0][j]<< " #";
                        }
                    }else if(i==6){

                        if(b[1][j]>9&&b[1][j]<100){
                            cout << "#   "<<b[1][j]<< " #";
                        }else if(b[1][j]>99 && b[1][j]<1000){
                            cout << "#  "<<b[1][j]<< " #";
                        }else if(b[1][j]>999 && b[1][j]<10000){
                            cout << "# "<<b[1][j]<< " #";
                        }else if(b[1][j]==0){
                            cout << "#      #";
                        }else{
                            cout << "#    "<<b[1][j]<< " #";
                        }
                    }else if(i==10){

                        if(b[2][j]>9&&b[2][j]<100){
                            cout << "#   "<<b[2][j]<< " #";
                        }else if(b[2][j]>99 && b[2][j]<1000){
                            cout << "#  "<<b[2][j]<< " #";
                        }else if(b[2][j]>999 && b[2][j]<10000){
                            cout << "# "<<b[2][j]<< " #";
                        }else if(b[2][j]==0){
                            cout << "#      #";
                        }else{
                            cout << "#    "<<b[2][j]<< " #";
                        }
                    }else if(i==14){
                        if(b[3][j]>9&&b[3][j]<100){
                            cout << "#   "<<b[3][j]<< " #";
                        }else if(b[3][j]>99 && b[3][j]<1000){
                            cout << "#  "<<b[3][j]<< " #";
                        }else if(b[3][j]>999 && b[3][j]<10000){
                            cout << "# "<<b[3][j]<< " #";
                        }else if(b[3][j]==0){
                            cout << "#      #";
                        }else{
                            cout << "#    "<<b[3][j]<< " #";
                        }
                    }else {
                        cout << "#      #";
                    }
                }else if(a[i][j]==2){
                    if(i==2){
                        if(b[0][j]>9&&b[0][j]<100){
                            cout << "   "<<b[0][j]<< " #";
                        }else if(b[0][j]>99 && b[0][j]<1000){
                            cout << "  "<<b[3][j]<< " #";
                        }else if(b[0][j]>999 && b[0][j]<10000){
                            cout << " "<<b[0][j]<< " #";
                        }else if(b[0][j]==0){
                            cout << "      #";
                        }else{
                            cout << "    "<<b[0][j]<< " #";
                        }
                    }else if(i==6){

                        if(b[1][j]>9&&b[1][j]<100){
                            cout << "   "<<b[1][j]<< " #";
                        }else if(b[1][j]>99 && b[1][j]<1000){
                            cout << "  "<<b[1][j]<< " #";
                        }else if(b[1][j]>999 && b[1][j]<10000){
                            cout << " "<<b[1][j]<< " #";
                        }else if(b[1][j]==0){
                            cout << "      #";
                        }else{
                            cout << "    "<<b[1][j]<< " #";
                        }
                    }else if(i==10){

                        if(b[2][j]>9&&b[2][j]<100){
                            cout << "   "<<b[2][j]<< " #";
                        }else if(b[2][j]>99 && b[2][j]<1000){
                            cout << "  "<<b[2][j]<< " #";
                        }else if(b[2][j]>999 && b[2][j]<10000){
                            cout << " "<<b[2][j]<< " #";
                        }else if(b[2][j]==0){
                            cout << "      #";
                        }else{
                            cout << "    "<<b[2][j]<< " #";
                        }
                    }else if(i==14){
                        if(b[3][j]>9&&b[3][j]<100){
                            cout << "   "<<b[3][j]<< " #";
                        }else if(b[3][j]>99 && b[3][j]<1000){
                            cout << "  "<<b[3][j]<< " #";
                        }else if(b[3][j]>999 && b[3][j]<10000){
                            cout << " "<<b[3][j]<< " #";
                        }else if(b[3][j]==0){
                            cout << "      #";
                        }else{
                            cout << "    "<<b[3][j]<< " #";
                        }
                    }else {
                        cout << "      #";
                    }
                }else{
                    cout << a[i][j];
                }

            }
            cout << "\n";
        }

        if(key == true){cout << "Score : " << score;}
        else{cout << "Score : " << score << "\n";cout << "Game Over";}
        if(key==true){
        char key=getch();
        if(key == 'd'){
            system("cls");
            for(int k=0;k<4;k++){
                bool check = true;
                for(int l=3;l>=0;l--){
                    if(l!=0){
                        if(b[k][l]==b[k][l-1]){
                            score = score +(b[k][l]*2);
                            b[k][l]=b[k][l]+b[k][l-1];
                            b[k][l-1]=0;
                        }
                        for(int k=0;k<4;k++){
                            for(int l=3;l>=0;l--){
                                if(l!=0){
                                    if(b[k][l]==0){
                                       b[k][l]=b[k][l]+b[k][l-1];
                                        b[k][l-1]=0;
                                    }
                                }
                            }
                        }
                    }
                }
            }

        }else if(key == 'a'){
            system("cls");
            for(int k=0;k<4;k++){
                for(int l=0;l<4;l++){
                    if(l!=0){
                        if(b[k][l]==b[k][l-1]){
                            score = score +(b[k][l]*2);
                            b[k][l-1]=b[k][l]+b[k][l-1];
                            b[k][l]=0;
                        }
                         for(int k=0;k<4;k++){
                            for(int l=0;l<4;l++){
                                 if(l!=0){
                                    if(b[k][l-1]==0){
                                        b[k][l-1]=b[k][l]+b[k][l-1];
                                        b[k][l]=0;
                                    }
                                }
                            }
                        }
                    }
                }
            }

        }else if(key == 'w'){
            system("cls");
            for(int k=0;k<4;k++){
                for(int l=0;l<4;l++){
                    if(k!=0){
                        if(b[k][l]==b[k-1][l]){
                            score = score +(b[k][l]*2);
                            b[k-1][l]=b[k][l]+b[k-1][l];
                            b[k][l]=0;
                        }
                         for(int k=0;k<4;k++){
                            for(int l=0;l<4;l++){
                                 if(k!=0){
                                    if(b[k-1][l]==0){
                                        b[k-1][l]=b[k][l]+b[k-1][l];
                                        b[k][l]=0;
                                    }
                                }
                            }
                        }
                    }
                }
            }

        }else if(key=='s'){
            system("cls");
            for(int k=3;k>=0;k--){
                for(int l=3;l>=0;l--){
                    if(k!=3){
                        if(b[k][l]==b[k+1][l]){
                            score = score +(b[k][l]*2);
                            b[k+1][l]=b[k][l]+b[k+1][l];
                            b[k][l]=0;
                        }
                         for(int k=0;k<4;k++){
                            for(int l=0;l<4;l++){
                                 if(k!=3){
                                    if(b[k+1][l]==0){
                                        b[k+1][l]=b[k][l]+b[k+1][l];
                                        b[k][l]=0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        }else{
            char k = getch();
            if(k == 's'){system("cls");}
            else if(k=='d'){system("cls");}
            else if(k=='a'){system("cls");}
            else if(k=='w'){system("cls");}
        }
    }
    return 0;
}
