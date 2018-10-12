#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

bool cmp(char x,char y){
	return x > y;
}
int main(){
	char a[10];
	while(~scanf("%s",a)){
		int l = strlen(a);
		sort(a,a+l,cmp);
		do
		{
			for(int i = 0 ; i < l ; ++i)
				printf("%c",a[i]);
			printf("\n");
		}
		while(prev_permutation(a,a+l));
	}
	return 0;
} 
