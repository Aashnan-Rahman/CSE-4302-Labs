//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 10 TASK 2

#include<bits/stdc++.h>
using namespace std;

class Counter
{
private:
    int count;
    int inc;
    //Counter operator = (Counter &c){};              //restricting assignment operator from public access
    //Counter(Counter &c) : count(c.count),inc(1){};  //restricting constructor from public access
public:
    Counter(int a,int b) : count(a),inc(b)
    {

    }
    Counter(Counter &c) : count(c.count),inc(1)     // overloaded constructor
    {

    } 
    int getCount()
    {
        return count;
    }
    int getInc()
    {
        return inc;
    }
    void display()
    {
        cout<<endl<<"Count value      : "<<count<<endl;
        cout<<"Increment value  : "<<inc<<endl;
        //cout<<"Address of count : "<<this<<endl;
    }

    Counter& operator = (Counter &c)            // overloaded assignment operator
    {
        count = c.count;
        //return Counter(count,inc);
        return *this;
    }
    
    ~Counter()
    {}
};

int main()
{
    Counter c1(0,0),c2(10,2);                   // initialization
    
    cout<<"c1"<<endl;   
    c1.display();
    
    cout<<"c2(10,2)"<<endl;
    c2.display();
    
    c1 = c2;
    cout<<"c1 (c1 = c2)"<<endl;              // assignment
    c1.display();

    cout<<"c3 ( c3 = c2)"<<endl;            // initialized
    Counter c3 = c2;
    c3.display();

    return 0;

}


/*default copy constructor and default assignment operator is not suitable when we
want to copy certain members of an object to another instead of everything */

/*We can restrict a class from copying from one object to another by making 
it a private function.*/
