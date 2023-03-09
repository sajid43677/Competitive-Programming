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
    int n;
    cin >> n;
    string s;
    cin >> s;
    map <char,int> mp;
    mp['R'] = 0;
    mp['G'] = 0;
    mp['B'] = 0;
    int ans = 0;
    for(int i = 0; i < n;i++){
        mp[s[i]] = 1;
        mp[s[i+2]] += 3;
        mp[s[i+1]] += 2;
        if(mp['R'] == 4 || mp['G'] == 4 || mp['B'] == 4 || mp['R'] == 5 || mp['G'] == 5 || mp['B'] == 5){
           // __f("s[i],s[i+1],s[i+2]",s[i],s[i+1],s[i+2]);
            //mp.clear();
            mp['R'] = 0;
            mp['G'] = 0;
            mp['B'] = 0;
            continue;
        }
        if(mp.size() > 3){
            if(mp['R'] == 3 || mp['G'] == 3 || mp['B'] == 3){
                if(mp['R'] == 0){
                    s[i+1] = 'R';
                }
                else if(mp['G'] == 0){
                    s[i+1] = 'G';
                }
                else{
                    s[i+1] = 'B';
                }
                ans++;
            }
            mp.clear();
            mp['R'] = 0;
            mp['G'] = 0;
            mp['B'] = 0;
            continue;
        }
       //__f("s[i],s[i+1],s[i+2] in",s[i],s[i+1],s[i+2]);
        for(auto a: mp){
            if(a.second == 0){
               // __f("s[i],s[i+1],s[i+2] ans",s[i],s[i+1],s[i+2]);
                s[i+1] = a.first;
                ans++;
                break;
            }
        }
        mp['R'] = 0;
        mp['G'] = 0;
        mp['B'] = 0;
    }
    cout << ans << endl;
    cout << s << endl;
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











