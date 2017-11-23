#include <bits/stdc++.h>

using namespace std;
unordered_map<long long int,long long int> z;
unordered_map<long long int,long long int> o;
long long int rec(long long int n)
{
	if(z[n-1])
	{
		z[n]=o[n-1];
		o[n]=o[n-1]+z[n-1];
	}
	else
	{
		rec(n-1);
		z[n]=o[n-1];
		o[n]=o[n-1]+z[n-1];
	}
	return z[n]+o[n];
}
int main (){
	int t;
	cin>>t;
	z[0]=0;
	o[0]=0;
	z[1]=1;
	o[1]=1;
	while(t>0)
	{
		long long int n;
		cin>>n;
		cout<<rec(n)<<"\n";
		t--;
	}
		return 0;
}