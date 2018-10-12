#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int n;
	char s;
	scanf("%d",&n);
	getchar();
	while(n--){
		int sum = 0;
		while((s = getchar())!='\n' ){
			if(s >= '0' && s <= '9')	sum++;
			//printf("%c",s);
		}
		printf("%d\n",sum); 
	}
	return 0;
}
