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
int n,m;
int x,y;
string arr[1000005];
vector<int> visited[1000005];
bool valid(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < m && arr[x][y] != '#';
}

int flg = 0;
void dfs(int xp,int yp,int dis){
   // __f("ffffffxp,yp,dist",xp,yp,dist[xp][yp]);
    visited[xp][yp] = dis;
    for1(4){
            int xc = xp + gx[i];
            int yc = yp + gy[i];
            if(!valid(xc,yc))continue;
            //__f("xp,yp,dist",xp,yp,dis);
            if(xc ==x && yc == y && visited[xp][yp] >= 4) flg = 1;
            if(visited[xc][yc]) continue;
            dfs(xc,yc,dis+1);
        }

}

void solve(){
    
    cin >> n >> m;
    char a;
    for1(n){
        cin >> arr[i];
        for(int j = 0; j < m;j++){
            visited[i].pb(0);
            if(arr[i][j] == 'S'){
                x = i;
                y = j;
            }
        }
        //pendl;
    }
    
    
    dfs(x,y,1);
    if(flg == 1) cout << "Yes" << endl;
    else cout << "No" << endl;

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











