#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char *argv[])
{
int n1,n2,g;
cout<<"enter numbers:\n";
cin>>n1>>n2;
if(n2>n1)
{
int t=n1;
n1=n2;
n2=t;
}
g=n1;
for(int i=2;;i++)
{
if((g%n1==0)&&(g%n2==0))
{
cout<<endl<<g;break;
}
g=n1*i;
}

}
