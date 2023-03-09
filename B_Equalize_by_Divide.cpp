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



void solve(){
    int n;
    cin >> n;
    int lim = 30*n;
    vector <pi> vc(n);
    for1(n){ cin >> vc[i].xx;vc[i].yy = i+1;}
    sort(all(vc),greater<>());
    vector <pi> ans;
    while(lim){
        while(vc[0].xx > vc[n-1].xx){vc[0].xx = ceil(vc[0].xx*1.0/vc[n-1].xx);ans.pb({vc[0].yy,vc[n-1].yy});lim--;if(lim <= 0)break;}
        for2(n-1){
            while(vc[i].xx > vc[i-1].xx){vc[i].xx = ceil(vc[i].xx*1.0/vc[i-1].xx);ans.pb({vc[i].yy,vc[i-1].yy});lim--;if(lim <= 0)break;}
        }
        int flg = 0;
        for1(n-1){
           // cout << vc[i].xx << " " <<vc[i].yy << endl;
            if(vc[i].xx != vc[i+1].xx){
                flg = 1;
                break;
            }
        }
       // cout << vc[n-1].xx << " " <<vc[n-1].yy << endl;
       // pendl;
        if(flg == 0){
            cout << 30*n - lim << endl;
            for(auto a:ans){
                cout << a.xx << " "<<a.yy << endl;
            }
            return;
        } 
        sort(all(vc),greater<>());  
    }
    cout << -1 << endl;
}

//FuzzyCarnage
int main()
{
    //Boost;
    //Read;Write;
    int t;
    cin >> t;
    while(t--) 
        solve();
    

}











