#include<bits/stdc++.h>

using namespace std;

int main()

{

    int n,res=0,u,temp;

    cin>>n;

    temp=n;

    while(n!=0)

    {

        u=n%10;

        n=n/10;

        res=res*10+u;

    }

    if(temp==res)

    {

        cout<<"palindrome";

    }

    else

    {

        cout<<"not palindrome";

    }

}
