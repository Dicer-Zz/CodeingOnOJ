/* HDU 1847 Good Luck in CET-4 Everybody!*/  
/*巴什博弈：							 
		只有一堆n个物品,两个人轮流从这堆物品中取物,
		规定每次至少取一个,最多取m个.最后取光者得胜.
		n = (m+1)r+s , (r为任意自然数,s≤m), 即n%(m+1) != 0, 
		则先取者肯定获胜。
*/ 
#include<iostream>


int main(void){
	int n;
	while(std::cin>>n){
		if(n%3==0) 	std::cout<<"Cici"<<'\n';
		else	std::cout<<"Kiki"<<'\n';
	}
	return 0;
} 
