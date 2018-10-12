#include<stdio.h>
#define maxn 10050


int main(){
	char ch;
	int G,P,L,T;
	G = P = L = T = 0;
	while(~scanf("%c",&ch)){
		if(ch == 'g' || ch == 'G')	G++;
		else if(ch == 'p' || ch == 'P')	P++;
		else if(ch == 'l' || ch == 'L')	L++;
		else if(ch == 't' || ch == 'T')	T++;
	}
	while(G+P+L+T){
		if(G)	{	printf("G");	G--;}
		if(P)	{	printf("P");	P--;}
		if(L)	{	printf("L");	L--;}
		if(T)	{	printf("T");	T--;}
	}
	return 0;
} 
