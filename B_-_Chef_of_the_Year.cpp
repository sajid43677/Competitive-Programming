#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

//double pi = acos(-1.0);

#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define reverseS string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb(x) push_back(x);
#define for1(n) for(int i = 0; i < n;i++)

bool srt(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}

void solve(){
    int n,m;
    string ch,flag;
    cin >> n >> m;
    map <string,string> mp;
    map <string,int> mch;
    map <string,int> mflg;
    for1(n){
        cin >> ch >> flag;
        mp[ch] = flag;
        //cout << mp[ch] << endl;
    }
    for1(m){
        cin >> ch;
        mch[ch]++;
        mflg[mp[ch]]++;
       // cout << mp[ch] << endl;
    }
    int mxc = -1;
    for (auto& it : mch) {
        if(it.second > mxc) {
            mxc = it.second;
            ch = it.first;
            }
    }
    int mxf = -1;
    for (auto& it : mflg) {
        if(it.second > mxf) {
            mxf = it.second;
            flag = it.first;
        }
    }
    cout << flag << endl << ch << endl;

}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    int t;
    /* cin >> t;
    while(t--) */ 
        solve();
    

}











