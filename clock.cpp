#include<iostream>
#include<stdio.h>
using namespace std;
class Clock{
	private:int hh;
		int mm;
	public:Clock(){
			hh=0;
			mm=0;
		}
		Clock(int h,int m){
			hh=h;
			mm=m;
		}
		void showTime(){
			printf("Total duration:  %2d:%2d \n",hh,mm);
		}
		int returnHr(){
			return hh; 
		}
		int returnMin(){
			return mm; 
		}
		void addTime(Clock a,Clock b){
			mm=a.returnMin()+b.returnMin();
			hh=a.returnHr()+b.returnHr();
			if(mm>59)
			{
				hh=hh+1;;
				mm=mm-60;
			}
		}
};
int main()
{
	int hh,mm;
	Clock a(23,59);
	cout<<"Enter hour:";
	cin>>hh;
	cout<<"Enter minutes:";
	cin>>mm;
	Clock b(hh,mm);
	Clock c(0,0);
	c.addTime(a,b);
	c.showTime();
	return 0;
}
