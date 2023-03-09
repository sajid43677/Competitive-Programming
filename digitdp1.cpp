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

int dp[11][2][92];
int x;
int cnt =0;
string s;
int f(int pos,int ismall,int dsum){
    cnt++;
    if(pos == 10) return dsum == x;
    if(dp[pos][ismall][dsum] != -1) return dp[pos][ismall][dsum];
    int lo = 0;
    int hi = s[pos] - '0';
    if(ismall) hi = 9;
    int re = 0;
    for(int i = lo; i <= hi;i++){
        ismall = ismall | (i < hi);
        int val = f(pos+1,ismall,dsum+i);
        re += val;
    }
    return dp[pos][ismall][dsum] = re;
}

void solve(){
    allnegOne(dp);
    cin >> s >> x;
    int n = 10 - s.size();
    while(n--){
        s = '0' + s;
    }
    //cout << s << endl;
    cout << f(0,0,0) << " " << cnt << endl;
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











