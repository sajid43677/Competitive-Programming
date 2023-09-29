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
    ll n,q;
    cin >> n >> q;
    map <ll,ll> mp;
    set <ll> st;
    vi vc(n+1);
    for2(n){
        cin >> vc[i];
        if(vc[i] == 0) continue;
        if(mp.find(vc[i]) == mp.end()){
            st.insert(vc[i]);
            mp[vc[i]] = 1;
        }
        else{
            mp[vc[i]]++;
        }

    }

    for1(q){
        ll a;
        cin >> a;
        if(a == 1){
            ll b,c;
            cin >> b >> c;
            if(vc[b] != 0)mp[vc[b]]--;
            if(vc[b] != 0 && mp[vc[b]] == 0){
                st.erase(vc[b]);
            }
            if(c == 0){
                vc[b] = c;
                continue;
            }
             //__f("c,stz",c,st.size());
            //__f("mp[c]",mp[c]);
            if(mp.find(c) == mp.end() || mp[c] == 0){
                mp[c] = 1;
                st.insert(c);
            }
            else{
                mp[c]++;
            }
            //__f("c,stz,mp[c]",c,st.size(),mp[c]);
            vc[b] = c;
        }
        else{
            cout << st.size() << endl;
        }
    }
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











