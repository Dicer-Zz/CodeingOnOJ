//#include<iostream>
//#include<stdio.h>
//#include<map>
//#include<string>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;


bool isrui(int x){
	if((x%4==0 && x%100!=0)||(x%400==0))	return true;
	return false;
}
int main(void){
	map<string,int> m;
	m["January"] = 1;
	m["February"] = 2;
	m["March"] = 3;
	m["April"] = 4;
	m["May"] = 5;
	m["June"] = 6;
	m["July"] = 7;
	m["August"] = 8;
	m["September"] = 9;
	m["October"] = 10;
	m["November"] = 11;
	m["December"] = 12;
	int T,kase = 1,ans;
	string a,b;
	long long d1,d2,y1,y2;
	cin>>T;
	while(T--){
		ans = 0;
		cin>>a;
		scanf("%lld, %lld",&d1,&y1);
		cin>>b;
		scanf("%lld, %lld",&d2,&y2);
		if(y2-y1 >= 2){
			ans += (y2-1)/4 - (y1+1)/4;
			ans += (y1+1)/100 - (y2-1)/100;
			ans += (y2-1)/400 - (y1+1)/400;
		}
		else if(y2-y1 == 1){
			ans += (y1+1)/4 + (y1+1)/400 - (y1+1)/100;
		}
//		for(int i=y1+1;i<y2;i++){
//			if(isrui(i))	ans++; 
//		}
		if(y1!=y2){
			if(isrui(y1)){
				if(m[a]<=2)
					ans++;
			}
			if(isrui(y2)){
				if(m[b]>2)
					ans++;
				else if(m[b]==2 && d2==29)
					ans++;
			}
		}
		else{
			if(isrui(y1)){
				if(m[a]<=2 && ((m[b]==2 && d2 ==29)||m[b]>2))
					ans++;
			}
		}
		printf("Case #%d: ",kase++);
		printf("%lld\n",ans);
	} 
	return 0;
}
