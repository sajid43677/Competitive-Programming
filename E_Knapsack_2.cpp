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
ll dp[105][200005];

void solve(){
    allnegOne(dp);
    cin >> n >> k;
    ll tot = 0;
    for1(n){
        cin >> w[i];
        cin >> v[i];
        tot += v[i];
    }
    for1(n+2){
        for(int j = 0; j < 200005;j++){
            dp[i][j] = INT_MAX;
        }
    }
    dp[0][0] = 0;
    for(int i = 0; i <n;i++){
        for(int j = 0; j < 200005;j++){
            dp[i+1][j] = min(dp[i+1][j],dp[i][j]);
            dp[i+1][j+v[i]] = min(dp[i+1][j+v[i]],dp[i][j]+w[i]);
            //cout << dp[i+1][j] << " "<<n << " " <<j << endl;
        }
    }
    ll ans = tot;
    while(dp[n][ans] >k )ans--;
    //cout << dp[n][ans] << " "<<n << " " <<ans << endl;
    cout << ans << endl;
    
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











