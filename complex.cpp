#include<iostream>
using namespace std;
class maths{
	private:
	int a1,a2,b1,b2,m,n;
	public:
	void calc()
	{
		m=a1+b1;
		n=a2+b2;
	}
	void getdata()
	{
		cout<<"Enter real & imaginary parts of 1st equation:";
		cin>>a1>>a2;
		cout<<"Enter real & imaginary parts of 2nd equation:";
		cin>>b1>>b2;
	}
	void showdata()
	{
		cout<<"The sum is:"<<m<<" + "<<n<<"i";
	}
}m1;
int main()
{
	m1.getdata();
	m1.calc();
	m1.showdata();
	return(0);
}
