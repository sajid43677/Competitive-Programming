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



void solve(){
    ll n;
    cin >> n;
    ll arr[n];
    ll sum = 0;
    for1(n){
        cin >> arr[i];
        sum += arr[i];
    }
    ll dp[sum+1];
    for1(sum+1) dp[i] = 0;
    dp[0] = 1;
    for1(n){
        for(int j = sum; j >= arr[i];j--){
            dp[j] = max(dp[j],dp[j-arr[i]]);
        }
    }
    ll cnt = 0;
    for2(sum){
        if(dp[i] == 1){
            cnt++;
        }
    }
    cout << cnt << endl;
    for2(sum){
        if(dp[i] == 1){
            cout << i << " ";
        }
    }
    pendl;
}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    // int t;
    // cin >> t;
    // while(t--) 
         solve();
    

}











