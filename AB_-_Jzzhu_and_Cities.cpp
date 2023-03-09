#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

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

const int INF = 1000000000;
vector<vector<pair<int, int>>> adj;
 
void dijkstra(int s, vector<int> & d, vector<int> & p) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);
 
    d[s] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    while (!q.empty()) {
        int v = q.top().second;
        int d_v = q.top().first;
        q.pop();
        if (d_v != d[v])
            continue;
 
        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;
 
            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
                q.push({d[to], to});
            }
            if(d[v] + len == d[to]){
                p[to]=v;
            }
        }
    }
}
 
void solve()
{
    int n,m1,k,u,v,x;
    cin >> n >> m1 >> k;
    map<pii,int> m;
    for1(m1){
        cin >> v >> u >> x;
        if(m[{min(u,v),max(u,v)}]==0){m[{min(u,v),max(u,v)}]=x;continue;}
        m[{min(u,v),max(u,v)}]=min(x,m[{min(u,v),max(u,v)}]);
    }
    set<int> s;
    for1(k){
        cin >> v >> x;
        if(m[{1,v}]==0 || x<m[{1,v}]){s.insert(v);m[{1,v}]=x;}
    }
    adj.resize(n+1);
    for(auto x : m){
        adj[x.xx.xx].pb({x.xx.yy,x.yy});
        adj[x.xx.yy].pb({x.xx.xx,x.yy});
    }
    
    vector<int> d,p;
    dijkstra(1,d,p);
    d.clear();
    set<int> s1;
    for(int i = 2;i <n+1;i++){
        // cout<<p[i]<<" "<<i<<"\n";
        if(p[i]==1 && s.count(i))s1.insert(i);
        
    }
    cout<<k-s1.size()<<"\n";
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











