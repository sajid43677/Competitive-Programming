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
vector <int> g[mx];
vector <int> vis(mx);
vector <int> el;
int cur[mx];
int is_cycle; 
int tim;

void dfs(int at){
    if(vis[at]) return;
    vis[at] = 1;
    cur[at] = 1;
    tim++;
    sort(g[at].begin(),g[at].end());
    for(int i = g[at].size() - 1; i >= 0;i--){
        if(vis[g[at][i]] && cur[g[at][i]]) is_cycle = 1;
        dfs(g[at][i]);  
    }
    //tim++;
    cur[at] = 0;
    el.pb(at);
    //cout << tim << " " <<at << endl;

}

void solve(){
    int n,m,a,b;
    cin >> n >> m;
    for1(m){
        cin >> a >> b;
        g[a].pb(b);
    }
    for(int i = n; i >=1;i--){
        tim = 0;
        if(!vis[i]) dfs(i);
    }
    reverse(all(el));
    //for(auto a: el) cout << a << endl;
    int fel = 0;
    if(is_cycle){
        cout << "Sandro fails.";
        return;
    }
    for(auto a: el){
        cout << a << " ";
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











