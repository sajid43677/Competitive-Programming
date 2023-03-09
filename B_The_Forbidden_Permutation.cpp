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
    int n,m,d,a,b;
    cin >> n >> m >> d;
    int arr[n+1];
    map <int,int> mp;
    for2(n) {
        cin >> arr[i];
        mp[arr[i]] = i;
    }
    int arrm[m+1];
    int ans = 0;
    for2(m) cin >> arrm[i];
    for2(m-1){
        a = mp[arrm[i]];
        b = mp[arrm[i+1]];
        int x = a;
        int y = b;
        __f("arrm[i],arrm[i+1],a,b,cn1,cn2",arrm[i],arrm[i+1],a,b,b-a,a+d - b + 1);
        if(b <= a || a+d < b) continue;
        if(b-a <= a+d - b + 1 || - floor((a+d - b + 1)*1.0/2) + a < 1 || floor((a+d - b + 1)*1.0/2) + b > n ||  (- floor((a+d - b + 1)*1.0/2)-1 + a < 1 && floor((a+d - b + 1)*1.0/2)+1 + b > n)){                              
            a = b - a;
            b = x;
            __f("arr[b]",arr[b]);
            for(int j = 1; j <= a;j++){
                mp[arr[b]]++;
                mp[arr[b+j]]--;
                swap(arr[mp[arr[b]]],arr[mp[arr[b+j]]]);
            }
            
        }
        else{
            a = a+d -b + 1;
            int fst,snd;
            if(a > n - b){
                fst = x;
                snd = y;
                x = 1;
                 __f("arr[fst]",arr[fst]);
                for(int j = 1; j <= 1+a/2;j++){
                    mp[arr[fst]]--;
                    mp[arr[fst-x]]++;
                    x++;
                }
                x= 1;
                for(int j = 2+a/2; j <= n;j++){
                    mp[arr[snd]]++;
                    mp[arr[snd+x]]--;
                    x++;
                }
            }
            else{
                fst = y;
                snd = x;
                x = 1;
                for(int j = 1; j <= 1+a/2;j++){
                    mp[arr[fst]]++;
                    mp[arr[fst+x]]--;
                    x++;
                }
                x= 1;
                for(int j = 2+a/2; j <= n;j++){
                    mp[arr[snd]]--;
                    mp[arr[snd-x]]++;
                    x++;
                }
            }
            x = 1;
            y = 1;
            
        }
        ans += a;
        __f("ans",ans);
    }
    cout << ans << endl;

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











