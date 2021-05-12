#include<bits/stdc++.h>

using namespace std;

int main()

{

    int n,u,temp,ec=0,oc=0;

    cin>>n;

    temp=n;

    while(n!=0)

    {

        u=n%10;

        if(u%2==0)

        {

            ec+=1;

        }

        else

        {

            oc+=1;

        }

        n=n/10;

    }

    cout<<"even count is"<<ec<<endl<<"odd count is"<<oc;



}
