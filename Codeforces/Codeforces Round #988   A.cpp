#include<iostream>
#include<set> 
using namespace std;

set<int > s;
int a[120],n,k,temp,cnt1 = 1,cnt2 = 1;

int main(void){
	s.clear();
	set<int>::iterator it;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>temp;
		it = s.find(temp); 
		if(s.empty()){
			a[cnt1++] = cnt2++;;
		}
		else if(it != s.end()){		//已有 
			cnt2++; 
		}
		else{		//新增 
			a[cnt1++] = cnt2++;
		}
		s.insert(temp);
	}
	if(cnt1>=k+1){
		printf("YES\n");
		for(int i=1;i<=k;i++)
			printf("%d%c",a[i],i==k?'\n':' ');
	}
	else	printf("NO\n");
	return 0;
} 
