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

int hsh[200000];

int main()
{   
    ll n; 
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < n-1; i++)
    {
        ll e;
        cin >> e;
        v.push_back(e);
    }
    v.push_back(0);

    sort(v.begin(), v.end());

    hsh[0] = 1;
    for (ll i = 1; i < n; i++)
    {
        hsh[i] = hsh[i-1] + 1;
    }

    ll missingNumber = 0;
    for (ll i = 0; i < n; i++)
    {
        missingNumber += (v[i] - hsh[i]);
    }
    
    cout << abs(missingNumber) << "\n";

    return 0;
}