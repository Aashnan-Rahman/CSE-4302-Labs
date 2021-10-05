//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 2 TASK 2

#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
    double length, width;
public:
    Rectangle ( double L = 1.0, double W =1.0 ) : length (L), width(W)
    {
        if(length<1.0 || length>20.0 || width<1.0 || width>20.0)
        {
            cout<<"Error in range ( 1 ~ 20) "<<endl;
            length = 1.0;
            width = 1.0;
        }
    }
    void getRectangle()
    {
        cout<<"Length of Rectangle : ";
        cin>>length;
        cout<<"Width of Rectangle : ";
        cin>>width;
        if(length<1.0 || length>20.0 || width<1.0 || width>20.0)
        {
            cout<<"Error in range ( 1 ~ 20) "<<endl;
            length = 1.0;
            width = 1.0;
        }
    }
    double perimeter()
    {
        return 2*(length + width) ;
    }
    double area ()
    {
        return length*width;
    }
    double diagonal()
    {
        return sqrt(length*length + width*width);
    }
    double angle()
    {
        return atan(width/length);
    }
    void showdata()
    {
        cout<<"Information of the Rectangle: "<<endl;
        cout<<"Length = "<<length<<endl;
        cout<<"Width = "<<width<<endl;
        cout<<"perimeter = "<<perimeter()<<endl;
        cout<<"area = "<<area()<<endl;
        cout<<"diagonal = "<<diagonal()<<endl;
        cout<<"angle = "<<angle()<<endl<<endl;
    }
    ~Rectangle()
    {
        cout<<"The Rectangle has been destroyed"<<endl;
    }
};

int main()
{
    Rectangle R1(5,0.1);
    R1.showdata();

    Rectangle R2(15.2,5.1);
    R2.showdata();
}
