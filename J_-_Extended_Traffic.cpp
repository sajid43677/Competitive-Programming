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
const int N = (1e3)+10;

struct tiple{
    int u,v,w;
};

vector <tiple> g;
int w[N];
int visited[N];

void bellman(int s,int n,int m){
    for1(n+1){
        w[i] = INT32_MAX;
    }
    w[s] = 0;
    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 0; j < g.size(); j++ ) {
            int uu = g[j].u;
            int vv = g[j].v;
            int ww = g[j].w;

            if ( w[uu] < INT32_MAX ) {
                if ( w[uu] + ww < w[vv] ) {
                    w[vv] = max(INT32_MIN, w[uu] + ww);
                }
            }
        }
    }
}

ll cas = 1;
void solve(){
    int n,m;
    cin >> n;
    int c[n+1];
    for2(n) cin >> c[i];
    g.clear();
    cin >> m;
    for1(m){
        int a,b,wt;
        cin >> a >> b;
        if(a==b)continue;
        wt = (c[b] - c[a]);
        g.pb({a,b,wt*wt*wt});
    }
    /* for(auto a: g){
        for(auto b: a){
            cout << b.first << " " << b.second << " | ";
        }
        cout << endl;
    } */
    bellman(1,n,m);

    int p,a;
    cin >> p;
    cout << "Case " << cas++ << ": " << endl;
    for1(p){
        cin >> a;
        if(w[a] < 3 || w[a] == INT32_MAX) cout << "?" << endl;
        else cout << w[a] << endl;
    }
}
//FuzzyCarnage
int main()
{
    //Boost;
    //Read;Write;
    int t;
    cin >> t;
    while(t--) 
        solve();
    

}











