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
typedef pair<ll, ll> pll;
const int N = (1e5)+10;

vector <pair<ll,ll>> g[N];
ll w[N] = {0};
int visited[N];

void dijkstra(int s,int n){
    for1(N){
        w[i] = INT64_MAX;
    }
    priority_queue<pll, vector<pll>, greater<pll> > pq;
    vector <ll> loc(N+1,-1);
    w[s] = 0;
    loc[s] = 0;
    pq.push({0,s});
    while(!pq.empty()){
        pll node = pq.top();
        ll v = node.second;
        ll wv = node.first;
        //__f("v,wv",v,wv);
        pq.pop();
        if(w[v] < wv) continue;
        for(auto ch: g[v]){
            if(ch.second + wv < w[ch.first]){
                w[ch.first] = ch.second + wv;
                loc[ch.first] = v;
                pq.push({w[ch.first],ch.first});
            }
        }
    }
    /* for(int i = 1; i <= n;i++){
        cout << w[i] << endl;
    }  */
   /*  int tmp = loc[n];
    vector <ll> ans;
    ans.pb(n);
    //cout << tmp << endl;
    while(tmp != 0){
        //cout << tmp << endl;
        if(tmp == -1){
           cout << -1 << endl;
           return; 
        } 
        ans.pb(tmp);
        tmp = loc[tmp];
    }
    reverse(ans.begin(),ans.end());
    for(auto a: ans){
        cout << a << " ";
    } */
}

ll cas = 1;
void solve(){
    int n,m;
    cin >> n >> m;
    for1(n) g[i].clear();
    for1(m){
        int a,b,wt;
        cin >> a >> b >> wt;
        if(a==b)continue;
        g[a].pb(mkp(b,wt));
        g[b].pb(mkp(a,wt));
    }
    /* for(auto a: g){
        for(auto b: a){
            cout << b.first << " " << b.second << " | ";
        }
        cout << endl;
    } */
    dijkstra(1,n);

    cout << "Case " << cas++ << ": ";
    if(w[n] == INT64_MAX) cout << "Impossible" << endl;
    else cout << w[n] << endl;

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











