#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int a1,a2,a3,tot=0,tot1=0;
    char op1,op2,space,op3;
    printf("Input : ");
    scanf("%d%c%c%c%d%c%c%c%d",&a1,&space,&op1,&space,&a2,&space,&op2,&space,&a3);
    printf("Hasil : ");
    if(op1 == '+'){
        tot= a1 + a2;
        if(op2 == '+'){
            tot1 = tot + a3;
            cout << tot1;
        }else if(op2 == '-'){
            tot1 = tot - a3;
            cout << tot1;
        }else if(op2 == '*'){
            tot1 = tot * a3;
            cout << tot1;
        }else if(op2 == '/'){
            tot1 = tot / a3;
            cout << tot1;
        }else if(op2 == '^'){
            tot1 = a1 + pow(a2,a3);
            cout << tot1;
        }else if(op2 == 'v'){
            float per = (float)1/a2;
            tot = pow(a3,per );
            tot1 = a1 + tot;
            cout << tot1;
        }else if(op2 == '%'){
            tot1 = tot % a3;
            cout << tot1;
        }
    }else if(op1 =='-'){
        tot = a1-a2;
        if(op2 == '+'){
            tot1 = tot + a3;
            cout << tot1;
        }else if(op2 == '-'){
            tot1 = tot - a3;
            cout << tot1;
        }else if(op2 == '*'){
            tot1 = tot * a3;
            cout << tot1;
        }else if(op2 == '/'){
            tot1 = tot / a3;
            cout << tot1;
        }else if(op2 == '^'){
            tot1 = a1 - pow(a2,a3);
            cout << tot1;
        }else if(op2 == 'v'){
            float per = (float)1/a2;
            tot = pow(a3,per );
            tot1 = a1 - tot;
            cout << tot1;
        }else if(op2 == '%'){
            tot1 = tot % a3;
            cout << tot1;
        }
    }else if(op1 == '*'){
        tot = a1*a2;
        if(op2 == '+'){
            tot1 = tot + a3;
            cout << tot1;
        }else if(op2 == '-'){
            tot1 = tot - a3;
            cout << tot1;
        }else if(op2 == '*'){
            tot1 = tot * a3;
            cout << tot1;
        }else if(op2 == '/'){
            tot1 = tot / a3;
            cout << tot1;
        }else if(op2 == '^'){
            tot1 = a1 * pow(a2,a3);
            cout << tot1;
        }else if(op2 == 'v'){
            float per = (float)1/a2;
            tot = pow(a3,per );
            tot1 = a1 * tot;
            cout << tot1;
        }else if(op2 == '%'){
            tot1 = tot % a3;
            cout << tot1;
        }
    }else if(op1 == '/'){
        tot = a1/a2;
        if(op2 == '+'){
            tot1 = tot + a3;
            cout << tot1;
        }else if(op2 == '-'){
            tot1 = tot - a3;
            cout << tot1;
        }else if(op2 == '*'){
            tot1 = tot * a3;
            cout << tot1;
        }else if(op2 == '/'){
            tot1 = tot / a3;
            cout << tot1;
        }else if(op2 == '^'){
            tot1 = a1 / pow(a2,a3);
            cout << tot1;
        }else if(op2 == 'v'){
            float per = (float)1/a2;
            tot = pow(a3,per );
            tot1 = a1 / tot;
            cout << tot1;
        }else if(op2 == '%'){
            tot1 = tot % a3;
            cout << tot1;
        }
    }else if(op1 == '^'){
        tot = pow(a1,a2);
        if(op2 == '+'){
            tot1 = tot + a3;
            cout << tot1;
        }else if(op2 == '-'){
            tot1 = tot - a3;
            cout << tot1;
        }else if(op2 == '*'){
            tot1 = tot * a3;
            cout << tot1;
        }else if(op2 == '/'){
            tot1 = tot / a3;
            cout << tot1;
        }else if(op2 == '^'){
            tot1 = pow(tot,a3);
            cout << tot1;
        }else if(op2 == 'v'){
            float per = (float)1/a2;
            tot = pow(a3,per );
            tot1 = pow(a1,tot);
            cout << tot1;
        }else if(op2 == '%'){
            tot1 = tot % a3;
            cout << tot1;
        }
    }else if(op1=='v'){
        float per = (float)1/a1;
        tot = pow(a2,per );
        if(op2 == '+'){
            tot1 = tot + a3;
            cout << tot1;
        }else if(op2 == '-'){
            tot1 = tot - a3;
            cout << tot1;
        }else if(op2 == '*'){
            tot1 = tot * a3;
            cout << tot1;
        }else if(op2 == '/'){
            tot1 = tot / a3;
            cout << tot1;
        }else if(op2 == '^'){
            tot1 = pow(tot,a3);
            cout << tot1;
        }else if(op2 == 'v'){
            float per = (float)1/tot;
            tot1 = pow(a3,per );
            cout << tot1;
        }else if(op2 == '%'){
            tot1 = tot % a3;
            cout << tot1;
        }
    }else if(op1 =='%'){
        tot = a1 % a2;
        if(op2 == '+'){
            tot1 = tot + a3;
            cout << tot1;
        }else if(op2 == '-'){
            tot1 = tot - a3;
            cout << tot1;
        }else if(op2 == '*'){
            tot1 = tot * a3;
            cout << tot1;
        }else if(op2 == '/'){
            tot1 = tot / a3;
            cout << tot1;
        }else if(op2 == '^'){
            int k = pow(a2,a3);
            tot1 = a1 % k;
            cout << tot1;
        }else if(op2 == 'v'){
            float per = (float)1/a2;
            tot = pow(a3,per );
            tot1 = a1 % tot;
            cout << tot1;
        }else if(op2 == '%'){
            tot1 = tot % a3;
            cout << tot1;
        }
    }else {
        cout << "Operator tidak ada";
    }

    return 0;
}
