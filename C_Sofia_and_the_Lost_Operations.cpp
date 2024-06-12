#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums1(n);
    vector<int> nums2(n);
    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }
    int m;
    cin >> m;
    unordered_map<int, int> available;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        available[x]++;
    }
    
    // Track the required modifications
    unordered_map<int, int> required;
    for (int i = 0; i < n; i++) {
        if (nums1[i] != nums2[i]) {
            required[nums2[i]]++;
        }
    }
    
    // Check if we can fulfill the requirements with the available options
    for (const auto& it : required) {
        if (available[it.first] < it.second) {
            cout << "NO" << endl;
            return;
        }
    }
    
    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
