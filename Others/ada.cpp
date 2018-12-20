#include<stdio.h>
int s[400],b[150],c[100];
int main()
{
	for(int i=0;i<400;i++){
		s[i] = i+1;
	}
	for(int i=1;i<400;i++){
		for(int j=i+1;j<400;j++){
			for(int k=1;k<200;k++){
				if(s[i]*k == s[j])
				s[j] = 0;
			}
		}
	}
	for(int i=0,j=0;i<400;i++){
		if(s[i] != 0){
		b[j] = s[i];
		j++;
		}
	}
//	for(int i=0;i<71;i++)
//	printf("%d\n",b[i]);
	int x,y,m,a,e;
	a = 0;
	while(scanf("%d%d",&x,&y), x != 0 || y!=0){
	e = 1+y-x;
	while(x!=y+1){
		m = x*(x+1)+41;
		for(int i=0;i<150;i++){
			if(m == b[i]){
				a++;
				break;
			}
		}
		x++;
	}
	if(a == e)
	printf("OK\n");
	else 
	printf("Sorry\n");
	}
	return 0;
 }
