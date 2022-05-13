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
    int n;
    cin >> n;
    vector<pair<int,int>> st;
    int x,y;
    for1(n){
        cin >> x >> y;
        st.pb(make_pair(x,y));
    }
    stable_sort(st.begin(),st.end(),srt);
    for1(n){
        cout << st[i].first << " " << st[i].second << endl;
    }

}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--) */ 
        solve();
    

}











