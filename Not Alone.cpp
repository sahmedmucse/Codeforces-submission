#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


// https://codeforces.com/contest/2153/problem/D

ll cost(ll i, ll n, vector<ll>&dp, vector<ll>&v )
{
    if( i >= n) return 0;

    if(dp[i] != 1e18)
    {
        return dp[i] ;
    }

    if( i == n-1)
    {
        return dp[i] =1e18;
    }

    dp[i] = abs(v[i]-v[i+1]) + cost(i+2, n, dp, v);

    if( i+2 < n)
    {
        dp[i] = min(dp[i], max({v[i], v[i+1],v[i+2]}) - min({v[i],v[i+1],v[i+2]}) + cost(i+3, n, dp, v));

    }

    return dp[i];
}



void solve()
{
    int n;
    cin>>n;

    vector<ll>v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    vector<ll>dp(n,1e18);

    ll ans = cost(0,n,dp,v);

    v.insert(v.begin(), v.back());
    v.pop_back();

     dp = vector<ll>(n, 1e18);

    ans =min(ans, cost(0,n,dp,v));



    v.insert(v.begin(), v.back());
    v.pop_back();
    dp = vector<ll>(n, 1e18);

    ans =min(ans, cost(0,n,dp,v));
    cout << ans << endl;

}



int main()
{
    optimize();
    int t;
    cin>>t;

    for(int j=1; j<=t; j++)
    {
        solve();
    }
    return 0;
}
