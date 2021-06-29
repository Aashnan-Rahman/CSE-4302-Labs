//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 1 TASK 1

#include<bits/stdc++.h>
using namespace std;

class Counter
{
private:
    int value;
    int inc;
public:
    Counter(): value(0),inc(0)
    {}
    void setIncrementStep(int step_val)
    {
        inc = step_val;
    }
    int getCount()
    {
        return value;
    }
    void increment()
    {
        value += inc;
    }
    void resetCount()
    {
        value = 0;
    }
    ~Counter()
    {}
};

int main()
{
    Counter c1;
    cout<<c1.getCount()<<endl;
    c1.setIncrementStep(5);
    cout<<c1.getCount()<<endl;
    c1.increment();
    cout<<c1.getCount()<<endl;
    c1.increment();
    cout<<c1.getCount()<<endl;
    c1.setIncrementStep(4);
    c1.increment();
    cout<<c1.getCount()<<endl;
    c1.resetCount();
    cout<<c1.getCount()<<endl;
}
