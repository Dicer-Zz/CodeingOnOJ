#include<bits/stdc++.h>

int main(){
	int n;
	int h1,m1,s1,h2,m2,s2,h,m,s;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d %d",&h1,&m1,&s1);
		scanf("%d %d %d",&h2,&m2,&s2);
		s = s1+s2;
		m = m1+m2+s/60;
		h = h1+h2+m/60;
		s %= 60;m %= 60; 
		printf("%d %d %d\n",h,m,s);
	}
	return 0;
} 
