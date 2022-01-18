#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,3,4,1,6,9};
    int sum=14;
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size-2;i++)
    {
        for(int j=i+1;j<size-1;j++)
        {
            for(int k=j+1;k<size;k++)
            {
                if(arr[i]+arr[j]+arr[k]==sum)
                {
                    cout<<"{ "<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<" }";
                }
            }
        }
    }

}