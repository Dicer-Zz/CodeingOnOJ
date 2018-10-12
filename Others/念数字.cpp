#include<stdio.h>
#include<string.h>

struct node{
	char p[5];
}py[11];

int main(){
	strcpy(py[0].p,"ling");
	strcpy(py[1].p,"yi");
	strcpy(py[2].p,"er");
	strcpy(py[3].p,"san");
	strcpy(py[4].p,"si");
	strcpy(py[5].p,"wu");
	strcpy(py[6].p,"liu");
	strcpy(py[7].p,"qi");
	strcpy(py[8].p,"ba");
	strcpy(py[9].p,"jiu");
    char a[50];
    while(~scanf("%s",&a)){
    	int flag = 0;
    	int len = strlen(a);
    	if(a[0] == '-'){
    		printf("fu");
    		for(int i=1;i<len;i++){
    			printf(" %s",py[a[i]-'0'].p);
			}
			printf("\n");
		}
		else{
			printf("%s",py[a[0]-'0'].p);
			for(int i=1;i<len;i++){
    			printf(" %s",py[a[i]-'0'].p);
			}
			printf("\n");
		}
		
	}
	return 0;
} 
