#include<bits/stdc++.h>
using namespace std;

#define py cout << "YES" <<endl;
#define pn cout << "NO" <<endl;
#define fo(i,n) for(i = 0; i < (n); ++i);
typedef long long ll;
using vll = vector<ll>;
using vi = vector<int>;
using pr = pair<ll,ll>;
using vii = vector<pr>;

const int M = 1e9 + 7;
const float pi = 3.14159;
const int N = 1e7;
const ll P = 1e9;

int hsh[N+1];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int tc;
    // cin >> tc;
    // while (tc--)
    // {
    //     /* code */
    // }
    
    ll n;
    cin >> n;
    long long total = (n * (n + 1))/2;
    vll v;
    ll sum = 0;
    for (ll i = 0; i < n-1; i++)
    {
        ll e;
        cin >> e;
        v.push_back(e);
        sum += v[i];
    }

    cout << (total - sum) << "\n";
    
    return 0;
}
