#include<stdio.h>
int main()
{/*
+---+  	
|   |
|   |
+---+
+---+
|   |
|   |
+---+	*/
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF){
	printf("+");
	for(int i=0;i<m;i++)
	printf("-");
	printf("+\n");
	for(int i=0;i<n;i++){
		printf("|");
		for(int i=0;i<m;i++)		
		printf(" ");
		printf("|\n");
	}
	printf("+");
	for(int i=0;i<m;i++)
	printf("-");
	printf("+\n\n");
	}
	return 0;
}
