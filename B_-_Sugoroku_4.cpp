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

const ll MOD = 998244353;

long long modinv(long long a, long long b,
                               long long mod)
{
    long long res = 1; // Initialize result
 
    // Update a if it is more than
    // or equal to mod
    //a %= mod;
 
    while (b) {
        // If b is odd, add a with result
        if (b & 1)
            res = (res * a) % mod;
 
        // Here we assume that doing 2*a
        // doesn't cause overflow
        a = (a*1ll * a) % mod;
 
        b >>= 1; // b = b / 2
    }
 
    return res;
}

ll N, M, K;
ll dp[1006][1006];

ll f(ll pos,ll spin){
    if(pos == N) return modinv(modinv(M,spin,MOD),MOD-2,MOD);
    if(spin >= K) return 0;
    if(dp[pos][spin] != -1) return dp[pos][spin];

    ll ans = 0;

    for(int i = 1; i <= M;i++){
        if(i+pos > N){
            ans += f(N-(i+pos-N),spin+1)%MOD;
        }
        else{
            ans += f(i+pos,spin+1)%MOD;
        }

        ans = ans % MOD;
    }

    //ans = ans%MOD;
    //cout << ans << endl;
    return dp[pos][spin] = ans;

}

void solve(){
    cin >> N >> M >> K;
    allnegOne(dp);
    ll ans = f(0,0);
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











