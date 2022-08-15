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

void solve(){
    int n,c,x,y;
    ll now,mx = -1;
    char a;
    cin >> n;
    vector <vector<int>> vc(n,vector<int>(n));
    for1(n){
        for(int j = 0; j < n; j++){
            cin >> a;
            c = a - '0';
                vc[i][j] = c;
        }
    }
    /* for(auto v: vc){
        for(auto c: v){
            cout << c;
        }
        pendl;
    } */
    for1(n){
        for(int j = 0;j <n;j++){
            for(int k = 0; k < 8;k++){
                now = 0;
                x = i;
                y = j;
                for(int l = 0;l < n;l++){
                    now *= 10;
                    now += vc[x][y];
                    x += gx[k];
                    y += gy[k];
                    x %= n;
                    y %= n;
                    x += n;
                    y += n;
                    x%=n;
                    y%=n;
                    //cout << "now: " << now << " "<< x << " " << y << endl;
                }
                mx = max(mx,now);
                
            }
        }
    }
    cout << mx << endl;
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











