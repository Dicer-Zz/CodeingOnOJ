#include<iostream>
#include<string.h>
#include<time.h>
#include<stdio.h>
using namespace std;
const int maxn = 100000000;

bool nisprime[maxn];
int prime[maxn];

int euler_prime(){
	time_t s,e;
	s = clock();
	int cnt = 0;
	memset(nisprime,0,sizeof(nisprime));
	for(int i=2;i<maxn;++i){
		if(!nisprime[i])	prime[cnt++] = i;
		for(int j = 0;i*prime[j] < maxn && j < cnt;++j){
			nisprime[i*prime[j]] = 1;
			if(i%prime[j] == 0)	break;
		}
	}
	e = clock();
	printf("Use Time:%lf\n",(double)(e-s)/CLOCKS_PER_SEC);
	return cnt;
}
int main(void){
	int cnt = euler_prime(); 
	for(int i=0;i<100;++i)
		cout<<prime[i]<<' ';
	return 0;
}
