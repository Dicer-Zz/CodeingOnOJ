#include<stdio.h>
#include<string.h>
using namespace std;

int input(char a[]){
	char s[1010];
	scanf("%s",s);
	printf("%s",s);
	int l = strlen(s);
	for(int i=0;i<l;i++){		//反转 
		a[i] = s[l-i-1];
	}
	return 0;
}

int add(char a[],char b[],char c[]){
	int base = 0;
	int l = strlen(a)>strlen(b)?strlen(a):strlen(b);
	for(int i=0;i<=l;i++){
		if(a[i]!=0 && b[i]!=0){
			c[i] = (base+(a[i]-'0')+(b[i]-'0')) % 10 + '0';
		}
		else if(a[i]==0 && b[i]!=0){
			c[i] = (base+(b[i]-'0')) % 10 + '0';
		}
		else if(b[i]==0 && a[i]!=0){
			c[i] = (base+(a[i]-'0')) % 10 + '0';
		}
		else{
			c[i] = base % 10 + '0';
		}
		if(a[i]!=0 && b[i]!=0){
			base = (base+a[i]-'0'+b[i]-'0') / 10;
		}
		else if(a[i]==0 && b[i]!=0){
			base = (base+b[i]-'0') / 10;
		}
		else if(b[i]==0 && a[i]!=0){
			base = (base+a[i]-'0') / 10;
		}
		else{
			base = 0;
		}
	}
	return 0;
}

int output(char a[]){
	int l = strlen(a);
	int sum = 0;
	char exch;
	for(int i=0;i<l;i++){
		if(a[i] == '0')
			sum++;
	}
	if(sum == l){
		printf("0\n");
		return 0;
	}
	for(int i=0;i<l/2;i++){		//反转 
		exch = a[i];
		a[i] = a[l-i-1];
		a[l-i-1] = exch;
	} 
	int flag = 0;
	for(int i=0;i<l;i++){		//消零 
		if(a[i] != '0')	flag = 1;
		if(flag)	printf("%c",a[i]);
	}
	printf("\n");
	return 0;
}

char a[1010]={0},b[1010]={0},c[1010]={0};

int main(){
	int t,kase = 1;
	scanf("%d",&t);
	while(t--){
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		printf("Case %d:\n",kase++);
		input(a);
		printf(" + ");
		input(b);
		printf(" = ");
		add(a,b,c); 
		output(c);
		if(t != 0)	printf("\n");
	}
	return 0;
} 
