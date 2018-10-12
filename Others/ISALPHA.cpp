#include <stdio.h>
# define ISALPHA(a) (((a)>='A'&&(a)<='Z')||((a)>='a'&&(a)<='z'))
main()
{
 char c;
 scanf("%c",&c);
 printf("%d\n",ISALPHA(c));
}
