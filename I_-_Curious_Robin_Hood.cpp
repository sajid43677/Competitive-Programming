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

#define mx 100009
ll arr[mx];
ll tree[mx * 3];
void init(ll node, ll b, ll e)
{
    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = tree[Left] + tree[Right];
}
ll query(ll node, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return 0; 
    if (b >= i && e <= j)
        return tree[node]; 
    ll Left = node * 2; 
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    ll p1 = query(Left, b, mid, i, j);
    ll p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2; 
}
void update(ll node, ll b, ll e, ll i)
{
    if (i > e || i < b)
        return; 
    if (b >= i && e <= i) { 
        tree[node] = arr[i];
        return;
    }
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    update(Left, b, mid, i);
    update(Right, mid + 1, e, i);
    tree[node] = tree[Left] + tree[Right];
}

int cas = 1;

void solve(){
    cout << "Case " << cas++ <<":" << endl;
    ll n,q,a,b,t;
    cin >> n >> q;
    for1(n) cin >> arr[i];
    init(1,0,n-1);
    for1(q){
        cin >> t;
        if(t == 1){
            cin >> a;
            cout << arr[a] << endl;
            arr[a] = 0;
            update(1,0,n-1,a);
            continue;
        }
        if(t == 2){
            cin >> a >> b;
            arr[a] += b;
            update(1,0,n-1,a);
            continue;
        }
        cin >> a >> b;
        cout << query(1, 0, n-1, a, b) << endl;
    }
    allZero(tree);
    allZero(arr);

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











