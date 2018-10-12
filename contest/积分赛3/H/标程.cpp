#include<cstdio>
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int main(){
    int T,n,a,b;
    //freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
    while(~scanf("%d %d %d",&n,&a,&b))
    {
    	int v=gcd(a,b);
    	if((n/v)%2)
    		puts("zzx");
    	else
    		puts("fk");
	}
    return 0;
}

