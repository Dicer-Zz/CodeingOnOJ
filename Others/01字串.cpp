#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<32;i++){
		int a[5] = {0};
		int n=4,b=i;
		while(b>0){
			a[n--] = b % 2;
			b /= 2;
		}
		for(int j=0;j<5;j++)
		printf("%d",a[j]);
		printf("\n"); 
	}
}
