#include<iostream>
using namespace std;
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={4,5,6};

    int m= sizeof(arr1)/sizeof(arr1[0]);
    int n= sizeof(arr2)/sizeof(arr2[0]);

    int i=0;
    int j=0;

    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            i=i+1;
        }
        else if(arr1[i]>arr2[j])
        {
            j=j+1;
        }
        else{
            cout<<arr1[i]<<" ";
            i=i+1;
            j=j+1;
        }
    }
}