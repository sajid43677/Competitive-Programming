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

int dp[3005][3005][2];
int x,n;
int arr[3005];

int f(int pos,int sum,int val,int prev){
    //__f("pos,sum,val,prev,x",pos,sum,val,prev,x);
    if(sum > x) return dp[pos][sum][prev] = INT32_MAX;
    if(sum == x && pos == n){ __f("pos,sum,val,prev,x",pos,sum,val,prev,x);
        pendl; return dp[pos][sum][prev] =  val;}
    if(pos == n) return dp[pos][sum][prev] = INT32_MAX;
    if(dp[pos][sum][prev] != -1) {__f("pos,sum,val,prev,x",pos,sum,val,prev,x);return dp[pos][sum][prev];}
    int ans;
    if(prev == 0){
        int val1 = f(pos+1,sum,val,0);
        int val2 = f(pos+1,sum+arr[pos],val+1,1);
        ans = min(val1,val2);
    }
    else{
        int val1 = f(pos+1,sum+arr[pos],val,1);
        int val2 = f(pos+1,sum,val+1,0);
        ans = min(val1,val2);
    }
    return ans;

}

void solve(){
    int m;
    cin >> n >> m;
    
    for1(n) cin >> arr[i];
    for2(m){
        allnegOne(dp);
        x = i;
        int val1 = f(0,0,0,0);
        allnegOne(dp);
        int val2 = f(0,0,0,1);
        ll ans = min(val1,val2);
        if(ans == INT32_MAX) cout << -1 << endl;
        else cout << ans << endl;
        cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    }
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











