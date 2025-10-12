#include <bits/stdc++.h>
using namespace std;
#define ll long long

//https://codeforces.com/problemset/problem/279/B

#define optimize() ios_base::sync_with_stdio(false); cin.tie(NULL);

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

#define testcases int t; cin >> t; while (t--)
#define endl '\n'

#define vi vector<int>
#define vll vector<ll>

#define pb push_back
#define lp(i,n) for(int i=0; i<n; i++)

#define srt(v) sort(v.begin(),v.end());
#define srtr(v) sort(v.rbegin(),v.rend());

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];

    ll ans = 0;
    ll sum = 0, l = 0;

    for (ll r = 0; r < n; r++)
    {
        sum += v[r];
        while (sum > m)
        {
            sum -= v[l];
            l++;
        }
        ans = max(ans, r - l + 1);
    }

    cout << ans << endl;
    return 0;
}

