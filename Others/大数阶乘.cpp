/* HDU1042 n! */

#include <stdio.h>

void factorial(int n)
{
    int a[10000 + 1] = {1};
    int digits=1/*10000进制的位数*/, carry, i, j;

    for(i=2;i<=n;i++)
    {
        carry = 0;   //进位

        for(j=0; j<digits; j++)
        {
            a[j] = a[j] * i + carry;
            carry = a[j] / 10000;
            a[j] %= 10000;
        }

        if(carry>0)  // 最高位的进位
            a[digits++] = carry;
    }

    // 输出：高位原样输出，低位的高位补0
    printf("%d", a[digits-1]);
    for(i=digits-2; i>=0; i--)
        printf("%04d", a[i]);
    printf("\n");
}

int main()
{
    int n;

    while(scanf("%d", &n) != EOF)
        factorial(n);

    return 0;
}
