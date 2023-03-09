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



void solve(){
    string s,t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    s = " "+s;
    t = " "+t;
    int dp[n+1][m+1];
    pair <int,int> path[n+1][m+1];
    for1(n+1){
        for(int j = 0; j < m+1; j++){
            dp[i][j] = 0;
            path[i][j].xx = 0;
            path[i][j].yy = 0;
        }
    }
    dp[0][0] = 0;
    for(int i = 1;i <= n;i++){
        for(int j = 1; j<=m;j++){
            if(s[i] == t[j]){
                dp[i][j] = dp[i-1][j-1] + 1;
                path[i][j].xx = i-1;
                path[i][j].yy = j-1;
                //__f("s[i],t[j],dp[i][j],dp[i-1][j-1],i,j",s[i],t[j],dp[i][j],dp[i-1][j-1],i,j);
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                if(dp[i-1][j] > dp[i][j-1]){
                    path[i][j].xx = i-1;
                    path[i][j].yy = j;
                }
                else{
                    path[i][j].xx = i;
                    path[i][j].yy = j-1;
                }
            }
        }
    }
    string ans = "";
    int currx = n;
    int curry = m;
    int currv = dp[n][m];
    while(dp[currx][curry] != 0){
        int tmpx = path[currx][curry].xx;
        int tmpy = path[currx][curry].yy;
        if(currv > dp[tmpx][tmpy]){
            //__f("s[currx],t[curry],currx",s[currx],t[curry]);
            ans += s[currx];
        }
        currx = tmpx;
        curry = tmpy;
        currv = dp[currx][curry];
    }
    reverse(all(ans));
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











