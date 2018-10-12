#include<bits/stdc++.h>
using namespace std;
long long n,t;
int main(){
  //  freopen("in.txt", "r", stdin);
   // freopen("out.txt", "w", stdout);
    cin>>t;
    while(t--){
        scanf("%lld",&n);
        printf("1");
        for(int i=0;i<n-1;i++)
            printf("0");
        cout<<endl;
    }
    return 0;
}
