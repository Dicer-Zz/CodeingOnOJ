#include<stdio.h>
int a[100+5],b[100+5];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
	}
	int l=0;
	for(int i=0;i<n;i++){
		if(a[i]>l){
			printf("NO\n");
			break;
		}
		else if(b[i]>=m){
			printf("YES\n");
			break;
		}
		if(i<n){
			if(b[i]>=a[i+1])
			l = a[i+1];
			else{ printf("NO\n");break;} 
		}
		else{printf("NO\n");break;}
	}
	return 0;
} 
