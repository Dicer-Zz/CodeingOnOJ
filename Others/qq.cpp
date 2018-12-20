
##G

```
#include <stdio.h>
 
const int MAXN = (int)1e6 + 5;
int p[MAXN], cnt[MAXN];
 
void init() {
    for(int i = 2; i * i < MAXN; ++i) {
        if(!p[i]) {
            for(int j = i * i; j < MAXN; j += i) {
                p[j] = 1;
            }
        }
    }
    for(int i = 2; i < MAXN; ++i) {
        if(!p[i]) {
            for(long long j = i; j < MAXN; j *= i) {
                cnt[j] = 1;
            }
        }
    }
    for(int i = 1; i < MAXN; ++i) {
        cnt[i] += cnt[i - 1];
    }
}
 
int main()
{
    init();
    int n;
    while(scanf("%d", &n) != EOF) {
        printf("%d\n", cnt[n]);
    }
    return 0;
}
```
