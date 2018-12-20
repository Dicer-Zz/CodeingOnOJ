#include<cstdio>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int N,K;
double a[15000];
int main()
{
	int i,j;
	double ans,left,right,x,mid,last;
	while(cin>>N>>K)
	{
		right=0;
		for(i=0;i<N;i++)
		{
			cin>>a[i];
			if(a[i]>right)
			right=a[i];
		}
		left=0;
		while(right-left>0.0001)
		{
			x=0;
			mid=left+(right-left)/2;
			for(i=0;i<N;i++)
			{
				x=x+int(a[i]/mid);                                             
			}
			if(x>=K)
			{
				left=mid;
			}
			else
			{
				right=mid;
			}
		}
		printf("%.2lf\n",left);
	}
	return 0;
}
