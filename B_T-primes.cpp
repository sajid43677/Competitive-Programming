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
const int mx = 1000005;
ll is_prime[mx+1],siv[mx+1],cnt;
map <ll,ll> mp;
void sieve_prime(){
	long long int i, j;
    siv[0] = siv[1] = 1;
    for(i=4; i < mx;i+=2){
        siv[i] = 1;
    }
    for (i=3; i<mx; i+=2)
        if(!siv[i])
            for (j=i*i; j<mx; j+=i+i)
                siv[j]=1;
    is_prime[cnt++]=2;
    mp[4] = 1;
    for (i=3; i<mx; i+=2)
        if(!siv[i]) mp[i*i] = 1;
    return;
}

void solve(){
    sieve_prime();
    ll n,a;
    cin >> n;
    for1(n){
        cin >> a;
        if(mp.find(a) != mp.end()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
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











