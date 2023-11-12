#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pi;
typedef vector<ll> vi;

//double pi = acos(-1.0);

#define xx first
#define yy second
#define all(x) x.begin(),x.end()
#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define reverseS string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb push_back
#define for1(n) for(int i = 0; i < n;i++)
#define for2(n) for(int i = 1; i <= n;i++)
#define fori(i,s,n) for(int i = s; i <= n;i++)
#define lohi int, vector<int>, greater<int>>
#define mkp make_pair
#define pendl cout << '\n' 
#define unqn(x) unique(all(x)) - x.begin() //number of unique element in x
#define unq(x) x.resize(distance(x.begin(),unique(all(x)))); //converting unique element vector

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



ll cas = 1;

void solve(){
    ll n,a,b;
    cout << "Case " << cas++ << ": ";
    cin >> a >> n;
    ll ajog = ((a)*(a-1))/2ll;
    ll amjog =  ((a-1)*(a-2))/2ll;
    ll cmn = ((a-3)*(a-2))/2ll;
    cmn *= 2;
    ll cmnp = ((a-2)*(a-1))/2ll;
    ll tot = ajog + amjog + cmn + cmnp;
    ll cc = a*(a-1);
    ll ans = tot*(n/cc);
    //cout << ans << endl;
    ll md = n%cc;
    //cout << md << endl;
    if(md > 0){
        
        ll ak = md/(a-1);
        ll amk = md/a;
        ll ta = a;
        //__f("md,ak,amk,ta",md,ak,amk,ta);
        if(ak == 0 && amk == 0){
            cout << ans << endl;
            return;
        }
        a--;
        
        
        ll akk = ((a*(a+1))/2.0) - (((a - ak)*(a-ak+1))/2.0);
        if(amk == 0){
            cout << ans + akk << endl;
            return;
        }
        ll amkk = (amk*(amk+1))/2;
        //__f("amkk,akk",amkk,akk);
        ak--;
        ll tp = ak;
        ll akkp = a*(tp*(tp+1)/2.0) - 2*(tp*(tp+1)*(tp+2)/6.0);
        //__f("akkp",akkp);
        ll amkkp = a * (amk*(amk-1)/2.0) - (amk*(amk-1)*(2*amk-1)) / 6.0;
       // __f("amkkp",amkkp);
        ak++;
        ll amm = 0,akmm = 0; 
        if(ak > amk){
            amm = md%(ta-1);
            amm = amm*(ta - ak);
        }
        else{
            amm = md%ta;
            amm = amm*ak;
        }
        
        //__f("akmm",akmm);
        ans += amkk + akk + akkp + amkkp + amm + akmm;
        //cout << ans << endl;
       //ans -= amkk + akk + akkp + amkkp + amm + akmm;
    }
    // __f("amkk,akk,akkp,amkkp,amm,akmm",amkk , akk , akkp , amkkp , amm , akmm);
    // a++;
    // for2(md){
    //     //__f("i,i%a,i%(a-1)",i,i%a,i%(a-1));
    //     ans += abs(i%a - i%(a-1));
    // }
    cout << ans << endl;

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











