#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int rand_number[4][3];
	srand(time(NULL));
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			rand_number[i][j] = rand() % 11 + 5;
		}
	} 
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%d%c",rand_number[i][j],j==4?'\n':' ');
		}
		printf("\n");
	}
	return 0;
} 
