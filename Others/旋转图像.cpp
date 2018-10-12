#include<stdio.h>
#include<string.h>
#define maxn 55
using namespace std;
char img[maxn][maxn],img2[maxn][maxn];

int main(void){
	int t;
	int n,m;
	int angle;
	scanf("%d",&t);
	while(t--){
		int flag = 1;
		memset(img,0,sizeof(img));
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++){
			getchar(); 
			for(int j=0;j<m;j++)
			scanf("%c",&img[i][j]);
		}
		scanf("%d",&angle);
		while(angle){
			int x;
			x = n;
			for(int i=0;i<n;i++){
				for(int j=m-1;j>=0;j--){
					if(flag)img2[j][n-1-i] = img[i][j];
					else img[j][n-1-i] = img2[i][j];
				}
			}
			int tran;
			tran = n;
			n = m;
			m = tran;
			angle -= 90;
			flag = !flag;
			/*for(int i=0;i<n;i++){		//test 
				for(int j=0;j<m;j++)
				printf("%c*",img2[i][j]);
				printf("\n"); 
			}*/
		}
		if(flag){
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++)
				printf("%c",img[i][j]);
				printf("\n");
			}
		}
		else {
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++)
				printf("%c",img2[i][j]);
				printf("\n");
		}
		}
	} 
	return 0;
}
