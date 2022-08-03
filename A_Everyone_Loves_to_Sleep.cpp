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
#define lohi int, vector<int>, greater<int>>

void solve(){
    int n,h,m,a,b;
    cin >> n >> h >> m;
    int tot = h*60 + m;
    int sub = INT32_MAX;
    for1(n){
        cin >> a >> b;
        a = a*60 + b;
        if(a < tot) {
            a = 1440 - tot + a;
        }
        else{
            a = a - tot;
        }
        sub = min(sub,a);
    }
    a = sub/60;
    b = sub%60;
    cout << a << " " << b << endl;
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











