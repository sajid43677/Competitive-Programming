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
int cas = 1;
void solve(){
    int n,a,b;
    cin >> n;
    int mx = n+1;
    vector <int> vc[mx];
    int visited[mx] = {0};
    int w[mx];
    int dist[mx];
    for2(n){
        cin >> w[i];
    }
    for1(n-1){
        cin >> a >> b;
        vc[a].pb(b);
        vc[b].pb(a);
    } 
    ll maax = INT64_MIN;
    int ans = -1;
    for(int k = 1 ; k <=n;k++){
        
        ll tmp = 0;
        //cout << k << " " << tmp << endl;
        int s = k;
        for1(mx) visited[i] = dist[i] = 0;
        queue <int> q;
        q.push(s);
        visited[s] = 1;
        int cnt = 1;
        while(!q.empty()){
            int mother = q.front();
            //cout <<endl << mother << endl;
            q.pop();
            for(int i = 0; i < vc[mother].size(); i++){
                if(visited[vc[mother][i]] == 0){
                    int child = vc[mother][i];
                    dist[child] = dist[mother]++;
                    if(dist[child]%2 == 0)
                        tmp += (w[k] - w[child]);
                    else tmp -= (w[k] - w[child]);
                    //cout << k << " " << tmp << endl;
                    visited[child] = 1;
                    q.push(child);
                    //cout << child << " ";
                }
            }
        }
        //cout << k << " " << tmp << endl;
        if(maax < tmp){
            ans = k;
            maax = tmp;
        }
    }
    cout << "Case " << cas <<": " << ans << endl;
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











