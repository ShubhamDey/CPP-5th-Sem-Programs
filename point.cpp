#include<iostream>
#include<math.h>
using namespace std;
class Point{
	private:int x;
			int y;
	public:Point(){
			x= 0;
			y=0;
		}
		~Point()
		{
			cout<<"\n Object was deleted ";
		}
		int getX(){
			return x;
		}
		int getY(){
			return y;
		}
		void calDist(Point p1, Point p2){
			x = p1.getX() - p2.getX();
			y = p1.getY() - p2.getY();
			int dist = pow((pow(x,2) + pow(y,2)),0.5);
			cout<<"\nThe distance between 2 points is "<<dist;
		}
		void getPoint(int xx, int yy){
			x = xx;
			y = yy;
		}
		void printP(){
			cout<<"\nPoint("<<x<<","<<y<<")";	
		}
};
int main()
{
	int x,y;
	Point p1,p2,p3;
	cout<<"\n Enter x cordinate ";
	cin>>x;
	cout<<"\n Enter y cordinate ";
	cin>>y;
	p1.getPoint(x,y);
	cout<<"\n Enter x cordinate ";
	cin>>x;
	cout<<"\n Enter y cordinate ";
	cin>>y;
	p2.getPoint(x,y);
	p3.calDist(p1,p2);
	p3.printP();
	return 0;
}
