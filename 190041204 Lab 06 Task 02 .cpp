//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 6 TASK 2

#include<bits/stdc++.h>
using namespace std;

class Coordinate
{
private:
	float x,y;
public:
	Coordinate(float abs=0.0, float ord=0.0) : x(abs) , y(ord)
	{}
	void set_x()
	{
		cout<<"Enter the value of abscissa :";
		cin>>x; 
	}
	void set_y()
	{
		cout<<"Enter the value of ordinate :";
		cin>>y; 
	}
	void setCoordinate()
	{
		set_x();
		set_y();
	}
	float getDistance()
	{
		return (sqrt( (x*x) + (y*y) ) );
	} 
	float getDistance(Coordinate c2)
	{
		return (sqrt( (x-c2.x)*(x-c2.x) + (y-c2.y)*(y-c2.y) ) );
	}
	void move_x(float val)
	{
		cout<<"Object has moved "<<val<<" units in x axis."<<endl;
		x+=val;
	}
	void move_y(float val)
	{
		cout<<"Object has moved "<<val<<" units in y axis."<<endl;
		y+=val;
	}
	void move(float val)
	{
		move_x(val);
		move_y(val);
	}
	bool operator > ( Coordinate &right )
    {
        float d1 = getDistance(), d2 = right.getDistance();
        return (d1>d2);
    }
    bool operator < ( Coordinate &right )
    {
        float d1 = getDistance(), d2 = right.getDistance();
        return (d1<d2);
    }
    bool operator >= ( Coordinate &right )
    {
        float d1 = getDistance(), d2 = right.getDistance();
        return (d1>d2);
    }
    bool operator <= ( Coordinate &right )
    {
        float d1 = getDistance(), d2 = right.getDistance();
        return (d1<d2);
    }
    bool operator == (Coordinate &right )
    {
        float d1 = getDistance(), d2 = right.getDistance();
        return (d1>d2);
    }
    bool operator != (Coordinate &right )
    {
        float d1 = getDistance(), d2 = right.getDistance();
        return (d1!=d2);
    }
    Coordinate operator ++()  ///prefix
    {
        return Coordinate(x++,y++);
    }
    Coordinate operator ++(int)  ///postfix
    {
        return Coordinate(++x,++y);
    }
    Coordinate operator --()  ///prefix
    {
        return Coordinate(x--,y--);
    }
    Coordinate operator --(int)  ///postfix
    {
        return Coordinate(--x,--y);
    }
    ~Coordinate()
	{
		cout<<"Object has been destroyed"<<endl;
	}
};

int main()
{
	Coordinate c1(5.2,6.1),c2(2.5,1.1),c3(2.5,1.1);
	cout<<"Distance of object c1 = "<<c1.getDistance()<<endl;
	cout<<"Distance of object c2 = "<<c2.getDistance()<<endl;
	cout<<"Distance of object c3 = "<<c3.getDistance()<<endl;

	cout<<"c1 < c2 =";
	c1>c2? cout<<"1"<<endl:cout<<"0"<<endl;
	cout<<"c1 > c2 =";
	c1>c2? cout<<"1"<<endl:cout<<"0"<<endl;
	cout<<"c1 <= c2 =";
	c1<=c2? cout<<"1"<<endl:cout<<"0"<<endl;
	cout<<"c1 >= c2 =";
	c1>=c2? cout<<"1"<<endl:cout<<"0"<<endl;
	cout<<"c1 == c2 =";
	c1==c2? cout<<"1"<<endl:cout<<"0"<<endl;
	cout<<"c1 != c2 =";
	c1!=c2? cout<<"1"<<endl:cout<<"0"<<endl;



}