#include<stdio.h>
#include<math.h>
int main()
{
	int s,a;
	scanf("%d",&s);
	a=sqrt(s);
	for(int i=a;;a--){
		if(s%a==0)
		break;
	}
	printf("%d\n",2*(a+s/a));
	return 0;
}
