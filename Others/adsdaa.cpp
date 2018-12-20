#include<stdio.h>
int main()
{
	int T,l,r,a,r1,r2,r3;
	scanf("%d",&T);
	while(T--)
	{
		a=0;
		scanf("%d%d",&l,&r);
		r1=r2=r3=r;
		for(;r1>=l;r1--){
			r3=r2=r1;
			for(;r2>0;){
				for(;r3>0;){
					if(r1%r3 == 0&& r2%r3 == 0&&r3!=1)
					a++;
					if(r3 != 1)
					r3--;
					if(r3 == 1&&r1%r3 == 0&& r2%r3 == 0){
					a++;
					break;
					}
					else if(r3==1)
					break;	
				}
				if(r2 !=1)	
				r2--;
				if(r2==1&&r1%r3 == 0&& r2%r3 == 0){
				a++;
				break;
				}
				else if(r2==1)
				break;			
			}
		}
		if(l==1)
		a--;
		printf("%d\n",a);
	} 
	return 0;
 } 
