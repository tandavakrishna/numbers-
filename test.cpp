#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,i,p,temp;
    vector<int> v2;
    cin>>n;
    for(i=0;i<n;i++)
    {
    	int a,b,j,k;
    	cin>>a>>b;
        vector<int> v1;
        
        for(j=a;j<=b;j++)
        {
        	
            int flag=0;
            for(k=2;k<j;k++)
            {
                if(j%k==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0 && j>1)
            {
                v1.push_back(j);
            }
        }
        if(v1.empty())
    	{
        	v2.push_back(-1);
    	}    
    	else
    	{
    		temp=v1[(v1.size()-1)]-v1[0];
        	v2.push_back(temp);
    	}
        
    }
    int size=sizeof(v2)/sizeof(int);
    for(p=0;p<size-1;p++)
    {
    	cout<<v2[p]<<endl;
	}
    

}