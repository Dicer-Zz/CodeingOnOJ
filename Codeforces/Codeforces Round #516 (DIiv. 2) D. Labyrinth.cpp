#include<bits/stdc++.h>
using namespace std;

const int N=2010;
int n,m,r,c,x,y;
char mp[N][N];
bool vis[N][N];
struct node{int x,y,rx,ry;};
deque<node> q;

int main()
{
    int ans=0;
    cin>>n>>m>>r>>c>>x>>y;
    for(int i=1;i<=n;i++)
        scanf("%s",mp[i]+1);
    q.push_back((node){r,c,x,y});
    while(!q.empty())
    {
        node tmp=q.front();q.pop_front();
        x=tmp.x,y=tmp.y;
        if(vis[x][y]) continue;
        vis[x][y]=1;ans++;
        if(x>1&&mp[x-1][y]=='.') q.push_front((node){x-1,y,tmp.rx,tmp.ry});
        if(x<n&&mp[x+1][y]=='.') q.push_front((node){x+1,y,tmp.rx,tmp.ry});
        if(y>1&&mp[x][y-1]=='.'&&tmp.rx) q.push_back((node){x,y-1,tmp.rx-1,tmp.ry});
        if(y<m&&mp[x][y+1]=='.'&&tmp.ry) q.push_back((node){x,y+1,tmp.rx,tmp.ry-1});
    }
    cout<<ans<<endl;
    return 0;
}
/*
20 7
3 6
5 2
......*
.****.*
.****.*
....*.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**.**.*
**....*
*******
*/