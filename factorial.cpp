#include<iostream>
using namespace std;
int main()
{
	int a,r;
	a=1;
	cout<<"Enter any number:";
	cin>>r;
	while(r>0)
	{
		a=a*r;
		r--;
	}
	cout<<"The factorial is:"<<a;
}
