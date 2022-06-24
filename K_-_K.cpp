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
    int n,m;
    cin >> n >> m;
    int l,r;
    vector <int> vcl(m);
    vector <int> vcr(m);
    for1(m){
        cin >> vcl[i] >> vcr[i];
    }
    sort(vcl.begin(),vcl.end());
    sort(vcr.begin(),vcr.end());
    //cout << vcr[0] <<" "<< vcl[0] << endl;
    int ans = vcr[0] - vcl[m-1] + 1;
    if(ans < 0) ans = 0;
    cout << ans << endl;
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











