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
int curr = 0; 
int vis[mx];
int col[mx];
vector <int> comp(mx);
stack <int> st;
int mark = 0;
void dfs(int at,const vector <vector<int>> &g){
    if(vis[at]) return;
    vis[at] = 1;
    for(int i = 0; i < g[at].size();i++){
        //if(vis[g[at][i]] && cur[g[at][i]]) is_cycle = 1;
        //comp[curr].insert(g[at][i]);
        //cout << 1 << " " <<g[at][i] << endl;
        dfs(g[at][i],g);  
    }
    //cout << tim << " " <<at << endl;
    st.push(at);
}

void dfs2(int at,const vector <vector<int>> &gr){
    if(col[at]) return;
    col[at] = 1;
    comp[at] = mark;
    //cout << at << endl;
    for(int i = 0; i < gr[at].size();i++){
        //if(vis[g[at][i]] && cur[g[at][i]]) is_cycle = 1;
        //comp[curr].insert(g[at][i]);
        //cout << 1 << " " <<gr[at][i] << endl;
        //cout << col[gr[at][i]] << endl;
        dfs2(gr[at][i],gr);  
    }
    
   //st.push(at);
}

void solve(){
    int n,m,a,b;
    cin >> n >> m;
    vector <vector<int>> g(n+1);
    vector <vector<int>> gr(n+1);
    for1(m){
        cin >> a >> b;
        g[a].pb(b);
        gr[b].pb(a);
    }
    for2(n){
        if(!vis[i]){
            dfs(1,g);
        }
    }
    while(!st.empty()){
        int u = st.top();
        st.pop();
        if(!col[u]){
            mark++;
            dfs2(u,gr);
        }
    }
    cout << mark << endl;
    for2(n){
        cout << comp[i] << " ";
    }

    //for(auto a: el) cout << a << endl;

}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--)  */
        solve();
    

}











