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


const int mx = 2e5+5;
int cur[mx];
int is_cycle = INT_MAX;
int vis[505]; 

void dfs(int at,const vector <vector<int>> &g,int curr_cycle){
    //if(vis[at]) return;
    vis[at] = 1;
    cur[at] = 1;
    curr_cycle++;
    for(int i = 0; i < g[at].size();i++){
       cout << curr_cycle << " pp "<<at <<" "<<g[at][i] << endl;
        if(vis[g[at][i]] && cur[g[at][i]]){
                is_cycle = min(is_cycle,curr_cycle);
                curr_cycle = 0;
                cout << "cc " << is_cycle << endl;
                return;
        }
        dfs(g[at][i],g,curr_cycle);
    }
    cur[at] = 0;
    //cout << tim << " " <<at << endl;

}

void solve(){
    is_cycle = INT_MAX;
    allZero(cur);
    int n,m,a,b;
    cin >> n >> m;
    vector <vector<int>> g(n+1);
    for1(m){
        cin >> a >> b;
        g[a].pb(b);
        //g[b].pb(a);
    }
    for1(n){
        dfs(i,g,0);
        allZero(vis);
    }
    //for(auto a: el) cout << a << endl;
    if(is_cycle != INT_MAX){
        cout << is_cycle << endl;
        return;
    }
    cout << "impossible" << endl;

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











