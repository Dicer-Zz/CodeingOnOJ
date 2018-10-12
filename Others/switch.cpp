#include<stdio.h>

int main(){
    int a;
    int m;
    scanf("%d",&a);
    switch(a/10){
        case 0 :  m = 1; break;
        case 1 :  m = 1; break;
        case 2 :  m = 1; break;
        case 3 :  m = 2; break;
        case 4 :  m = 3; break;
        case 5 :  m = 4; break;
        default :  m = 5; break;
    }
    printf("%d\n",m);
    return 0;
}
