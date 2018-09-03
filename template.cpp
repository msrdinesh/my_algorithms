#include<iostream>
using namespace std;
/*int add(int a ,int b)
{
	return a+b;
}

float add(float x,float y)
{
	return x+y;
}
*/

template <typename T>
T add(T a, T b)
{
	return a+b;
}


int main()
{
	int x= 10;
	int y=5;

	float a = 2.3333;
	float b = 3.3333;
	cout<<add<int>(x,y)<<endl;
	cout<<add<float>(a,b)<<endl;
	return 0;
}