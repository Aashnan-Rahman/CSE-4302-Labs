//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 6 TASK 1

#include<bits/stdc++.h>
using namespace std;

class Counter
{
private:
	int count,step;
public:
	Counter(int c=0,int x=1):count(c),step(x)
	{
		if(step < 1) 
		{
			cout<<"Error. Step can't be negative"<<endl;
			step = 1;
		}
	}
	void setCount(int c)
	{
		cout<<"The value of step has been set to: "<<c<<endl;
		count = c;	
	}
	void setIncrementStep(int step_val)
	{
		cout<<"The value of step has been set to: "<<step<<endl;
		step = step_val;
	}
	int getCount()
	{
		cout<<"Value of count :";
		return count;
	}
	int getStep()
	{
		cout<<"Value of step :";
		return step;
	}
	int display()
	{
		cout<<endl<<"Value of count : "<<count<<endl;
		cout<<"Value of step :"<<step<<endl<<endl;
	}
	void increment()
	{
		cout<<"counter has been incremented"<<endl;
		count+=step;
	}
	void resetCount()
	{
		cout<<"Count has been reset";
		count = 0; 
	}
	~Counter()
	{
		cout<<"Object has been destroyed"<<endl;
	}
	Counter operator + (const Counter &right )
    {
        return Counter(count + right.count,min(step,right.step));
    }
    Counter operator + (int left )
    {
        return Counter(count + left,step);
    }
    void operator += (const Counter &right)
    {
    	count += right.count;
    	step = min(step,right.step);
    }
    Counter operator ++(int)
    {
    	int x = count;
    	increment();
    	return Counter(x,step);
    }
    Counter operator ++()
    {
    	increment();
    	return Counter(count,step);
    }
    friend Counter operator + (int left, const Counter right);
};

Counter operator + (int left, const Counter right)
{
    return Counter(left + right.count,right.step);
}


int main()
{
	Counter c1(5,4) , c2(0,2);

	cout<<"For object c1 ,"<<endl;
	cout<<c1.getCount()<<endl;
	cout<<c1.getStep()<<endl;
	cout<<endl;

	cout<<"For object c2 ,"<<endl;
	cout<<c2.getCount()<<endl;
	cout<<c2.getStep()<<endl;
	cout<<endl;

	cout<<"For object c3 ,"<<endl;
	Counter c3 = c1 + c2 ;
	cout<<c3.getCount()<<endl;
	cout<<c3.getStep()<<endl;
	cout<<endl;

	c1.increment();
	c1.increment();
	c2.increment();
	c3.increment();
	cout<<endl;


	cout<<"For object c1 ,"<<endl;
	cout<<c1.getCount()<<endl;
	cout<<c1.getStep()<<endl;
	cout<<endl;

	cout<<"For object c2 ,"<<endl;
	cout<<c2.getCount()<<endl;
	cout<<c2.getStep()<<endl;
	cout<<endl;

	cout<<"For object c3 ,"<<endl;
	//Counter c3 = c1 + c2 ;
	cout<<c3.getCount()<<endl;
	cout<<c3.getStep()<<endl;
	cout<<endl;

	Counter c4 = c3 + 4;
	cout<<"For object c4 (c3+4),"<<endl;
	cout<<c4.getCount()<<endl;
	cout<<c4.getStep()<<endl;
	cout<<endl;

	Counter c5 = 8 + c3;
	cout<<"For object c5 (8+c3),"<<endl;
	cout<<c5.getCount()<<endl;
	cout<<c5.getStep()<<endl;
	cout<<endl;

	c1++;
	++c2;

	cout<<"For object c1 ,"<<endl;
	cout<<c1.getCount()<<endl;
	cout<<c1.getStep()<<endl;
	cout<<endl;

	cout<<"For object c2 ,"<<endl;
	cout<<c2.getCount()<<endl;
	cout<<c2.getStep()<<endl;
	cout<<endl;

	c1+=c2;

	cout<<"For object c1 ,"<<endl;
	cout<<c1.getCount()<<endl;
	cout<<c1.getStep()<<endl;
	cout<<endl;

	cout<<"For object c2 ,"<<endl;
	cout<<c2.getCount()<<endl;
	cout<<c2.getStep()<<endl;
	cout<<endl;

	Counter c6 = ++c2;
	Counter c7 = c1++;

	cout<<"For object c6 ,"<<endl;
	cout<<c6.getCount()<<endl;
	cout<<c6.getStep()<<endl;
	cout<<endl;

	cout<<"For object c7 ,"<<endl;
	cout<<c7.getCount()<<endl;
	cout<<c7.getStep()<<endl;
	cout<<endl;

	cout<<"For object c1 ,"<<endl;
	cout<<c1.getCount()<<endl;
	cout<<c1.getStep()<<endl;
	cout<<endl;

	cout<<"For object c2 ,"<<endl;
	cout<<c2.getCount()<<endl;
	cout<<c2.getStep()<<endl;
	cout<<endl;
}