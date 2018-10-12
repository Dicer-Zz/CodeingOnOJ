#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

double fac(double n){
	double ne = 1;
	for(int i=0;i<n;i++){
		ne *= (n/M_E);
	}
	return  ne*sqrt(2*M_PI*n);
}
int main(){
	double n;
	while(cin >> n){
		cout << ((int)log10(fac(n))+1) << '\n';
	}
	return 0;
}
