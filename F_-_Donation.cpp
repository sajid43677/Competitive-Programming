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

const int mx = 200005;
ll parent[mx];
ll size[mx];



void make_set(ll v){
    parent[v] = v;
}

int find_set(ll v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

bool union_sets(ll a, ll b) {
    a = find_set(a);
    b = find_set(b);
    if(a!=b){
        parent[b] = a;
        return true;
    }
    return false;
}

int cas = 1;
void solve(){
    cout << "Case " << cas++ << ": ";
    int n,a,b,w;
    cin >> n;
    vector <tuple<ll,ll,ll>> tp;
    for2(n){
        for(int j = 1; j <= n;j++){
            cin >> a;
            if(a > 0) tp.pb({a,i,j});
        }
    }
    for2(n){
        make_set(i);
    }
    sort(all(tp));
    ll mx = 0;
    for1(tp.size()){
        tie(w,a,b) = tp[i];
        //cout << w << endl;
        if(find_set(a) != find_set(b)){
            //cout << w << endl;
            parent[find_set(b)] = find_set(a);
           //cout << w << endl;
        }
        else{
            mx += w;
        }
    }
    for2(n){
        if(find_set(1) != find_set(i)){
            cout << -1 << endl;
            return;
        }
    }
    cout << mx << endl;

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











