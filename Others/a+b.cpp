#include<stdio.h>
int main()
{
	int T,a,b,c,d,e,f,g,h,i;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		g=a+d;
		h=b+e;
		i=c+f;
		if(i/60==1){
		h++;
		i -= 60;
		}
		if(h/60==1){
		g++;
		h -= 60;
		}
		printf("%d %d %d\n",g,h,i);	
	}
	return 0;
 } 
