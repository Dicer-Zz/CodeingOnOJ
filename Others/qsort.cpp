#include<bits/stdc++.h>
using namespace std;

void qsort(int *a,int left,int right);
void swap(int *a,int *b);

int a[100],n;
int main(void){
	cin>>n;
	for(int i=0;i<n;i++)	cin>>a[i];
	qsort(a,0,n-1);
	for(int i=0;i<n;i++)	cout<<a[i]<<' ';
	putchar('\n');
	return 0;
} 

void qsort(int *a,int left,int right){
	int pos = left;
	int i = left,j = right;
	if(i>=j) 	return;
	while(i!=j){	
		while(a[j]>=a[pos]&&i<j)
			j--;
		while(a[i]<=a[pos]&&i<j)
			i++;
		if(i<j) 	swap(&a[i],&a[j]);
	}
	swap(&a[i],&a[pos]);
	qsort(a,left,i-1);
	qsort(a,i+1,right);
}

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}















