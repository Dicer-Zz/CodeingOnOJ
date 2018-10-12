#include<cstdio>  
#include<algorithm>  
using namespace std;  
long long a[10010];  
int main()  
{  
    int t;  
    long long n,m,k,c,pos;  
    scanf("%d",&t);  
    c=1;  
    while(t--)  
    {  
        scanf("%lld%lld%lld",&n,&m,&k);  
        for(int i=1;i<=n;i++)          
            scanf("%lld",&a[i]);  
        sort(a+1,a+n+1);          
        printf("Case #%lld:\n",c++);  
        if(m>=a[n])  
        {  
            printf("why am I so diao?\n");  
            continue;         
        }             
        else if(m<a[1])  
        {  
            printf("madan!\n");  
            continue;     
        }     
        else  
        {  
            for(int i=1;i<=n;i++)  
            {  
                if(a[i]>m)  
                {  
                    pos=i-1;  
                    break;  
                }                 
            }  
            int f=1;  
            for(int i=pos;i<n;)  
            {  
                if(a[i]+k<a[i+1])  
                {  
                    f=0;  
                    break;  
                }  
                else  
                {  
                    if(k>0)  
                        k--;  
                    i++;  
                }  
            }  
            if(!f)  
                printf("madan!\n");  
            else  
                printf("why am I so diao?\n");  
        }  
    }  
    return 0;  
}  
