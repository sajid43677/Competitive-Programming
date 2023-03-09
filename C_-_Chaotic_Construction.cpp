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
    int n,q;
    cin >> n >> q;
    char c;
    int a,b;
    set <int> st;
    for1(q){
        cin >> c;
        if(c=='?'){
            cin >> a >> b;
            if(a>b){
                swap(a,b);
            }
            if(st.find(a) != st.end() || st.find(b) != st.end()){
                cout << "impossible" << endl;
                continue;
            }
            if(!st.empty()){
                if(st.upper_bound(a) != st.end()){
                    if(*st.upper_bound(a) < b){
                        if(st.upper_bound(b) != st.end()){
                            cout << "impossible" << endl;
                            continue;
                        }
                        else{
                            if(st.upper_bound(1) != st.end()){
                                if(*st.upper_bound(1) < a){
                                    cout << "impossible" << endl;
                                    continue;
                                }
                            }
                        }
                    }
                }
            }
            cout << "possible" << endl;
        }
        else{
            if(c=='-'){
                cin >> a;
                st.insert(a);
            }
            if(c=='+'){
                cin >> a;
                st.erase(a);
            }
        }
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











