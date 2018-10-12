#include <bits/stdc++.h>  
  
using namespace std;  
      
int n,k;  
int sum;  
      
void dfs(int x,int step,int num)  
{  
    if(step==n+1)  
    {  
        printf("%d\n",sum);  
        return;  
    }  
	    for(int i=x; i<=k; i++)  
    {  
        int cur=num;//cur记录上一位的值  
        if(i*cur<=k)//i是当前位，如果两者乘积小于等于k的话进行搜索  
        {  
            sum=sum*10+i;//sum记录数的大小，当N位搜索完的时候sum就是符合条件的数  
            dfs(0,step+1,i);  
            sum=(sum-i)/10;//记得减去上一个数再搜索  
        }  
    }  
    return;  
	}  
	  
int main()  
{  
    cin>>n>>k;  
    sum=0;  
    dfs(1,1,1);  
    return 0;  
}  


