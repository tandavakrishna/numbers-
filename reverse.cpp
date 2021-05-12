#include <bits/stdc++.h> 
using   namespace std;

#include<bits/stdc++.h>

using namespace std;

int main()

{

    int n,res=0,u;

    cin>>n;

    while(n!=0)

    {

        u=n%10;

        n=n/10;

        res=res*10+u;

    }

    cout<<endl<<res;

}
