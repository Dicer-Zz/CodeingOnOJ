#include<stdio.h>

struct node{
	int sex;
	char name[10];
	int rank;
}a[55];
int main(){
	int n;
	while(~scanf("%d",&n)){
		int rank = 0;
		for(int i=0;i<n;i++){
			scanf("%d %s",&a[i].sex,&a[i].name);
			a[i].rank = rank++;
		}
		for(int i=0;i<(n/2);i++){
			printf("%s ",a[i].name);
			for(int j=n-1;j>=0;j--){
				if(a[j].sex != -1 && a[j].sex != a[i].sex ){
					printf("%s\n",a[j].name);
					a[j].sex = -1;
					break;
				}
			}	
		}
	}
	return 0;
}
