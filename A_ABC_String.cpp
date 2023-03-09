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
    string s;
    cin >> s;
    int n = s.size();
    map <char,int> mp;
    mp['A'] = 0; 
    mp['B'] = 0; 
    mp['C'] = 0;
    mp[s[0]] = 1;
    char tmp = s[0];
    char tmp1 = s[n-1];
    if(tmp == tmp1) {
        cout << "NO" << endl;
        return;
    }
    int cnt = 1;
    int cnt1 = 1;
    for2(n-2){
        if(s[i] == tmp) cnt++;
        if(s[i] == tmp1) cnt1++;
    }
    if(n - (cnt+cnt1) != abs(cnt1-cnt)){
        cout << "NO" << endl;
        return;
    }
    if(cnt > cnt1){
        int curr = 1;
        for2(n-1){
            if(curr < 0){
                cout << "NO" << endl;
                return;
            }
            if(s[i] == tmp) curr++;
            else curr--;
        }
        if(curr == 0){
            cout << "YES" << endl;
            return;
        }
        else{
            cout << "NO" << endl;
                return;
        }
    }
    else{
        int curr = 1;
        for(int i = n-2; i >=0;i--){
            if(curr < 0){
                cout << "NO" << endl;
                return;
            }
            if(s[i] == tmp1) curr++;
            else curr--;
        }
        if(curr == 0){
            cout << "YES" << endl;
            return;
        }
        else{
            cout << "NO" << endl;
                return;
        }
    }

    

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











