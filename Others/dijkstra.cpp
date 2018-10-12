#include<iostream>
using namespace std;

int main(void){
	int a,b,n;
	int arr[50];
	arr[1] = 1;arr[2] = 1;
	while(cin>>a>>b>>n){
		if(a+b+n==0)	break;
		int min = n<50?n:50;
		for(int i=3;i<=min;i++)
			arr[i] = ((a*arr[i-1]%7)+(b*arr[i-2]%7))%7; 
		cout<<arr[n%49]<<endl;
	}
	return 0;
}
