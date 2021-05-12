#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,flag=0;
    cin>>n;
    for(i=2;i<=sqrt(n+1);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==0)
        {
            cout<<"the number is prime";
        }
        else
        {
            cout<<"the number is not prime ";
        }
    return 0;
}
