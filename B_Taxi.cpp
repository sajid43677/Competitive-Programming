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
    int n,a;
    cin >> n;
    int curr = 0;
    int ans = 0;
    int s[5] = {0};
    for1(n){
        cin >> a;
        s[a]++;
    }
    ans = s[4];
    s[4] = 0;
    ans += s[2]/2;
    s[2] = s[2] % 2;
    ans += s[3];
    if(s[1] >= s[3])s[1] -= s[3];
    else s[1] = 0;
    s[3] = 0;
    if(s[2] > 0){
        if(s[1] > 0){
            if(s[1] >= s[2]*2){
                ans += s[2];
                s[1] -= s[2]*2;
                s[2] = 0;
            }
            else{
                ans += (s[1]/2);
                s[2] -= s[1]/2;
                s[1] = s[1]%2; 
            }
        }
    }
    //__f("s[1],s[2]",s[1],s[2]);
    if(s[1] == 1 && s[2] == 1) {ans++;s[1] = 0;s[2] =0;}
    if(s[1] > 0){
        ans += ceil(s[1]*1.0/4);
    }
    if(s[2] > 0){
        ans += s[2];
    }
    
    
    cout << ans << endl;
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











