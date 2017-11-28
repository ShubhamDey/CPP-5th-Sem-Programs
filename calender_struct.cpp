#include<iostream>
using namespace std;
struct month
{
	int d;
	char m[10];
};
void cal()
{
	struct month m1[12]={{31,"Jan"},{27,"Feb"},{31,"Mar"},{30,"Apr"},{31,"May"},{30,"Jun"},{31,"Jul"},{31,"Aug"},{30,"Sep"},{31,"Oct"},{30,"Nov"},{31,"Dec"}};

	for(int i=0;i<12;i++)
	{
		for(int j=0;m1[i].m[j]!='\0';j++)
			cout<<m1[i].m[j];
		cout<<":\t"<<m1[i].d<<"\n";
	}
}

int main()
{
	cal();
}
