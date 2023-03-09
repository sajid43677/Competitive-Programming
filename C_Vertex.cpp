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

vector <int> vc[105];
int visited[105];
int p[105];
int dist[105];

void bfs(int s,int n){
    for1(105) visited[i] = p[i] = dist[i] = 0;
    dist[s] = 0;
    queue <int> q;
    q.push(s);
    //visited[s] = 1;
    p[s] = s;
    int cnt = 0;
    while(!q.empty()){
        int mother = q.front();
        //cout <<endl << mother << endl;
        q.pop();
        for(int i = 0; i < vc[mother].size(); i++){
            if(visited[vc[mother][i]] == 0){
                int child = vc[mother][i];
                visited[child] = 1;
                q.push(child);
                cnt++;
                //cout << child << " ";
            }
        }
    }
    cout << n - cnt;
    for2(n){
        if(visited[i] == 0){
            cout << " "<< i;
        }
    }
    pendl;

   /*  if(visited[t] == 0){
        cout << "No path found" << pendl;
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
    int n;
    while(1){
        cin >> n;
        if(n == 0)break;
        for1(105) vc[i].clear();

        int st;
        while(1){
            cin >> st;
            if(st == 0) break;
            int a;
            while(1){
                cin >> a;
                if(a == 0) break;
                vc[st].push_back(a);
                //cout << st << " " << a << endl;
            }
        }
        int k;
        cin >> k;
        for1(k){
            int a;
            cin >>a;
            bfs(a,n);
        }
    }
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











