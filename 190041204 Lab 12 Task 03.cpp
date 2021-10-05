//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 12 TASK 3

#include <iostream>
using namespace std;

const int LIMIT = 5;

template<class dt>

class safearay
{
private:
    dt arr[LIMIT];
public:
    class OutOfBounds
    {};
    dt& operator [](int n)
    {
        if( n< 0 || n>=LIMIT )
            throw OutOfBounds();

        return arr[n];
    }
};

int main()
{
    try
    {
        safearay<int> sal_1;

        for(int j=0; j<=LIMIT; j++)
            sal_1[j] = j*10;

        for(int j=0; j<LIMIT; j++)
        {
            int temp = sal_1[j];
            cout << "Element " << j << " is " << temp << endl;
        }
    }

    catch(safearay<int>::OutOfBounds)
    {
        cout<<"ERROR !! INDEX IS OUT OF BOUND ("<<LIMIT<<")"<<endl;
    }

    return 0;
}

