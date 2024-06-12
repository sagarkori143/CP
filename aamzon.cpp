#include <bits/stdc++.h>
using namespace std;
void solve()
{
//Try to put fast; before taking inputs as mentioned bby kori
int n,rel,rooms;
cin>>n>>rel>>rooms;
map<int,int>sets;
for(int i=0;i<rel;i++){
  int x,y;
  cin>>x>>y;
  int temp1=min(x,y);
  int temp2=max(x,y);
  sets[temp1]=temp2;
  
}
int pairs=sets.size();
int accomodated=0;
if(rooms<=pairs){
    accomodated=rooms*2;
}else{
    accomodated=(pairs*2)+(rooms-pairs);
}
cout<<n-accomodated<<endl;

}

int main()
{
    
        solve();
}
