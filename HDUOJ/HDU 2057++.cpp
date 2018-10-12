/*HDU 2057  A + B Again*/ 
#include<bits/stdc++.h>
using namespace std;
int find(char *s,char ch){
	int l = strlen(s);
	for(int i=0;i<l;i++){
		if(s[i]==ch)	return (i+1);
	}
	return 0;
}
int main(void){
	char a[20],b[20],c[20];
	char hex[] = {'A','B','C','D','E','F'};
	while(cin>>a>>b){
		int mark1 = 0,mark2 = 0,i;
		long long sum1 = 0,sum2 = 0;
		if(a[0]=='+')	mark1 = 1;
		else if(a[0]=='-')	mark1 = -1;
		if(b[0]=='+')	mark2 = 1;
		else if(b[0]=='-')	mark2 = -1;
		int flag = 0;
		if(mark1)	flag = 1;
		for(i = strlen(a)-1;i>=flag;i--){
			if(a[i]>='0'&& a[i]<='9'){
				sum1 += (a[i]-'0')*(1<<(4*(strlen(a)- i - 1))); 
			}
			else{
				sum1 += (hex[find(hex,a[i])-1]-'A'+10)*(1<<(4*(strlen(a)- i - 1)));
			}
		}
		flag = 0;
		if(mark2)	flag = 1;
		for(i = strlen(b)-1;i>=flag;i--){
			if(b[i]>='0'&& b[i]<='9'){
				sum2 += (b[i]-'0')*(1<<(4*(strlen(b)- i - 1))); 
			}
			else{
				sum2 += (hex[find(hex,b[i])-1]-'A'+10)*(1<<(4*(strlen(b)- i - 1)));
			}
		}
		if(!mark1)	mark1 = 1;
		if(!mark2)	mark2 = 1;
		long long sum = sum1*mark1+sum2*mark2;
		
		int digital = 0,mark = 1;
		if(sum<0){
			mark = 0;
			sum = -sum;
		}
		if(mark==0)	printf("-");
		if(sum==0)	printf("0");
		while(sum){
			if((sum % 16)>=0 && (sum % 16)<=9){
				c[digital]  = (sum % 16)+'0';
				digital++;
			}
			else{
				c[digital] = hex[(sum % 16)-10];
				digital++;
			}
			sum /= 16;
		}
		for(int i=digital-1;i>=0;i--)
			printf("%c",c[i]);
		printf("\n");
	}
	return 0;
}
