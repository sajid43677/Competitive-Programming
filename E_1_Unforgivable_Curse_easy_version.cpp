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

vector <int> vc[200005];
int visited[200005];
int visited1[200005];
int n;
string s,t;
int ans;
int cnt = 0;
void fun(int pos,int curr){
    if(pos >= n){
        cnt = 1;
        return ;
    }
    if(visited[curr] == 1 && visited1[pos] == 1) return;
    visited[curr] = 1;
    //if(visited[curr] == 1) return 0;
    cout << s[curr] << " " << t[pos] <<" "<<visited[curr] << endl;
    if(s[curr] == t[pos] ){
        //cout << s[curr] << " " << t[pos] << endl;
        visited1[pos] = 1;
        fun(pos+1,pos+1);
    }
    for(auto a: vc[curr]){
        fun(pos,a); 
    }
    return ;
}

void solve(){
    cout << "tt" << endl;
    cnt = 0;
    int k;
    cin >> n >> k;
    cin >> s >> t;
    allZero(visited);
    allZero(visited1);
    for1(n){
        if(i+k < n){
            vc[i].pb(i+k);
            vc[i+k].pb(i);
        }
        if(i+k+1 < n){
            vc[i].pb(i+k+1);
            vc[i+k+1].pb(i);
        }
    }
    fun(0,0);
    if(cnt == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    for1(200005){
        vc[i].clear();
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











