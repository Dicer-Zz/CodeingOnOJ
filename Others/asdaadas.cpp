#include<stdio.h>
int main()
{
	int y,m,d;
	while(scanf("%d/%d/%d",&y,&m,&d)!=EOF){
	if( y % 4 !=0 || (y%100==0 &&y % 400!=0) ){
		if(m == 1)
		printf("%d\n",d);
		else if(m == 2)
		printf("%d\n",31+d);
		else if(m == 3)
		printf("%d\n",59+d);
		else if(m==4)
		printf("%d\n",90+d);
		else if(m==5)
		printf("%d\n",120+d);
		else if(m==6)
		printf("%d\n",151+d);
		else if(m==7)
		printf("%d\n",181+d);
		else if(m==8)
		printf("%d\n",212+d);
		else if(m==9)
		printf("%d\n",243+d);
		else if(m==10)
		printf("%d\n",273+d);
		else if(m==11)
		printf("%d\n",304+d);
		else if(m=12)
		printf("%d\n",335+d);
	}
	else 
	{
		if(m == 1)
		printf("%d\n",d);
		else if(m == 2)
		printf("%d\n",31+d);
		else if(m == 3)
		printf("%d\n",59+d+1);
		else if(m==4)
		printf("%d\n",90+d+1);
		else if(m==5)
		printf("%d\n",120+d+1);
		else if(m==6)
		printf("%d\n",151+d+1);
		else if(m==7)
		printf("%d\n",181+d+1);
		else if(m==8)
		printf("%d\n",212+d+1);
		else if(m==9)
		printf("%d\n",243+d+1);
		else if(m==10)
		printf("%d\n",273+d+1);
		else if(m==11)
		printf("%d\n",304+d+1);
		else if(m=12)
		printf("%d\n",335+d+1);
	}
	}
	return 0;
}
