#include<iostream>
using namespace std;
class maths{
	private:int a,r;
	public:
	void area()
	{
		cin>>r;
		a=3.14*r*r;
	}
	void getdata()
	{
		cout<<"Input the radius of the circle:";
	}
	void showdata()
	{
		cout<<"The area of the circle is:"<<a;
	}
}m1;
int main()
{
	m1.getdata();
	m1.area();
	m1:showdata();
	return(0);
}
