#include<bits/stdc++.h>
using namespace std;
int happy(int n)
{
	int res=0,i;
	while(n!=0)
	{
		i=n%10;
		n=n/10;
		res=res+i*i;
		
	}
	
	if(res>=10)
	return happy(res);
	else
	return res;
		
}
 	int main()
 	{
 		int num;
 		cin>>num;
 		if(happy(num)==1)
 		{
 			cout<<"happy number";
		 }
		else
		{
			cout<<"not happy number";
		}
	 }

