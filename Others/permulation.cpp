#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(int argc, const char * argv[])
{  
    int n, i, j;
    char a[10];//数组定义比实际大一些 
    for(n = 123; n < 330; n++)
	{
        sprintf(a, "%d", n * 1000000 + n * 2 * 1000 + n * 3);//将abcdefghi存入到字符串a中 
        for(j = 0, i = '1'; i <= '9'; memchr(a, i++, 9) && j++);//比较1到9，用j记录 
        if (j == 9) 
		{
            printf("%d %d %d \n", n, n * 2, n * 3);
        }
    }
return 0;
}
