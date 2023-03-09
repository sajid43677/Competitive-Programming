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

const int mx = 300005;
int k,d;
vector <pi> vc[mx];
int visited[mx];
int p[mx];
int dist[mx];
int ps[mx];
vector <int> vcc;
 //vector <int> abn;

void bfs(){
    for1(mx) visited[i] = p[i] = dist[i] = 0;
    queue <int> q;
    for1(k) {q.push(ps[i]);visited[ps[i]] = 1;}
    //cout << q.size() << endl;
    while(!q.empty()){
        int mother = q.front();
        //cout <<endl << mother << endl;
        q.pop();
        //visited[mother] = 1;
        //cout << dist[mother] << " ";
        /* if(dist[mother]>=d){
            return;
        } */
        for(int i = 0; i < vc[mother].size(); i++){
            
            if(visited[vc[mother][i].xx] == 0){
                int child = vc[mother][i].xx;
                dist[child] = dist[mother]+1;
                //p[child] = mother;
                visited[child] = 1;
                q.push(child);
                //cout << child << " ";
                vcc.pb(vc[mother][i].yy);
                //__f("mother,child in",mother,child);
            }
            /* else if(visited[vc[mother][i].xx] == 1){
                abn.pb(vc[mother][i].yy);
                __f("mother,child",mother,vc[mother][i].xx);
                visited[vc[mother][i].xx] = 2;
            } */
        }
    }
    /* if(visited[t] == 0){
        cout << "No path found" << endl;
    }
    vector <int> ans;
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
    int n,a,b;
    cin >> n >> k >> d;
    for1(k) cin >> ps[i];
    for1(n-1){
        cin >> a >> b;
        vc[a].pb({b,i+1});
        vc[b].pb({a,i+1});
        //st.insert(i+1);
    }
    bfs();
    sort(all(vcc));
    vector <int> ans;
    int curr = 1;
    if(vcc[0] != 1){
        ans.pb(1);
    }
    //for(auto a : vcc) cout << a << " ";pendl;
    for1((int)vcc.size() - 1){
        if(vcc[i+1] - vcc[i] > 1){
            int tmp = vcc[i]+1;
            //__f("tmp,vcc[i+1]",tmp,vcc[i+1]);
            while(tmp < vcc[i+1] ){ans.pb(tmp);tmp++;}
        }
    }
    if(vcc[(int)vcc.size()-1] < n-1){
        int tmp = vcc[vcc.size()-1] +1;
        while(tmp < n){
            ans.pb(tmp);tmp++;
        }
    }
    cout << ans.size() << endl;
    for(auto a : ans) cout << a << " ";
    pendl;

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











