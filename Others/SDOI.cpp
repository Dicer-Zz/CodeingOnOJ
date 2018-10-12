#include<stdio.h>
#include<algorithm>
#include<string.h> 
using namespace std;

struct node{
	char name[20];
	bool sex;
	double round1;
	double round2;
	double score;
}a[105];
bool cmp(node x,node y){
	return x.score > y.score;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		int girl = 0;
		double max_round1 = 0,max_round2 = 0;
		scanf("%d %d",&n,&m);
		char sex[10];
		char male[]="male";
		for(int i=0;i<n;i++){
			scanf("%s %s %lf %lf",&a[i].name,&sex,&a[i].round1,&a[i].round2);
			if(strcmp(male,sex)==0)
				a[i].sex = true;
			else{
				a[i].sex = false;
				girl = 1;
			}
			if(a[i].round1 > max_round1)
				max_round1 = a[i].round1;
			if(a[i].round2 > max_round2)
				max_round2 = a[i].round2;   
		}
		double time1,time2;
		time1 = 300/max_round1;time2 = 300/max_round2;
		char female[20];
		double max_female = -1;
		for(int i=0;i<n;i++){ 
		a[i].score = time1 * a[i].round1 * 0.3 + time2 * a[i].round2 * 0.7;
		if(a[i].sex == false)
			if(a[i].score > max_female){
				strcpy(female,a[i].name);
				max_female = a[i].score; 
			}
		} 
		printf("The member list of Shandong team is as follows:\n");
		sort(a,a+n,cmp);
		if(!girl){
			for(int i=0;i<m;i++)
			printf("%s\n",a[i].name);
		}
		else{
			if(max_female > a[m-1].score){
				for(int i=0;i<m;i++)
				printf("%s\n",a[i].name);
			}
			else{
				for(int i=0;i<m-1;i++)
				printf("%s\n",a[i].name);
				printf("%s\n",female);
			}
		}
	}
	return 0;
}
