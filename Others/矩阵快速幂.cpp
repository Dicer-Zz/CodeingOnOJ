#include<stdio.h>
#include<iostream>

int main(){
	int a,b,n;
	int f1 = 1,f2 = 1;
	while(~scanf("%d %d %d",&a,&b,&n)){
		if(a+b+n == 0)	break;
		int mat1[2][2] = {a,b,1,0};
		int mat2[2][2] = {a,b,1,0};
		n -=  2;
		while(n--){
			mat2[0][0] = (mat2[0][0]*mat1[0][0]%7+mat2[0][1]*mat1[1][0]%7);
			mat2[0][1] = (mat2[0][0]*mat1[0][1]%7+mat2[0][1]*mat1[1][1]%7);
			mat2[1][0] = (mat2[1][0]*mat1[0][0]%7+mat2[1][1]*mat1[1][0]%7);
			mat2[1][1] = (mat2[1][0]*mat1[0][1]%7+mat2[1][1]*mat1[1][1]%7);
		}
		int fn = mat2[0][0]*f2%7+mat2[0][1]*f1%7;
		printf("%d\n",fn);
	}
	
	return 0;
} 
