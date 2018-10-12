#include<stdio.h>

int a[1000000+10];

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		int total = 4;
		scanf("%d",&n);
		long long up,down,left,right;
		for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		up = a[0];left = a[1];down = a[2];right = a[3];
		for(int i=4;i<n;i++){
			if(up == down && left == right)
			break;
			if(i % 4 == 0)
			up += a[i];
			else if(i % 4 == 1)
			left += a[i];
			else if(i % 4 == 2)
			down += a[i];
			else
			right += a[i];
			if(up >= down){
				up -= down;
				down = 0;
			}
			else{
				down -= up;
				up = 0;
			}
			if(left >= right){
				left -= right;
				right = 0;
			}
			else{
				right -= left;
				left = 0;
			} 
			total++;
		}
		if(up == down && left == right)
		printf("%d\n",total);
		else
		printf("regret\n");
	}
		return 0;
}
