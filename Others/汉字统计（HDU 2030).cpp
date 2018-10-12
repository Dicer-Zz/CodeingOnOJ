#include<Stdio.h>

int main(){
	char ch;
	int n,count;
	scanf("%d",&n);
	getchar();
	while(n--){
		count = 0;
		while((ch = getchar()) != '\n'){
			if(ch < 0)
				count++;
		}
		printf("%d\n",count/2);
	}
	return 0;
}
