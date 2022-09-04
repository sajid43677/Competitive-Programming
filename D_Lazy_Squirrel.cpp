#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pi;

//double pi = acos(-1.0);

#define xx first
#define yy second
#define allZero(a) memset(a,'0',sizeof(a));
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
//const int mx = 1e6+5;
/* vector <int> vc[mx];
int visited[mx];
char ch[mx];
 */
int checkPalindrome(string str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}

/* int bfs(int s,int t){
    for1(mx) visited[i] = 0;
    queue <int> q;
    q.push(s);
    visited[s] = 1;
    string ss = {""};
    int cnt = 1;
    while(!q.empty()){
        int mother = q.front();
        ss.pb(ch[mother]);
        //cout <<endl << mother << endl;
        q.pop();
        for(int i = 0; i < vc[mother].size(); i++){
            if(visited[vc[mother][i]] == 0){
                int child = vc[mother][i];
                visited[child] = 1;
                ss.pb(ch[child]);
                cout << ss << endl;
                if(checkPalindrome(ss)){
                    cout << ss << " pal" << endl;
                    cnt++;
                }
                ss.pop_back();
                q.push(child);
                //cout << child << " ";
            }
        }
    }
    return cnt;
} */

int cas = 1;
void solve(){
    int n,a,b;
    cin >> n;
    int mx = n+1;
    vector <int> vc[mx];
    int visited[mx] = {0};
    char ch[mx];
    for2(n){
        cin >> ch[i];
    }
    for1(n-1){
        cin >> a >> b;
        vc[a].pb(b);
        //vc[b].pb(a);
    } 
    int ans;
        int s = 1;
        for1(mx) visited[i] = 0;
        queue <int> q;
        q.push(s);
        visited[s] = 1;
        string ss = {""};
        int cnt = 1;
        while(!q.empty()){
            int mother = q.front();
            ss.pb(ch[mother]);
            //cout <<endl << mother << endl;
            q.pop();
            for(int i = 0; i < vc[mother].size(); i++){
                if(visited[vc[mother][i]] == 0){
                    int child = vc[mother][i];
                    visited[child] = 1;
                    ss.pb(ch[child]);
                    //cout << ss << endl;
                    if(checkPalindrome(ss)){
                        //cout << ss << " pal" << endl;
                        cnt++;
                    }
                    ss.pop_back();
                    q.push(child);
                    //cout << child << " ";
                }
            }
        }
        ans = cnt;
    cout << "Case " << cas <<": " << ans <<"/"<<n << endl;
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











