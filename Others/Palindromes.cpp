#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	vector<int> vec1,vec2;
	scanf("%d",&n);
	while(n--){
		vec1.clear();
		vec2.clear();
		int a;
		for(int i=0;i<4;i++){
			scanf("%d",a);
			vec1.push_back(a);
		}
		vec2.assign(vec1.begin(),vec1.end());
		reverse(vec1.begin(),vec1.end());
		if(vec1==vec2)
			printf("yes\n");
		else	printf("no\n");
	}
	return 0;
}
