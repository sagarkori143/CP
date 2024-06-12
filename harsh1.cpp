#include <iostream>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int broken = 0;
    bool player = 1; // true for player 1, false for player 2

    while (broken <= n)
    {
        if (player)
        {
            if (broken == 0)
                broken = a;
            else
                broken += a - 1;
            
            if (broken == n)
            {
                cout << 1 << endl; // Player 1 wins
                return;
            }
        }
        else
        {
            if (broken == 0)
                broken = b;
            else
                broken += b - 1;
            
            if (broken == n)
            {
                cout << 0 << endl; 
                return;
            }
        }

        
        player = !player;
    }
    cout<<-1<<endl;
}

int main()
{
    solve();
    return 0;
}
