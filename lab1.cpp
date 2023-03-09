#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pi;

//double pi = acos(-1.0);

#define xx first
#define yy second
#define all(x) x.begin(),x.end()
#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define reverseS string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb push_back
#define for1(n) for(int i = 0; i < n;i++)
#define for2(n) for(int i = 1; i <= n;i++)
#define lohi int, vector<int>, greater<int>>
#define mkp make_pair
#define pendl cout << '\n'

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << ": " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << ": " << arg1 << " |"; __f (comma + 1, args...);
}

//              D, U, R, L, DR, DL, UR, UL        D = Down, R = Right, L = Left, U = Up
vector<int> gx={1, -1, 0, 0, 1, 1, -1, -1},
            gy={0, 0, 1, -1, 1, -1, 1, -1};


//          Code Starts Here          //
//====================================//

ll v[105];
ll w[105];
ll n,k;
ll dp[105][105][105];
ll fun(int pos,ll curw,ll curv){
    cout << pos << endl;
    if(pos >= n){
        return dp[pos][curw][curv] = curv;
    }
    if(dp[pos][curw][curv] != -1) return dp[pos][curw][curv];

    ll ans1 = INT64_MIN;
    ll ans2 = INT64_MIN;
    if(curw + w[pos] <= k) ans1 = fun(pos+1,curw + w[pos],curv + v[pos]);
    if(pos+1 <= n)ans2 = fun(pos+1,curw ,curv );
    dp[pos][curw][curv] = max(ans2,ans1);
    cout << dp[pos][curw][curv] << endl;
    return dp[pos][curw][curv];
}

void solve(){
    allnegOne(dp);
    cin >> n >> k;
    for1(n){
        cin >> w[i];
        cin >> v[i];
    }
    cout << fun(0,0,0)<< endl;

}

//FuzzyCarnage
int main()
{
    //Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--)  */
        solve();


}











