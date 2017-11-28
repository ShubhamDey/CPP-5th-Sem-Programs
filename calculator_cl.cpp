#include<iostream>
#include<stdlib.h>
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
int main(int argc,char *argv[])
{
	char ch;
	int a,b,s;
	a=atoi(argv[1]);
	ch=*argv[2][0];
	b=atoi(argv[3]);
	s=calculator(ch,a,b);
	if(s==-1)
		cout<<"Invalid input";
	else
		cout<<"The result is:"<<s;
}
