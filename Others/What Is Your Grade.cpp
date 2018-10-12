#include<stdio.h>
#include<algorithm>
using namespace std;
struct node{
	int solved;
	int time;
	int score;
	int th;
}a[105];
bool cmp(node x,node y){
	if(x.solved == y.solved){
		return x.time < y.time;   //total of solved problems is same,compare time
	}
	return x.solved > y.solved;
}
bool cmp2(node x,node y){
	return x.th < y.th;
}
int main(){
	int n;
	int _4,_3,_2,_1;
	while(scanf("%d",&n)==1 && n>0){
		int h,m,s;
		_4 = _3 = _2 = _1 = 0; 
		for(int i=0;i<n;i++){
			scanf("%d %d:%d:%d",&a[i].solved,&h,&m,&s);
			a[i].time = h*3600 + m*60 + s;
			if(a[i].solved==4)
			_4++;
			else if(a[i].solved==3)
			_3++;
			else if(a[i].solved==2)
			_2++;
			else if(a[i].solved==1)
			_1++;
			a[i].th = i;
		}
		sort(a,a+n,cmp);
		_4 /= 2; _3 /= 2; _2 /= 2; _1 /= 2;
		for(int i=0;i<n;i++){
			if(a[i].solved == 5)
			a[i].score = 100;
			else if(a[i].solved == 0)
			a[i].score = 50;
			else if(a[i].solved == 4){
				if(_4){
					a[i].score = 95;
					_4--;
				}
				else
					a[i].score = 90;
			}
			else if(a[i].solved == 3){
				if(_3){
					a[i].score = 85;
					_3--;
				}
				else
					a[i].score = 80;
			}
			else if(a[i].solved == 2){
				if(_2){
					a[i].score = 75;
					_2--;
				}
				else
					a[i].score = 70;
			}
			else if(a[i].solved == 1){
				if(_1){
					a[i].score = 65;
					_1--;
				}
				else
					a[i].score = 60;
			}
		}
		sort(a,a+n,cmp2);
		for(int i=0;i<n;i++)
		printf("%d\n",a[i].score);
		printf("\n");
	}
	return 0;
}
