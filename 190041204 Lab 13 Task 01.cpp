//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 13 TASK 1

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[15]={};
    set<int> _set;

    for(int i=0;i<30;i++)
    {
        if(i%2==0)
            arr[i/2] = i;

        else
            _set.insert(i);
    }

    vector<int> vec(30);

    merge(arr,arr+15,_set.begin(),_set.end(),vec.begin());

    cout<<"Array Status:"<<endl;
    for(int i=0;i<15;i++)
        cout<<arr[i]<<' ';

    cout<<endl<<endl<<"Set Status:"<<endl;
    for(int i:_set)
        cout<<i<<' ';

    cout<<endl<<endl<<"Vector Status:"<<endl;
    for(int i:vec)
        cout<<i<<' ';

    cout<<endl;

    return 0;
}
