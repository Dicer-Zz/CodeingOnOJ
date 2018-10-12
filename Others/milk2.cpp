#include<stdio.h>  
#include<string.h>  
#include<algorithm>  
using namespace std;  
const int maxn=0x3f3f3f3f;  
struct milk  
{  
    char s[105];  
    int money,vol,use;//总价钱和体积   
    double price;  
}x[105];  
bool cmp(milk a,milk b)  
{  
    if(a.price==b.price)  
    {  
        return a.vol>b.vol;  
    }  
    return a.price<b.price;  
}  
int main()  
{  
    int t;  
    scanf("%d",&t);  
    while(t--)  
    {  
        int n;  
        scanf("%d",&n);  
        for(int i=0;i<n;++i)  
        {  
            scanf("%s%d%d",x[i].s,&x[i].money,&x[i].vol);  
            if(x[i].vol<200)  
            {  
                x[i].price=maxn;  
            }  
            else  
            {  
                if(x[i].vol>1000)//最多喝五天！  
                {  
                    x[i].price=x[i].money*1.0/5;  
                }  
                else  
                {  
                    x[i].price=x[i].money*1.0/((x[i].vol/200));  
                }  
            }  
        }  
        sort(x,x+n,cmp);  
        printf("%s\n",x[0].s);  
    }  
    return 0;  
}  
