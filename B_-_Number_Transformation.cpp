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

#define MAXN   1010
vector <int> vc[MAXN];
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 
// function to find sum of prime
// divisors of N
vector <int> SumOfPrimeDivisors(int n)
{
    int sum = 0;
    vector <int> ret; 
    int root_n = (int)sqrt(n); 
    for (int i = 2; i <= root_n; i++) {
        if (n % i == 0) {
            if (i == n / i && isPrime(i)) {
                ret.pb(i);
            }
            else {
                if (isPrime(i)) {
                    ret.pb(i);
                }
                if (isPrime(n / i)) {
                    ret.pb(n / i);
                }
            }
        }
    }
    return ret;
}

int visited[10100];
int p[10100];
int dist[10100];

void bfs(int s,int t){
    for1(10100) visited[i] = p[i] = dist[i] = INT32_MAX;
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
            int child = vc[mother][i] + mother;
            if(child == t){
                dist[child] = dist[mother] + 1;
                cout << dist[child] << endl;
                return;
            }
            if(child < t && dist[child] > dist[mother] + 1){
               // __f("child,mother",child,mother);
                dist[child] = dist[mother] + 1;
                p[child] = mother;
                visited[child] = 1;
                q.push(child);
            }
        }
    }
    if(dist[t] != INT32_MAX) cout << dist[t] << endl;
    else cout << -1 << endl;
}
 int cas = 1;
void solve(){
    int n,m;
    cin >> n >> m;
    cout << "Case " << cas++ << ": ";
    for(auto a: vc[2]) cout << a << endl;
    bfs(n,m);

}

//FuzzyCarnage
int main()
{
    //Boost;
    for2(1002){
        vc[i] = SumOfPrimeDivisors(i);
    }
    //Read;Write;
    int t;
    cin >> t;
    while(t--) 
        solve();
    

}











