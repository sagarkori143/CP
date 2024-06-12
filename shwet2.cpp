#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

bool check(string x, string y) {
    for (int i = 0; i < x.length(); i++) {
        if (x[i] > y[i]) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        string copyA = a;
        reverse(copyA.begin() + i, copyA.end());
        reverse(copyA.begin(),copyA.end());

        for (int j = 0; j < n; j++) {
            string copyB = b;
            reverse(copyB.begin() + j, copyB.end());
            reverse(copyB.begin(),copyB.end());
            if (check(copyA, copyB)) ans++;
        }
    }

    cout << ans << endl;
}

int main() {
    solve();
    return 0;
}
