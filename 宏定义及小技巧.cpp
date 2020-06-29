#include "iostream"
#define pi 3.141592653 
using namespace std;
//这里输出只能为int值，5位小数，且无需返回值 
	
int main() 
{
	
	cout<<pi<<endl;
	#undef pi
	int pi=3;
	cout<<pi;

}

