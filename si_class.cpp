#include<iostream>
using namespace std;
class maths{
	public:
	void si()
	{
		int si,p,r,t;
		cout<<"Enter Principal,Rate & Time:";
		cin>>p>>r>>t;
		si=(p*r*t)/100;
		cout<<"The Simple interest is:"<<si;
	}
}m1;
int main()
{
	m1.si();
	return(0);
}
