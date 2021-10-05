//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 13 TASK 2

#include<bits/stdc++.h>
using namespace std;

namespace namespace_1
{
    int val = 4;
    string str = "Hi";
}


namespace namespace_2
{
    int val = 13;
    string str = "Hello";
}

int main()
{
    cout<< namespace_1::val <<" (from namespace_1)"<<endl;
    cout<< namespace_2::val <<" (from namespace_2)"<<endl<<endl;


    cout<< namespace_1::str <<" (from namespace_1)"<<endl;
    cout<< namespace_2::str <<" (from namespace_2)"<<endl;

    return 0;
}
