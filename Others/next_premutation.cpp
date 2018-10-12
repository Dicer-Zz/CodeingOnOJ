#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
	char a[10];
	scanf("%s",&a);
	sort(a,a+strlen(a));
	do{
		printf("%s\n",a);
	}while(next_permutation(a,a+strlen(a)));
	return 0;
}
