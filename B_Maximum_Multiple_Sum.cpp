#include <iostream> // Include necessary header for input/output
using namespace std;

typedef long long ll; // Define ll as a long long type

int sum(int k, int n)
{
    int multi = 1;
    int ans = 0;
    while (true)
    {
        if(k * multi<=n){
            ans += k * multi;
        multi++;
        }
        else{
            break;
        }
        
    }
    return ans;
}

void solve()
{
    // Input is taken after the fast input/output mechanism is applied
    int n;
    cin >> n;
    int check = 2;
    int ans = check;
    int maxSum = sum(check, n);
    while (check <= n)
    {
        int tempSum = sum(check, n);
        if (tempSum > maxSum)
        {
            ans = check;
            maxSum = tempSum;
        }
        check++;
    }
    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t; // Take input for the number of test cases
    while (t--)
        solve();
    return 0; // Add return statement at the end of main
}