#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

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

vector <int> vc[1000000];
int visited[1000000];
int p[1000000];
int dist[1000000];

void bfs(int s,int t){
    for1(1000000) visited[i] = p[i] = dist[i] = 0;
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
                dist[child] = dist[mother]+1;
                p[child] = mother;
                visited[child] = 1;
                q.push(child);
                //cout << child << " ";
            }
        }
    }
    /* if(visited[t] == 0){
        cout << "No path found" << endl;
    } */
    //vector <int> ans;
    //ans.pb(t);
    /* int curr = t;
    int cnt=0;
    while(curr !=s){
        //ans.pb(p[curr]);
        curr = p[curr];
        cnt++;
    } */
    /* reverse(ans.begin(),ans.end());
    for(auto c : ans){
        cout << c << " ";
    } */
    cout << dist[t] - 1 << endl;
}

void solve(){
    int n,m,a,b;
    cin >>n>> m;
    for1(m){
        cin >> a >> b;
        vc[a].pb(b);
        vc[b].pb(a);
    }
    bfs(1,n);
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











