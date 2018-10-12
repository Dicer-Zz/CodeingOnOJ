#include<iostream>
#include<cstdio>
#include<set>
using namespace std;
int main(void)
{ int n,y,m;set<int>s;
  cin>>y>>n;
  m=y-1;
do{ s.clear();
    if(y<1000)
    s.insert(0);
    m++;
    int t=m;
    while(t)
    {s.insert(t%10);
     t=t/10;
    }
  }while(s.size()!=n);
printf("%d %04d",m-y,m);
return 0;
}
