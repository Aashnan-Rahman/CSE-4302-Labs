//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 1 TASK 2

#include<bits/stdc++.h>
using namespace std;

class RationalNumber
{
private:
    int numerator;
    int denominator;
public:
    RationalNumber(): numerator(0), denominator(1)
    {}
    void assign(int num,int denom)
    {
        if(denom == 0)
        {
            cout<<"Error! Undefined (denominator is zero)"<<endl;
            return;
        }
        numerator = num;
        denominator = denom;
    }
    void invert()
    {
        if(numerator == 0)
        {
            cout<<"Error! Undefined (denominator is zero)"<<endl;
            return;
        }
        swap(numerator,denominator);
    }
    double convert()
    {
        return (double)numerator / (double)denominator;
    }
    void print()
    {
        int x=numerator,y=denominator,z=__gcd(numerator,denominator);
        x = x/z;
        y = y/z;

        cout<< x << "/" << y << endl;
        cout<< numerator << "/" << denominator << endl;
    }
    ~RationalNumber()
    {}
};

int main()
{
    RationalNumber Q,Q1,Q2;
    Q.print();
    Q1.assign(6,4);
    Q1.print();
    cout<<Q1.convert()<<endl;
    Q1.invert();
    Q1.print();
    cout<<Q1.convert()<<endl;
    Q2.assign(0,5);
    Q2.print();
    cout<<Q2.convert()<<endl;
    Q2.invert();
    Q2.print();
    cout<<Q1.convert()<<endl;

}