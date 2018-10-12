#include<bits/stdc++.h>

int main(){
	int n,y;
	char x;
	scanf("%d",&n);
	while(n--){
		getchar();
		scanf("%c %d",&x,&y);
		if(x>='a'&&x<='z'){
			printf("%d\n",y-(x-'a'+1));
		}
		else{
			printf("%d\n",y+(x-'A'+1));
		}
	}
	return 0;
} 
