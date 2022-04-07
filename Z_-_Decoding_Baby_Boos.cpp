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

void solve(){
    vector <pair<char,char>> vc;
    unordered_map <char,char> mp;
    string s;
    char a,b;
    cin >> s;
    int n;
    cin >> n;
    for1(n){
        cin >> a >> b;
        if(mp[b] == a) continue;
        mp[b] = a;
        vc.pb( make_pair(a,b));
    }
    n = s.size();
    int len = vc.size();
    //cout << len << endl;
    for(int i = 0; i < len;i++){
        //cout << vc[i].second << endl;
        for(int j = 0; j < n; j++){
            //cout << s[j] << " " <<  vc[i].second << endl;
            if(s[j] == vc[i].second){
                s[j] = vc[i].first;
               // cout << s << endl;
            }
        }
    }
    cout << s << endl;


}

int main()
{
    Boost;
   // Read;Write;
    int t;
    cin >> t;
    while(t--) solve();
    

}











