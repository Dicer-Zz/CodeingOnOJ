#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	int f[12000];
	f[0] = 1;f[1] = 2;f[2] = 7;
	for(int i=3;i<12000;i++){
		f[i] = f[i-1] + 4*(i-1) + 1;
	} 
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		//cout<<'1'<<endl;
		printf("%d\n",f[a]);
	}
	return 0;
}
