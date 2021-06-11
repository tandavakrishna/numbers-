#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,k,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(k=i;k<n;k++)
        {
            sum+=arr[k];
        }
        if(sum==5)
        {
            cout<<"true";
            flag=1;
            break;
        }
    
    }
    if(flag==0)
    {
        cout<<"false"
    }
}
