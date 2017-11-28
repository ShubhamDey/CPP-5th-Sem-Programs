#include<iostream>
using namespace std;
int calculator(char ch,int a,int b)
{
	switch(ch){
			case '+':return(a+b);
			case '-':return(a-b);
			case '*':return(a*b);
			case '/':return(a/b);
			default:return(-1);
		}
}
int main()
{
	char ch;
	int a,b,s;
	cout<<"Choose the operator(+,-,*,/):";
	cin>>ch;
	cout<<"Enter the 2 operands:";
	cin>>a>>b;
	s=calculator(ch,a,b);
	if(s==-1)
		cout<<"Invalid input";
	else
		cout<<"The result is:"<<s;
}
