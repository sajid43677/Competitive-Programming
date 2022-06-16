#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

//double pi = acos(-1.0);

#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define reverseS string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb(x) push_back(x);
#define for1(n) for(int i = 0; i < n;i++)

ll mod = 1000000007;

ll exp(ll x, ll n, ll mod)
{
    if(n==0) return 1;
    if(n==1) return x;
    if(n%2==0) return exp((x*x)%mod,n/2,mod);
    else return (x*exp((x*x)%mod,n/2,mod))%mod;
}

ll sod(ll n){
    ll sum = 0;
    for(ll i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
            if(n/i == i) sum += i;
            else sum = sum + i + n/i;
        }
    }
    return sum;
}
int cas = 1;
void solve(){
    ll n,m,p;
    cin >> n >> m;
    p = exp(n,m,mod)%mod;
    p = sod(p)%mod;
    cout << "Case " << cas << ": " << p << endl;
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











