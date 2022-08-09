#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

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
#define lohi int, vector<int>, greater<int>>
#define mkp make_pair

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << ": " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << ": " << arg1 << " |"; __f (comma + 1, args...);
}

void solve(){
    string s,t;
    cin >> s >> t;
    vector <pair<char,int>> vcs;
    vector <pair<char,int>> vct;
    int cnt = 0;
    for1(s.size()){
        if(s[i] != s[i-1] && i != 0){
            vcs.pb(mkp(s[i-1],cnt));
            cnt = 1;
            if(i == s.size()-1) vcs.pb(mkp(s[i],cnt));
            continue;
        }
        cnt++;
        if(i == s.size()-1) vcs.pb(mkp(s[i],cnt));
    }
    cnt = 0;
    for1(t.size()){
        if(t[i] != t[i-1] && i != 0){
            vct.pb(mkp(t[i-1],cnt));
            cnt = 1;
            if(i == t.size()-1) vct.pb(mkp(t[i],cnt));
            continue;
        }
        cnt++;
        if(i == t.size()-1) vct.pb(mkp(t[i],cnt));
    }
    /* for(auto a: vcs){
        cout << a.first << " " << a.second << endl;
    }
    for(auto a: vct){
        cout << a.first << " " << a.second << endl;
    } */
    if(vcs.size() != vct.size()){
        cout << "No" << endl;
        return;
    }
    for1(vcs.size()){
        if(vcs[i].second > vct[i].second || (vcs[i].second < vct[i].second && vcs[i].second < 2) || vcs[i].first != vct[i].first){
            cout << "No" << endl;
            return;
        }
    }
    cout <<"Yes" <<  endl;
}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
   /*  int t;
    cin >> t;
    while(t--)  */
        solve();
    

}











