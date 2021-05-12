#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int n1,int n2)
{
	while(1)
	{
		if(n1<n2)
		{
			swap(n1,n2);
		}
		n1=n1%n2;
		if(n1==0)
		{
			break;
		}
	}
}
int main()
{
	int s1,s2,e1,e2;
	cout<<"enter starting point";
	cin>>s1>>s2;
	cout<<"enter ending point";
	cin>>e1>>e1;
	if(gcd(s1,s2)==gcd(e1,e2))
	{
		cout<<"can reach to end poin from starting point";
	}
	else
	{
		cout<<"cannot reach to end point from starting point";
	}

}