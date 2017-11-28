#include<iostream>
using namespace std;
class maths{
	private:
		int a,r;
	public: 
		void fact()
		{
			a=1;
			while(r>0)
			{
				a=a*r;
				r--;
			}
		}
		void getdata()
		{
			cout<<"Enter any number:";
			cin>>r;
		}
		void showdata()
		{
			cout<<"The factorial is:"<<a;
		}
}m1;
int main()
{
	m1.getdata();
	m1.fact();
	m1.showdata();
	return(0);
}
