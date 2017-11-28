#include<iostream>
using namespace std;
void cal()
{
	int i,j;
	char m[][20]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int d[]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<12;i++)
	{
		for(j=0;m[i][j]!='\0';j++)
			cout<<m[i][j];
		cout<<":\t"<<d[i]<<"\n";
	}
}

int main()
{
	cal();
}
