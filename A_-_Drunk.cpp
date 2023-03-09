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


const int mx = 1e5+5;
int cur[mx];
int is_cycle; 

void dfs(int at,const vector <vector<int>> &g,vector <int> &vis){
    if(vis[at]) return;
    vis[at] = 1;
    cur[at] = 1;
    for(int i = 0; i < g[at].size();i++){
        if(vis[g[at][i]] && cur[g[at][i]]) is_cycle = 1;
        dfs(g[at][i],g,vis);  
    }
    cur[at] = 0;
}

int cas = 1;

void solve(){
    is_cycle = 0;
    allZero(cur);
    int n,m;
    string a,b;
    cin >> m;
    if(n==0 && m==0)return;
    vector <vector<int>> g(10000+1);
    map <string,int> mp;
    vector <int> vis(10000+1);
    int cnt = 1,tmpa,tmpb;
    for1(m){
        cin >> a >> b;
        if(mp.find(a) == mp.end()){
            mp[a] = cnt++;
        }
        if(mp.find(b) == mp.end()){
            mp[b] = cnt++;
        }
        //cout << tmpa << " "<< tmpb << endl;
        tmpa = mp[a];
        tmpb = mp[b];
        g[tmpa].pb(tmpb);
    }
    //cin >>a>>b;
    for2(cnt){
        if(!vis[i]) dfs(i,g,vis);
    }
    //for(auto a: el) cout << a << endl;
    if(is_cycle){
        cout  << "Case " << cas++<< ": "<< "No"<<endl;
        return;
    }
    cout  << "Case " << cas++<< ": "<< "Yes"<<endl;

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











