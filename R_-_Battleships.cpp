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
char g[101][101];
int n;
int flg;
int cn;

int down(int i,int j){
    if(g[i][j] != 'x' && g[i][j] != '@' || i >= n){
        return i;
    }
    cn++;
    //cout << g[i][j] << endl;
    if(g[i][j] == 'x') flg = 1;
    g[i][j] = '-';
    down(i+1,j);
    return i;
}

int right(int i,int j){
    if(g[i][j] != 'x' && g[i][j] != '@' || j >= n){
        return j;
    }
    cn++;
    if(g[i][j] == 'x') flg = 1;
    g[i][j] = '-';
    right(i,j+1);
    return j;
}

int cas = 1;

void solve(){
    cin >> n;
    for1(n){
        for(int j =0; j< n;j++){
            cin >> g[i][j];
        }
    }
    int cnt = 0;
    int shp = 0;
    
    for1(n){
        for(int j =0; j< n;j++){
            flg = 0;
            cn = 0;
            if(g[i][j] == 'x' && (g[i+1][j] != 'x' && g[i+1][j] != '@') && (g[i][j+1] != 'x' && g[i][j+1] != '@') ){
                shp++;
                g[i][j] = '-';
                continue;
            }
            if((g[i+1][j] == 'x' || g[i+1][j] == '@') && i+1 <= n)
                cnt = down(i,j);
           // cout << cnt << endl;
            if(cn > 0){
                if(flg == 1) shp++;
                continue;
            }
            if((g[i][j+1] == 'x' || g[i][j+1] == '@')&& i+1 <= n)
                cnt = right(i,j);
            if(cn > 0){
                if(flg == 1) shp++;
            }
        }
    }
    cout << "Case " << cas << ": " << shp << endl;
    cas++;
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











