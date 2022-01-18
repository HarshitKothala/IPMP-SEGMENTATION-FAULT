#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,4,2,1,6,5,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        arr[arr[i]%size]=arr[arr[i]%size]+size;
    }
    cout<<"The repeating elements are :"<<endl;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>2*size)
        {
            cout<<i<<endl;
        }
    }
}