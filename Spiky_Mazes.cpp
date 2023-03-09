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

char arr[45][45];
int visited[45][45];
int p[45][45];
int n,m,k;

bool isvalid(int x,int y){
    if(x >= n || x < 0 || y >= m || y < 0 || arr[x][y] == '#' ){
        return false;
    }
    return true;
}

void bfs(int x,int y){
    for1(45) for(int j = 0; j < 45;j++) visited[i][j] = p[i][j] = 0;
    p[x][y] = 0;
    queue <int> q;
    //auto a = {x,y};
    q.push(x);
    q.push(y);
    visited[x][y] = 1;
    while(!q.empty()){
        int ux = q.front();
        q.pop();
        int uy = q.front();
        q.pop();
        for(int i = 0; i < 4;i++){
            int vx = gx[i] + ux;
            int vy = gy[i] + uy;
            if(!isvalid(vx,vy)){
                continue;
            }
            if(visited[vx][vy] == 1){
                continue;
            }
            if(arr[vx][vy] == 's' && p[ux][uy] + 1 > k){
                continue;
            }
            //__f("p[ux][uy],vx,vy,ux,uy",p[ux][uy],vx,vy,ux,uy);
            if(arr[vx][vy] == 'x'){
                //__f("p[ux][uy],vx,vy,ux,uy",p[ux][uy],vx,vy,ux,uy);
                cout << "SUCCESS" << endl;
                return;
            }
            visited[vx][vy] = 1;
            if(arr[vx][vy] == 's'){ p[vx][vy] = p[ux][uy] + 1;}
            else p[vx][vy] = p[ux][uy];
            q.push(vx);
            q.push(vy);
        }

    }
    cout << "IMPOSSIBLE" << endl;
    /* vector <int> ans;
    ans.pb(t);
    int curr = t;
    while(curr !=s){
        ans.pb(p[curr]);
        curr = p[curr];
    }
    reverse(ans.begin(),ans.end());
    for(auto c : ans){
        cout << c << " ";
    } */
}

void solve(){
    char ax,ay;
    cin >> n >> m >> k;
    k = k/2;
    for1(n){
        for(int j = 0; j < m;j++){
            cin >> arr[i][j];
            if(arr[i][j] == '@'){
                ax = i;
                ay = j;
            }
        }
    }
    bfs(ax,ay);
}

//FuzzyCarnage
int main()
{
    //Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--)  */
        solve();
    

}











