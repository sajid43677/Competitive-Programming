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
    ll p,q,x,y,a;
    vector <ll> vc;
    cin >> p >> q;
    for1(p){
        cin >> a;
        vc.pb(a);
    }
    
    sort(vc.begin(),vc.end(),greater<int>());
    for(int i = 1; i < p; i++){
        vc[i] += vc[i-1];
    }
    ll sum = 0;
    for1(q){
        cin >> x >> y;
        if(x == y) sum = vc[x-1];
        else sum = vc[x-1] - vc[x-1-y];
        cout << sum << endl;
        sum = 0;
    }
}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    /* int t;
    cin >> t; */
    //while(t--) 
        solve();
    

}











