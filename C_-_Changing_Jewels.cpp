#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

//double pi = acos(-1.0);

#define xx first
#define yy second
#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define reverseS string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb(x) push_back(x);
#define for1(n) for(int i = 0; i < n;i++)
#define lohi int, vector<int>, greater<int>>

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << ": " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << ": " << arg1 << " |"; __f (comma + 1, args...);
}

void solve(){
    int n,x,y;
    cin >> n >> x >> y;
    ll rj = 1;
    int rl = n;
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    int bl = n;
    ll bj = 0;
    bj = x;
    rl = n-1;
    while(true){
        //__f("blue Jwel",bj);
        if(rl == 1){
            bj = bj*y;
            break;
        }
        rj += bj;
        bj = bj*y + rj*x;
        rl--;
    }
    cout << bj << endl;

}

//FuzzyCarnage
int main()
{
    Boost;
    /* //Read;Write;
    int t;
    cin >> t;
    while(t--) */ 
        solve();
    

}











