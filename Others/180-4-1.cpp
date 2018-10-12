#include<bits/stdc++.h>


void reserve(int *a,int n,int m){
	int *p1,*p2,temp;
	while(m--){
		p1 = a+n-2;
		p2 = a+n-1;
		temp = *p2;
		for(;p2 != a;p1--,p2--){
			*p2 = *p1;
		}
		*p2 = temp;
	}
	printf("½á¹ûÈçÏÂ£º\n");
	for(int i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");
}
int main(void){
	int n,m,a[100];
	printf("ÊäÈëÊý×é³¤¶Èn£º"); 
	scanf("%d",&n);
	printf("ÊäÈën¸öÕûÊý£º"); 
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("ÊäÈë½»»»µÄÊý×ÖÎ»Êým£º");
	scanf("%d",&m);
	reserve(a,n,m);
	return 0;
} 
