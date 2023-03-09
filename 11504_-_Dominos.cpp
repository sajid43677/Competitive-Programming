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



vector <int> el;

void dfs(int at,const vector <vector<int>> &g,vector <int> &vis){
    if(vis[at]) return;
    vis[at] = 1;
    for(int i = 0; i < g[at].size();i++){
        dfs(g[at][i],g,vis);  
    }
    el.pb(at);
    //cout << tim << " " <<at << endl;

}

void solve(){
    int n,m,a,b;
    cin >> n >> m;
    vector <vector<int>> g(n+1);
    vector <int> vis(n+1);
    for1(m){
        cin >> a >> b;
        g[a].pb(b);
    }
    for2(n){
        if(!vis[i]) dfs(i,g,vis);
    }
    reverse(all(el));
    //for(auto a: el) cout << a << endl;
    int fel = 0;
    vis.assign(n+1,0);
    for1(n){
        int a = el[i];
        //cout << vis[a] << endl;
        if(!vis[a]){
            dfs(a,g,vis);
            fel++;
        }
    }
    cout << fel << endl;
    el.clear();

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











