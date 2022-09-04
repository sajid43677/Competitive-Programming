#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pi;

//double pi = acos(-1.0);

#define xx first
#define yy second
#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define reverseS string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb(x) push_back(x);
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

typedef pair<ll, ll> pll;
const int N = (10e4)+10;

vector <pair<ll,ll>> g[N];
vector <pair<ll,ll>> gr[N];
ll w[N] = {0};
int visited[N];
ll pre[N] = {0};

void dijkstra(int s,int n){
    for1(N){
        w[i] = INT64_MAX;
    }
    deque<ll> pq;
    w[s] = 0;
    pq.pb(s);
    while(!pq.empty()){
        ll v = pq.front();
        pq.pop_front();
        //if(w[v] != wv) continue;
        for(auto ch: g[v]){
            ll chv = ch.xx;
            ll wt = ch.yy;
            if(w[v] + wt < w[chv]){
                w[chv] = w[v] + wt;
                if(wt == 1) pq.push_back(chv);
                else pq.push_front(chv);
            }
        }
    }
    ll ans = w[n];
    for1(N){
        w[i] = INT64_MAX;
    }
    pq.clear();
    w[s] = 0;
     pq.pb(s);
    while(!pq.empty()){
        ll v = pq.front();
        pq.pop_front();
        //if(w[v] != wv) continue;
        for(auto ch: gr[v]){
            ll chv = ch.xx;
            ll wt = ch.yy;
            if(w[v] + wt < w[chv]){
                w[chv] = w[v] + wt;
                if(wt == 1) pq.push_back(chv);
                else pq.push_front(chv);
            }
        }
    }
    cout << min(w[n],ans) << endl;
}

void solve(){
    ll n,m,a,b;
    cin >> n >> m;
    for1(m){
        cin >> a >> b;
        if(a==b) continue;
        g[a].pb(mkp(b,0));
        g[b].pb(mkp(a,1));
        gr[a].pb(mkp(b,1));
        gr[b].pb(mkp(a,0));
    }
    cin >> a >> b;
    dijkstra(a,b);

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











