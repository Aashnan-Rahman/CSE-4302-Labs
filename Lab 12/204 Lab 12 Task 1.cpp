//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 12 TASK 1

#include <iostream>
using namespace std;

#include <process.h>
const int LIMIT = 100;


template<class dt>

class safearay
{
private:
    dt arr[LIMIT];
public:
    dt& operator [](int n)
    {
        if( n< 0 || n>=LIMIT )
        {
            cout << "\nIndex out of bounds";
            exit(1);
        }
        return arr[n];
    }
};

int main()
{
    safearay<int> sal_1;
    for(int j=0; j<LIMIT; j++)
        sal_1[j] = j*10;
    for(int j=0; j<LIMIT; j++)
    {
        int temp = sal_1[j];
        cout << "Element " << j << " is " << temp << endl;
    }

    cout<<endl<<endl;


    safearay<double> sal_3;
    for(int j=0; j<LIMIT; j++)
        sal_3[j] = j * 5.734;

    for(int j=0; j<LIMIT; j++)
    {
        double temp = sal_3[j];
        cout << "Element " << j << " is " << temp << endl;
    }

    return 0;

}
