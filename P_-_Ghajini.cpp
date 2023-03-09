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

#define mx 200009
ll arr[mx];
ll tree[mx * 3];
ll tree1[mx * 3];
void init(ll node, ll b, ll e)
{
    if (b == e) {
        tree[node] = arr[b];
        //__f("tree[node]",tree[node]);
        return;
    }
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = min(tree[Left],tree[Right]);
}
ll query(ll node, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return INT64_MAX; 
    if (b >= i && e <= j){
        //__f("tree[node],node",tree[node],node);
        return tree[node]; }
    ll Left = node * 2; 
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    ll p1 = query(Left, b, mid, i, j);
    ll p2 = query(Right, mid + 1, e, i, j);
    //__f("p1,p2,left,right",p1,p2,left,right);
    return min(p1,p2); 
}

void init1(ll node, ll b, ll e)
{
    if (b == e) {
        tree1[node] = arr[b];
        //__f("tree1[node],node",tree1[node],node);
        return;
    }
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    init1(Left, b, mid);
    init1(Right, mid + 1, e);
    //__f("tree1[Left],tree1[Right]",tree1[Left],tree1[Right]);
    tree1[node] = max(tree1[Left],tree1[Right]);
}
ll query1(ll node, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return 0; 
    if (b >= i && e <= j){
       // __f("tree1[node]",tree1[node]);
        return tree1[node]; }
    ll Left = node * 2; 
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    ll p1 = query1(Left, b, mid, i, j);
    ll p2 = query1(Right, mid + 1, e, i, j);
    //__f("p1,p2,left,right",p1,p2,left,right);
    return max(p1,p2); 
}

int cas = 1;

void solve(){
    cout << "Case " << cas++ << ": ";
    ll n,d,a = 0,b,ma=0,mn=0;
    cin >> n >> d;
    for2(n) cin >> arr[i];
    init(1,1,n);
    init1(1,1,n);
    //__f("n,d",n,d);
    for(int i = 1; i < n-d+1;i++){
        mn = query(1,1,n,i,i+d-1);
        ma = query1(1,1,n,i,i+d-1);
        //__f("ma,mn",ma,mn);
        a = max(a,ma-mn);
    }
    cout << a << endl;
    allZero(tree);
    allZero(tree1);
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











