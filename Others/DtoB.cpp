 #include<stdio.h>
int DtoB(int d){
	if(d/2)
	{	DtoB(d/2);
	printf("%d",d%2);
	printf("\r");
	} 
} 

int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",DtoB(a));
}
