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
const ll mx = 10000005;
ll siv[mx+1];
ll mark[mx+1];
vector <pair<ll,ll>> mrk;
vector <ll> prime;
//vector <ll> mrks(mx);
void sieve_prime(){
	ll i, j;
    
    siv[0] = siv[1] = 1;
    for(i=4; i <= mx;i+=2){
        siv[i] = 1;
    }
    for (i=3; i<=mx; i+=2)
        if(!siv[i])
            for (j=i*i; j<=mx; j+=i+i)
                siv[j]=1;
    prime.pb(2);
    for(i = 1; i*i <= mx;i++){
        for(j = 1; j*j*j*j <= mx;j++){
            ll x = i*i + j*j*j*j;
            if(x > mx) break;
            if(!siv[x]) mark[x] = 1;
        }
    }
    for(i = 1; i <= mx;i++){
        mark[i] = mark[i-1] + mark[i];
    }
    return;
}
void solve(){
    ll n;
    cin >> n;
    cout << mark[n] << endl;
}

//FuzzyCarnage
int main()
{
    sieve_prime();
    Boost;
    //Read;Write;
    int t;
    cin >> t;
    while(t--) 
        solve();
    

}











