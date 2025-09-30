// https://codeforces.com/contest/865/problem/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define yes cout << "YES"<<endl;
#define no cout << "NO"<<endl;

#define testcases int t; cin>>t; while(t--)
#define endl '\n'

#define vi vector<int>
#define vll vector<ll>

#define pb push_back;
#define lp(i,n) for(int i=0; i<n; i++)

#define srt(v) sort(v.begin(),v.end());
#define srtr(v) sort(v.rbegin(),v.rend());

int  mod = 1e9+7;
long long solve(int N, const vector<int>& v)
{
    long long ans = 0;

    priority_queue<int, vector<int>, greater<int>> min_buy_prices;

    for (int u : v)
    {

        min_buy_prices.push(u);

        if (!min_buy_prices.empty())
        {
            int min_buy_price = min_buy_prices.top();

            if (u > min_buy_price)
            {
                ans += (long long)u - min_buy_price;
                min_buy_prices.pop();
                min_buy_prices.push(u);
            }
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;cin>>N;

    vector<int> v(N);

    for (int i = 0; i < N; ++i)
    {
        cin>>v[i];
    }

    long long result = solve(N, v);

    cout << result << endl;

    return 0;
}
