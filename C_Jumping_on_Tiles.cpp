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

char alp[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

void solve(){
    string s;
    cin >> s;
    int lst = s[s.size()-1] - 'a' + 1,fst = s[0] - 'a' + 1;
    int flg = 0;
    if(lst < fst) {swap(lst,fst);flg = 1;}
    vector <pair<int,int>> vc;
    int cnt = 0,tmp = 0;
    //cout << fst<< " gg " << lst << endl;
    for(int i = 1; i < s.size()-1;i++){
        tmp = s[i] - 'a'+1;
        //cout << tmp << " " << s[i] << endl;
        if(tmp >= fst && tmp <= lst){
            cnt++;
            vc.pb(mkp(tmp,i+1));
        }
    }
    if(flg == 1) sort(vc.begin(),vc.end(),greater<pair<int,int>>());
    else sort(vc.begin(),vc.end());
    cout << lst - fst << " " << cnt+2 << endl;
    cout << 1 << " ";
    for(auto a: vc){
        cout <<a.yy << " ";
    }
    cout << s.size();
    pendl;
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











