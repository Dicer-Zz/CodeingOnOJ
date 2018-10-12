# include <stdio.h>
#define SWAP(t,x,y) {t w;w=x;x=y;y=w;}
main()
{

double a=99.99,b=11.11;
 SWAP(double,a,b);
 printf("%f,%f\n",a,b);

}
