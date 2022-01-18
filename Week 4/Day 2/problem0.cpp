#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n=size+1;
    
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    int total=n*(n+1)/2;
    cout<<"missing number is "<<total-sum;
}