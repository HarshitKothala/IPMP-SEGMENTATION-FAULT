#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,7,8,5,21,13,9,16};
    int sum=43;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-3;i++)
    {
        for(int j=i+1;j<size-2;j++)
        {
            for(int k=j+1;k<size-1;k++)
            {
                for(int l=k+1;l<size;l++)
                {
                    if(arr[i]+arr[j]+arr[k]+arr[l]==sum)
                    {
                        cout<<"{"<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<", "<<arr[l]<<"}"<<endl;
                    }
                }
            }
        }
    }
}