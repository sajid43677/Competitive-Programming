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
    ll n;
    cin >> n;
    if(n < 0){
        cout << "total second must be a positive integer" << endl;
        return;
    }
    ll hr = n/3600;
    n = n%3600;
    ll mn = n/60;
    n = n%60;
    ll se = n;
    if(hr < 10){
        cout << "0";
        if(hr == 0){
            cout << "0";
        }
        else{
            cout << hr;
        }
    }
    else{
        cout << hr;
    }
    cout << ":";
    if(mn < 10){
        cout << "0";
        if(mn == 0){
            cout << "0";
        }
        else{
            cout << mn;
        }
    }
    else{
        cout << mn;
    }
    cout << ":";
    if(se < 10){
        cout << "0";
        if(se == 0){
            cout << "0";
        }
        else{
            cout << se;
        }
    }
    else{
        cout << se;
    }
    cout << endl;
}

int main()
{
    Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--) */
     solve();
    

}











