#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	
	cin>>n;
	
	int a[n];
	
	int max=INT_MIN;
	
	int sec=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		if(a[i]<max && a[i]>sec)
		{
			sec=a[i];
		}
	}
	
	cout<<sec<<endl;
	
	return 0;
}
