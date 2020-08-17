#include<bits/stdc++.h>
#define ll long long
using namespace std;
map <int,ll> dp;
ll solve(ll n)
{
	if(n==0)
		return n;
	if(dp[n]!=0)
		return dp[n];
	else
	{
		ll x=solve(n/2)+solve(n/3)+solve(n/4);
	    dp[n]=max(n,x);
	    return dp[n];
	}
}
int main()
{
	int t;
	ll n;
	while(cin>>n)
	{
		cout<<solve(n)<<endl;;
	}
	return 0;
}
