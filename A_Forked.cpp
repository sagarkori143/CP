//---------------Welcome To Sagar Kori's Submission------------//

//--------------Pata hai stalking achi baat nahi hoti---------//

//---------------Besharam hai pura... Padhte hi jaa rha hai----//

#include <bits/stdc++.h>
using namespace std;

// Defining some datatypes here :)

typedef long long int ll;
#define all(v) v.begin(), v.end()
#define For0 for (ll i = 0; i < n; i++)
#define For1 for (ll i = 1; i <= n; i++)
#define Forin                  \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define Forauto       \
    for (auto it : v) \
        cout << it << " ";
#define pb push_back
#define F first
#define S second
#define B begin()
#define E end()

typedef set<int> sti;
typedef multiset<int> msti;
typedef multiset<long long> mstl;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpi;
typedef vector<bool> vb;
typedef vector<string> vs;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, int> psi;
typedef pair<string, ll> psl;

typedef map<int, int> mpii;
typedef map<ll, ll> mpll;
typedef map<string, int> mpsi;
typedef map<string, ll> mpsl;
#define fast    \
    cin.tie(0); \
    cin.sync_with_stdio(0);

//-------------------DEFINED-------------------//

#define Y cout << "YES\n";
#define N cout << "NO\n";
#define nl cout << '\n';
#define fg bool flag = false;
#define ll long long

void solve()
{
    // Try to put fast; before taking inputs as mentioned bby kori
    int a, b;
    cin >> a >> b;
    int xk, yk;
    cin >> xk >> yk;
    int xq, yq;
    cin >> xq >> yq;
    vector<int> l = {1, -1, 1, -1}, m = {1, 1, -1, -1};
    set<pair<int, int>> king;
    set<pair<int, int>> queen;
    for (int i = 0; i < 4; i++)
    {
        king.insert({xk + (a * l[i]), yk + (b * m[i])});
        queen.insert({xq + (a * l[i]), yq + (b * m[i])});
        king.insert({xk + (b * l[i]), yk + (a * m[i])});
        queen.insert({xq + (b * l[i]), yq + (a * m[i])});
    }

    int ans = 0;
    for (auto it : king)
    {
        if (queen.find(it) != queen.end())
            ans++;
    }
    cout << ans << endl;
}

int main()
{
    ll t;
    fast;
    cin >> t;
    while (t--)
        solve();
}
