/*HDU 1272 小希的迷宫  并查集*/ 
#include<bits/stdc++.h>
using namespace std;

int f[110000];
int visit[110000];

int find(int a){
	int r = a,i,j;
	while(f[r]!=r)
		r = f[r];
	i = a;
	while(i!=r){
		j = f[i];
		f[i] = r;
		i = j;
	}
	return r;
}

bool merge(int a,int b){
	int f1 = find(a);
	int f2 = find(b);
	if(f1==f2)
		return false;
	else{
		f[f1] = f2;
		return true;
	}
} 

int main(void){
	int a,b;
	while(cin>>a>>b){
		int flag = 0; 
		if(a+b==0)	{
			printf("Yes\n");
			continue;
		}
		for(int i=1;i<=110000;i++)		//初始化 
		{
			visit[i]=0;f[i] = i;
		}
		if(a+b==-2)	break;				//结束 
		merge(a,b);
		visit[a] = visit[b] = 1;
		while(cin>>a>>b){
			if(a+b==0)	break;			//end
			visit[a] = visit[b] = 1;
			if(!merge(a,b)){			//已连接 
				flag = 1;
			}
		}
		int cnt = 0;
		if(flag)	printf("No\n");
		else{
			for(int i=1;i<=100005;i++){
				if(visit[i] && f[i] == i)
					cnt++;
			}
			if(cnt==1)	printf("Yes\n");
			else	printf("No\n");
		}
	} 
	return 0;
} 
