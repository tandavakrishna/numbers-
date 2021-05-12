#include<iostream>
using namespace std;
int main()
{
int n,r,oc,ec;

cin>>n;

while(n>0)
{
r = n%10;
if (r%2==0)
{
ec+=1;
}
else{
oc+=1;
}
n=n/10;
}
if(oc==0)
{
cout<<"stron even"<<endl;
}
else if (ec==0)
{
cout<<"strong odd"<<endl;
}
else
{
cout<<"mixed number"<<endl;
}
}