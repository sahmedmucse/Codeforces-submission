#include <bits/stdc++.h>
using namespace std;
#define ll long long

//https://codeforces.com/contest/2155/problem/B

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

#define ff first
#define ss second
#define pb push_back


int main()
{
    optimize();

    testcases
    {
        int n,k;
        cin>>n>>k;

        if(n*n-1 == k ) cout <<"NO"<<endl;
        else
        {
            char gride[n][n];

            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(j==n-1)
                    {
                        gride[i][j]='L';
                    }
                    else
                    {
                        gride[i][j]='R';
                    }
                }
            }

            int i=0,j=0,c=0;

            while(c<k)
            {
                gride[i][j] = 'L';
                j++;
                c++;

                if(j==n)
                {
                    j=0;
                    i++;
                }
            }

            if((k%n) == n-1)
            {
                int row = k/n;
                gride[row][n-1]='D';
                gride[row+1][n-1]='U';
            }

            cout << "YES"<<endl;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    cout << gride[i][j];
                }
                cout << endl;
            }
            // cout << endl;

        }


    }
    return 0;
}

