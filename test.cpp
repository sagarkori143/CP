
//          ███████╗ █████╗  ██████╗  █████╗ ██████╗     ██╗  ██╗ ██████╗ ██████╗ ██╗
//          ██╔════╝██╔══██╗██╔════╝ ██╔══██╗██╔══██╗    ██║ ██╔╝██╔═══██╗██╔══██╗██║
//          ███████╗███████║██║  ███╗███████║██████╔╝    █████╔╝ ██║   ██║██████╔╝██║
//          ╚════██║██╔══██║██║   ██║██╔══██║██╔══██╗    ██╔═██╗ ██║   ██║██╔══██╗██║   
//          ███████║██║  ██║╚██████╔╝██║  ██║██║  ██║    ██║  ██╗╚██████╔╝██║  ██║██║
//          ╚══════╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝    ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝╚═╝


#include <bits/stdc++.h>
using namespace std;

const unsigned int M = 1000000007;
#define int long long
#define float long double
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define new cout << "\n"
#define lcm(m, n) (((m) / __gcd((m), (n))) * (n))
#define pow(a, b) round(pow(a, b))
#define aint(v) v.begin(), v.end()
#define vi vector<int>
#define pii pair<int, int>
#define sz(a) ((int)a.size())
#define pb push_back
#define read(v)         \
    for (auto &xxx : v) \
        cin >> xxx;
#define print(a)        \
    for (auto &xxx : a) \
        cout << xxx << ' ';
#define for1(i, b) for (int i = 0; i < b; i++)
#define for2(i, a, b) for (int i = a; i < b; i++)


void __print(int x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
 
template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifndef ONLINE_JUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif



int binexp(int base, int power, int M)
{
    int ans = 1;
    while (power)
    {
        if (power & 1)
            ans = (base * 1ll* ans) % M;
        base = (base * base * 1ll ) % M;
        power >>= 1;
    }
    return ans;
}

 
bool isprime(int n)
{
    if (n == 0 || n == 1)
        return false;
    for2(i, 2, (n / 2) + 1)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

 
int sqrt(int n)
{
    int left = 0, right = 1e9 + 5;
    while (left + 1 < right)
    {
        int mid = (left + right) >> 1;
        int ans = mid * mid;
        if (ans > n)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    return left;
}

 
int ceil(int a, int b)
{
    return (a + b - 1) / b;
}



void logic()
{
    
}
 
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int _ = 1;
    cin >> _;
    while (_--)
    {
        logic();
    }
    return 0;
}
/*
     *   .=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.    *
     *   |                     ______                     |    *
     *   |                  .-"      "-.                  |    *
     *   |                 /            \                 |    *
     *   |     _          |              |          _     |    *
     *   |    ( \         |,  .-.  .-.  ,|         / )    |    *
     *   |     > "=._     | )(__/  \__)( |     _.=" <     |    *
     *   |    (_/"=._"=._ |/     /\     \| _.="_.="\_)    |    *
     *   |           "=._"(_     ^^     _)"_.="           |    *
     *   |               "=\__|IIIIII|__/="               |    *
     *   |              _.="| \IIIIII/ |"=._              |    *
     *   |    _     _.="_.="\          /"=._"=._     _    |    *
     *   |   ( \_.="_.="     `--------`     "=._"=._/ )   |    *
     *   |    > _.="                            "=._ <    |    *
     *   |   (_/                                    \_)   |    *
     *   |                                                |    *
     *   '-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-='    *
     *     Don't copy this code. Just read it and get lost     *
*/