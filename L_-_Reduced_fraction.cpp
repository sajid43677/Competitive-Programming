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

int gcd(ll i , ll j){
    if(i == 0)
        return j;
    return gcd(j%i,i);
} 

void solve(){
    ll a,b;
    cin >> a >> b;
    if(b == 0){
        cout << "the denominator can not be zero" << endl;
        return;
    }
    ll ans = abs(gcd(a,b));
    int flg = 0;
    if((a < 0 && b > 0) || (b < 0 && a >= 0)){
        flg = 1;
    }
    a = a/ans;
    b = b/ans;
    if(flg == 1) cout << "-";
    cout << abs(a) <<" ";
    if(b != 1){
        cout << abs(b);
    }
    cout << endl;
}

int main()
{
    Boost;
    //Read;Write;
    int t;
    cin >> t;
    while(t--) solve();
    

}











