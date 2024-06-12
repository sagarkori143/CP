
#include <bits/stdc++.h>
using namespace std;


void solve()
{
//Try to put fast; before taking inputs as mentioned bby kori
int x,y;
cin>>x>>y;
int dist=x*10;
int ans=1;
while(true){
    int kuch=(dist+100*ans)/(10+ans);
    if(kuch>=y)break;
    ans++;
}
cout<<ans<<endl;

}

int main()
{
    int t;
    
    cin >> t;
    while (t--)
        solve();
}
