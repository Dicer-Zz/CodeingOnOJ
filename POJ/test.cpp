/*
* @Author: Dicer
* @Date:   2018-09-13 21:09:00
* @Last Modified by:   Dicer
* @Last Modified time: 2018-12-20 11:31:33
*/
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
long long L,N,M;
long long a[55000]; 
bool C(long long mid)
{
	long long last,crt;
	last=0;
	for(long long i=1;i<=N-M;i++)
	{
		crt=last+1;
		while(crt<=N&&a[crt]-a[last]<mid)
		{
			crt++;
		}
		last=crt;
		if(crt>N||a[N+1]-a[last]<mid)
		return false;
	}
	return true;
}
int main()
{
	long long i,j,left,right,mid,ans;
	while(cin>>L>>N>>M)
	{
		a[0]=0;
		ans=0;
		for(i=1;i<=N;i++)
		cin>>a[i];
		a[N+1]=L;
		sort(a,a+N+2);
		left=0;
		right=L;
		while(left+1<right)
		{
			mid=left+(right-left)/2;
			if(C(mid))
			{
				left=mid;
			}
			else
			{
				right=mid;
			}
		}
		cout<<left<<endl;
	}
	return 0;
}