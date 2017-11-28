#include<iostream>
using namespace std;
void a_rec(int n)
{
	if(n>=48 && n<=57)
	{
		cout<<"\n"<<(char)n<<" = "<<n<<"\n";
		if(n==57)
			a_rec(65);
		else
			a_rec(n+1);
	}
	else if(n>=65 && n<=90)
	{
		cout<<"\n"<<(char)n<<" = "<<n<<"\n";
		if(n==90)
			a_rec(97);
		else
			a_rec(n+1);
	}
	else if(n>=97 && n<=122)
	{
		cout<<"\n"<<(char)n<<" = "<<n<<"\n";
		a_rec(n+1);
	}
}
int main()
{
	cout<<"The ASCII codes are\n";
	a_rec(48);
	return(0);
}
