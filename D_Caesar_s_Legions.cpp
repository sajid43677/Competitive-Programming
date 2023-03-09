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

int k1,k2;
int n1,n2;
ll curn1,curn2,sum,tot;
int dp[105][105][2][15];
ll mod = 1e8;

ll f(int a1,int a2,int curr,int pos){
    //__f("dp[a1][a2][curr][pos]",dp[a1][a2][curr][pos]);
    if(a1+a2 >= tot) {
        if(n1 == a1 && n2 == a2) return 1;
        else return 0;
    }
    //if(a1 > n1 || a2 > n2) return 0;
    if(dp[a1][a2][curr][pos] != -1) return dp[a1][a2][curr][pos] % mod;
    ll ans = 0;
    if(curr == 0){
        if(a1 <= n1){
            if(pos < k1){
                ans = f(a1+1,a2,curr,pos+1) % mod + f(a1,a2+1,1,1) % mod;
            }
            else if(a2 < n2){
                ans = f(a1,a2+1,1,1) % mod;
            }
        }
    }
    else{
        if(a2 <= n2){
            if(pos < k2){
                ans = f(a1,a2+1,curr,pos+1) % mod + f(a1+1,a2,0,1) % mod;
            }
            else if(a1 < n1){
                ans = f(a1+1,a2,0,1) % mod;
            }
        }
    }
    dp[a1][a2][curr][pos] = ans % mod;
    //__f("dp[a1][a2][curr][pos],a1,a2,curr,pos",dp[a1][a2][curr][pos],a1,a2,curr,pos);
    return dp[a1][a2][curr][pos] % mod;

}

void solve(){
    
    cin >> n1 >> n2 >> k1 >>  k2;
    allnegOne(dp);
    tot = n1+n2;
    
    cout << f(0,0,0,0) % mod<< endl;
    
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











