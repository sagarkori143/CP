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
    int n;
    cin >> n;
    int var1, var2;
    int count1 = 0, count2 = 0;
    set <int> sett;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            var1 = x;
        }
        if (x != var1)
        {
            var2 = x;
        }
        if (x == var1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
        sett.insert(x);
    }
    if (count1 + count2 == n && sett.size()<3)
    {
        if (n % 2 == 0)
        {
            if (count1 == n / 2 || count1==n)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            if (count1 == n / 2 || count1 == n || count2 == n/2)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    ll t;
    fast;
    cin >> t;
    while (t--)
        solve();
}
