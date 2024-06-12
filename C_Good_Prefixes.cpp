#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long int> nums(n);
    vector<long long int> sums(n);
    long long int sum = 0;
    long long int ans = 0;
    long long int maxi = 0;
    for (long long int i = 0; i < n; i++)
    {
        cin >> nums[i];
        sum += nums[i];
        sums[i] = sum;
        maxi=std::max(maxi,nums[i]);
        if (maxi == sums[i] - maxi)
            {
                ans++;
                
            }
    }
    
    
    cout << ans<< "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
