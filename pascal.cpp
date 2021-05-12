#include<iostream>
using namespace std;
int main()
{
    int n,i,j,s;
    cin>>n;
    int arr[n][n];
    for(i=0;i<n;i++)
    {

        for (s=0;s<n-j;s++)
        cout<<" ";
        for(j=0;j<=i;j++)
        {
            if(i==j||j==0)
            arr[i][j]=1;
            
            else
             arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            cout<<arr[i][j]<<" ";
            
        
        cout<<endl;
       
    }
}
