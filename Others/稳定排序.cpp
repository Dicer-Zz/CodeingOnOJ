#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct node{
	char a[50];
	int b;
	int c;
}A[305],B[305];

int cmp(node x,node y){
	if(x.b == y.b)
	return x.c<y.c;
	else
	return x.b > y.b;
}
int main(){
	int n;
	while(scanf("%d",&n)==1){
		for(int i=0;i<n;i++){
			scanf("%s %d",&A[i].a,&A[i].b);
			A[i].c = i;
		}
		sort(A,A+n,cmp);
	//	for(int i=0;i<n;i++)
	//	printf("%s %d\n",A[i].a,A[i].b);
		for(int i=0;i<n;i++)
		scanf("%s %d",&B[i].a,&B[i].b);
		int flag=0;
		for(int i=0;i<n;i++)
		if(A[i].b!=B[i].b){
		flag+=1;
		break;}     //sort is right or no 
		for(int i=0;i<n;i++)
		if(strcmp(A[i].a,B[i].a)!=0){
		flag+=2;
		break;}    //sort is stable or no
		if(flag==0)
		printf("Right\n");
		else if(flag==1 || flag==3){
			printf("Error\n");
			for(int i=0;i<n;i++)
			printf("%s %d\n",A[i].a,A[i].b);
		}
		else if(flag==2){
			printf("Not Stable\n");
			for(int i=0;i<n;i++)
			printf("%s %d\n",A[i].a,A[i].b);
		}
	}
	return 0;
}
 
