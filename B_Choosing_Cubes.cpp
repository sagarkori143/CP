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
//Try to put fast; before taking inputs as mentioned bby kori
int n,f,k;
cin>>n>>f>>k;
f--;
vector<int> nums(n);
int fav;
for(int i=0;i<n;i++){
cin>>nums[i];
if(i==f)fav=nums[i];
}
sort(nums.begin(),nums.end());
reverse(nums.begin(),nums.end());
bool yes1=false,yes2=false;
for(int i=0;i<n;i++){
    if(nums[i]==fav){
     if(i<k)yes1=true;
     else yes2=true;
    }
}
if(yes1&&yes2)cout<<"MAYBE"<<endl;
else if(yes1)cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}

int main()
{
    ll t;
    fast;
    cin >> t;
    while (t--)
        solve();
}
