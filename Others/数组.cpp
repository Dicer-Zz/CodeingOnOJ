#include<stdio.h>
#define infine 0xfffffff

int main(){
	int nb[1005];
	int n,max,min,sum = 0,count = 0;
	float average;
	max = -infine,min = infine;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&nb[i]);
	for(int i=0;i<n;i++){
		sum += nb[i];
		if(max < nb[i])
			max = nb[i];
		if(min > nb[i])
			min =nb[i];
	}
	average = (float)sum / n;
	for(int i=0;i<n;i++){
		if(nb[i] > average)
			count++;
	}
	printf("%d %d %d\n",max,min,count);
	return 0;
} 
