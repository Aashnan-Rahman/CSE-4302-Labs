//NAME:AASHNAN RAHMAN
//ID: 190041204
//CSE 4302 LAB 12 TASK 2

#include <iostream>
using namespace std;

template<class dt>

dt amax(dt* arr, int _size)
{
    dt _max = arr[0];

    for(int i=0; i<_size; i++)
    {
        if(arr[i] > _max)
            _max = arr[i];
    }

    return _max;
}

int main()
{
    long arr[100]= {},_size;
    cout<<"Enter size: ";
    cin>>_size;

    cout<<"Enter "<<_size<<" values "<<endl;
    for(int i=0; i<_size; i++)
        cin>>arr[i];

    cout<<endl<<"Max value = "<<amax(arr,_size);

    int arr2[6]= {9,1,10,2,3};
    cout<<endl<<endl<<"Max value = "<<amax(arr2,5);
    return 0;
}
