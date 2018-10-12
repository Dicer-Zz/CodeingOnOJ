#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef long long ll;
const ll mod = 1e18;
int main() {
    freopen("in.txt","w",stdout);
    srand((unsigned long long int)(time(NULL)));
    printf("10000\n");
    //for(int i = 0; i < 10000-9; ++i) printf("%lld %lld\n", rand() % mod + 1,rand() % mod + 1); 
    for(int i=0;i<1000;i++) printf("%lld %lld\n",rand() % 10 + 1,rand() % 10 + 1);
    for(int i=0;i<1000;i++) printf("%lld %lld\n",rand() % 50 + 1,rand() % 50 + 1);
    for(int i=0;i<1000;i++) printf("%lld %lld\n",rand() % 100 + 1,rand() % 100 + 1);
    for(int i=0;i<1000;i++) printf("%lld %lld\n",rand() % 5000 + 1,rand() % 5000 + 1);
    for(int i=0;i<1000;i++) printf("%lld %lld\n",rand() % 10000000 + 1,rand() % 1000000 + 1);
    for(int i=0;i<10000-9-5000;i++) printf("%lld %lld\n",rand() % mod + 1,rand() % mod + 1);
    printf("1 1\n");
    printf("7 7\n");
    printf("9 27\n");
    printf("100000000000000 1000000000000005\n");
	printf("100000000990000 1000555550000005\n");
	printf("23423400000000 100004565400005\n");
	printf("10035453500000 324234230000005\n");
	printf("355687428096002 355687428096002\n");
	printf("355687428096000 355687428096000\n");
    return 0;
}

