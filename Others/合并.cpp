#include<stdio.h>

int main(){
    int a,b,sum = 0;
    int flag = 1;
    scanf("%d %d",&a,&b);
    if((a>99 || a< 10) || (b>99 || b< 10)){
        printf("Inputs are error!");
        flag = 0;
    }
    else{
        sum += a/10*1000;
        sum += a%10*10;
        sum += b/10*100;
        sum += b%10;
    }
    if(flag){
        printf("%d\n",sum);
    }
    return 0;
}
