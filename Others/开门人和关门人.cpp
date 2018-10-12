#include<stdio.h>
#include<string.h> 
int compare(int a,int b,int c,int x,int y,int z){
	if(a>x)
	return 1;
	else if(a<x)
	return 0;
	else{
		if(b>y)
		return 1;
		else if(b<y)
		return 0;
		else{
			if(c>z)
			return 1;
			else
			return 0;
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int m;
		scanf("%d",&m);
		char begin[15];         
		char end[15];
		char peo[15];       //第一个进入和最后一个离开及可能 
		int entry_time_result_h,entry_time_result_m,entry_time_result_s;
		int end_time_result_h,end_time_result_m,end_time_result_s;
		int entry_time_h,entry_time_m,entry_time_s;
		int end_time_h,end_time_m,end_time_s;
		scanf("%s",begin);
		strcpy(end,begin);
		scanf("%d:%d:%d",&entry_time_result_h,
		&entry_time_result_m,&entry_time_result_s);  
		scanf("%d:%d:%d",&end_time_result_h,
		&end_time_result_m,&end_time_result_s);   //录入第一组数据
		m -= 1;
		while(m--){
			scanf("%s",peo);
			scanf("%d:%d:%d",&entry_time_h,&entry_time_m,&entry_time_s);
			scanf("%d:%d:%d",&end_time_h,&end_time_m,&end_time_s);
			if(compare(entry_time_result_h,entry_time_result_m,entry_time_result_s,
			entry_time_h,entry_time_m,entry_time_s)){
				entry_time_result_h = entry_time_h;
				entry_time_result_m = entry_time_m;
				entry_time_result_s = entry_time_s;
				strcpy(begin,peo);    //进入时间更新 
			}
			if(!compare(end_time_result_h,end_time_result_m,end_time_result_s,
			end_time_h,end_time_m,end_time_s)){
				end_time_result_h = end_time_h;
				end_time_result_m = end_time_m;
				end_time_result_s = end_time_s;
				strcpy(end,peo);      //结束时间更新 
			}
		} 
		printf("%s %s\n",begin,end); 
	}
	return 0;
}
