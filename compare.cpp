#include<iostream>
using namespace std;
int comp(char *a,char *b)
{
	int c=0;
	for(int i=0;b[i]!='\0';i++)
	{
		if(a[0]==b[i] && a[1]==b[i+1])
		{
			i=i+1;
			c++;
		}
	}	
	return c;
}
int main()
{
	char b[100];
	cout<<"Enter the string:";
	cin.getline(b,100);
	char a[10];
	cout<<"Enter the key:";
	cin.getline(a,10);
	int r=comp(a,b);
	cout<<"The string is repeated "<<r<<" times.";
}
