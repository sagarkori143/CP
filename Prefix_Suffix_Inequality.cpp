
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // Try to put fast; before taking inputs as mentioned bby kori
    long long int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    vector<long long int> ans(n);
    ans[0] = n + 2;
    cout << n + 2;
    long long int next = n + 3;
    for (long long int i = 1; i < n; i++)
    {
        if (i <= (n + 1) / 2)
        {
            while (true)
            {
                if ((next & ans[i - 1]) >= (next ^ ans[i - 1]))
                {
                    break;
                }
                else
                {
                    next++;
                }
            }
        }
        else
        {
            while (true)
            {
                if ((next & ans[i - 1]) <= (next ^ ans[i - 1]))
                {
                    break;
                }
                else
                {
                    next--;
                }
            }
        }
        ans.push_back(next);
        cout << " " << next;
    }
    return;
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
        solve();
}
