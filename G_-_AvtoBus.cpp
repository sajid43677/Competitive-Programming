#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

//double pi = acos(-1.0);

#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define reverseS string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb(x) push_back(x);
#define for1(n) for(int i = 0; i < n;i++)

void solve(){
    ll n;
    cin >> n;
    ll mx,mn,tmp;
    if(n%2==1){
        cout << - 1 << endl;
        return;
    }
    mx = n/4;
    mn = n/6;
    tmp = n%6;
    if(tmp > 0) mn += 1;
    if(mx == 0) {
        cout << -1 << endl;
        return;
    }
    cout << mn << " " << mx << endl; 
}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    int t;
    cin >> t;
    while(t--) 
        solve();
    

}











