#include<stdio.h>
#include<string.h>
#define ll long long
using namespace std; 
const int max = 1e6+10;
int n[max],p[max];
int bits_sum(int n){
	int sum=0;
	while(n!=0){
		sum += n%10;
		n /= 10;
	}
	return sum;
} 
int main(){
	memset(p,0,sizeof(p));
	p[0]=p[1]=1;
	for(int i=2;i<=max;i++){
		if(p[i] == 0)    //清重 
 			for(int j=2;i*j<max;j++){
				p[i*j] = 1;    // 验质 
			}	
	}
	
	int sum=1;
 	for(int i=2;i<=max;i++){
 		if(p[i]==0 && p[bits_sum(i)]==0)
 			n[i]=++sum;
 		else
 		    n[i]=sum;
 	//	printf("%d: %d\n",i,n[i]);
	 }
	// printf("%d %d",n[10],n[11]);
	int t,l,r;
	int ans=1;
	scanf("%d",&t);
	while(t--){
	scanf("%d%d",&l,&r);
	 int num;
	 int o=0;
	 n[0]=n[1]=1;
	 if(l==r){
	 	if( p[l]==0 && p[bits_sum(l)] == 0)
	 	num = 1;
	 	else 
	 	num = 0;
	 }	 
     else{
     	if(p[r]==0 && p[bits_sum(r)]==0)
     	o++;
     	if(p[l]==0 && p[bits_sum(l)]==0)
     	o++;
     	if(n[r]!=n[r-1])
     	o--;
		num = n[r] - n[l] + o;
	 }  	 
	// printf("%d %d\n",n[l],n[r]);
	 printf("Case #%d: %d\n",ans++,num);
	}
	return 0;
} 
