#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
	char str[10];
	while(~scanf("%s",str)){
		sort(str,str+10);
		printf("%s\n",str);
	}
	return 0;
}
