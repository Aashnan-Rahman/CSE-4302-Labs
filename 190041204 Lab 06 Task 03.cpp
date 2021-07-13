//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 6 TASK 3

#include<bits/stdc++.h>
using namespace std;

class FLOAT
{
private:
	float value;
public:
	FLOAT(float a = 0.00): value(a)
	{}
	void display()
	{
		cout<<value<<endl;
	}
	FLOAT operator + (const FLOAT &right) const
    {
        return FLOAT(value + right.value);
    }
    FLOAT operator - (const FLOAT &right) const
    {
        return FLOAT(value - right.value);
    }
    FLOAT operator * (const FLOAT &right) const
    {
        return FLOAT(value * right.value);
    }
    FLOAT operator / (const FLOAT &right) const
    {
        return FLOAT(value / right.value);
    }
    ~FLOAT()
	{}
};

int main()
{
	FLOAT F1(2.5),F2(3.1),F3;

	F1.display();
	F2.display();
	cout<<endl<<"F1 + F2 =";
	F3 = F1+F2;
	F3.display();
	cout<<endl<<"F1 - F2 =";
	F3 = F1-F2;
	F3.display();
	cout<<endl<<"F1 * F2 =";
	F3 = F1*F2;
	F3.display();
	cout<<endl<<"F1 / F2 =";
	F3 = F1/F2;
	F3.display();
}