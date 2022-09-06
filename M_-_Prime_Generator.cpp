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


void sieve_prime(int n,vector<ll>& prime){
	ll i, j;
    ll mx = n;
    ll siv[mx+1];
    allZero(siv);
    siv[0] = siv[1] = 1;
    for(i=4; i <= mx;i+=2){
        siv[i] = 1;
    }
    for (i=3; i<=mx; i+=2)
        if(!siv[i])
            for (j=i*i; j<=mx; j+=i+i)
                siv[j]=1;
    prime.pb(2);
    for (i=3; i<=mx; i+=2)
        if(!siv[i]) prime.pb(i);
    return;
}
void PrimeInRange(ll low, ll high) {
    if(low == 1)++low;
   ll lmt = sqrtl(high);
   vector<ll> prime;
   sieve_prime(lmt, prime);
   ll n = high - low + 1;
   bool mark[n + 1];
   memset(mark, false, sizeof(mark));
   //cout << prime.size() << endl;
   for(int i = 0; i < (int)prime.size() && prime[i] <= lmt; i++) {
        ll p = prime[i];
        //cout << p << " i: "<< i << endl;
        ll j = max(p*p,((low+p-1)/p)*p);
        for(; j <= high; j += p)
            mark[j - low] = true;
   }
   for (ll i = low; i <= high; i++)
      if (!mark[i - low])
         cout << i << endl;
}
void solve(){
    ll l,m;
    cin >> l >> m;
    PrimeInRange(l,m);
    cout << endl;
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











