#include<iostream>
using namespace std;
int main()
{
    int arr[]={7, 9, 5, 16, 13, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int diff=arr[j]-arr[i];
            if(diff>ans)
            {
                ans=diff;
            }
        }
        
    }
    cout<<ans;
}    