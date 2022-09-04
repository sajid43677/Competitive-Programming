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
const int maax = 2005;

vector <int> vc[maax];
int visited[maax];
int p[maax];
int dist[maax];

int bfs(int s,int t){
    for1(maax) visited[i] = p[i] = dist[i] = 0;
    dist[s] = 0;
    queue <int> q;
    q.push(s);
    visited[s] = 1;
    p[s] = s;
   
    while(!q.empty()){
        int mother = q.front();
        //cout <<endl << mother << endl;
        q.pop();
        for(int i = 0; i < vc[mother].size(); i++){
            if(visited[vc[mother][i]] == 0){
                int child = vc[mother][i];
                if(child == t) return 1;
                dist[child] = dist[mother]++;
                p[child] = mother;
                visited[child] = 1;
                q.push(child);
                //cout << child << " ";
            }
        }
    }
    if(visited[t] == 0){
        return 0;
    }
    else  return 1;

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
    int n,m;
    while(cin >> n >> m){
        for1(maax){
            vc[i].clear();
        }
        if(n==0 && m == 0) break;
        int w,v,p;
        for1(m){
            cin >> w >> v >> p;
            vc[w].pb(v);
            if(p == 2) vc[v].pb(w);
        }
        int flg = 0;
        for2(n-1){
            for(int j = i+1;j <=n;j++){
                if(bfs(i,j) && bfs(j,i)) continue;
                flg = 1;
                break;
            }
            if(flg == 1) break;
        }
        if(flg == 1) cout << 0 << endl;
        else cout << 1 << endl; 
    }
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











