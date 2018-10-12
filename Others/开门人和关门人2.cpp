#include<stdio.h>
#include<string.h>
int main(){
	int min_start,max_end;
	int begin_time,end_time;
	char name[15];
	char begin[15];
	char end[15];
	int n,x;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);
		min_start = 24*3600;
		max_end = 0;
		int h,m,s;
		for(int i=1;i<=x;i++){
			scanf("%s",name);
			scanf("%d:%d:%d",&h,&m,&s);
			begin_time = h*3600+m*60+s;
			if(begin_time < min_start){
				strcpy(begin,name);
				min_start = begin_time;
			}
			scanf("%d:%d:%d",&h,&m,&s);
			end_time =  h*3600+m*60+s;
			if(end_time > max_end){
				strcpy(end,name);
				max_end = end_time;
			} 
		}
		printf("%s %s\n",begin,end);		
	}
	return 0;
}
