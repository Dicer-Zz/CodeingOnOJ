#include<stdio.h>
#include<string.h>
char s[105];
int main()
{
	int n,a,e,i,o,u;
	scanf("%d",&n);
	getchar();
	while(n--){
		a=e=i=o=u=0;
		gets(s);
		int l=strlen(s);
		for(int j=0;j<l;j++){
			if(s[j] == 'a')
			a++;
			else if(s[j] == 'e')
			e++;
			else if(s[j] == 'i')
			i++;
			else if(s[j] == 'o')
			o++;
			else if(s[j] == 'u')
			u++;
		}
		if(n == 0)
		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d",a,e,i,o,u);
		else
		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n\n",a,e,i,o,u);
	}
	return 0;
 } 
