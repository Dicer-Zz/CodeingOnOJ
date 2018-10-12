#include <iostream>
#include <ctime>
using namespace std;

int main(){
	clock_t start, end;
	start = clock();
     //如果函数执行时间少的话，可能最后测出的结果为0,因为现在机子的运行速度很快
	for(int j = 0; j < 1000; j++)
		 for(int i = 0; i < 1000000; i++){}	//1e9
	end = clock();
	cout << (double)(end - start) / CLOCKS_PER_SEC << endl;
	return 0;
}
