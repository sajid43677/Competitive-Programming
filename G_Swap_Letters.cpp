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
    string s1,s2;
    cin >> s1 >> s2;
    vi vc1,vc2;
    for1(s1.size()){
        if(s1[i] == s2[i]) continue;
        if(s1[i] == 'a') vc1.pb(i+1);
        if(s1[i] == 'b') vc2.pb(i+1);
    }
    ll diff = abs(vc1.size() - vc2.size());
    if(vc1.size() != vc2.size() && diff%2 == 1){
        cout << -1 << endl;
        return;
    }
    ll tot = (vc1.size()+1)/2 + (vc2.size()+1)/2;
    cout << tot << endl;
    for(int i = 1; i < vc1.size();i += 2){
        cout << vc1[i-1] << " " << vc1[i] << endl; 
    }
    //cout << "aa" << endl;
    for(int i = 1; i < vc2.size();i += 2){
        cout << vc2[i-1] << " " << vc2[i] << endl; 
    }
    //cout << "aa" << endl;
    if(vc1.size()%2==1){
        ll tmp = vc1.size()-1;
        ll tmp1 = vc2.size()-1;
        cout << vc1[tmp] << " " << vc1[tmp] << endl;
        cout << vc1[tmp] << " " << vc2[tmp1] << endl;
    }

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










