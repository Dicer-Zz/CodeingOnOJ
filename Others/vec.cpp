#include<stdio.h>
#include<stdlib.h>
#include<vector>
using namespace std;

int main(){
	vector<int> vec;
	int in_number,n;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&in_number);
		vec.push_back(in_number);
	}
	for(int i = 0 ; i < vec.size() ; i++)
		printf("%d ",vec[i]);
	return 0;
}
