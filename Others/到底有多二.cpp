#include<stdio.h>
#include<string.h>

int main(){
	char a[55];
	while(~scanf("%s",&a)){
		int len;
		float flag1,flag2,total = 0;;
		if(a[0] == '-'){
			len = strlen(a) - 1;
			if(a[len] % 2 == 0) 
				flag2 = 2;
			else
				flag2 = 1;
			flag1 = 1.5;
			for(int i=0;i<strlen(a);i++){
				if(a[i] == '2')
					total++;
			}
		}
		else{
			flag1 = 1;
			len = strlen(a);
			if(a[len-1] % 2 == 0) 
				flag2 = 2;
			else
				flag2 = 1;
			for(int i=0;i<len;i++){
				if(a[i] == '2')
					total++;
			}
		}
		printf("%.2f%%\n",(total/len)*flag1*flag2*100);
	}
	return 0;
} 
