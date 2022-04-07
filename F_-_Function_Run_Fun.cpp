#include <iostream>
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

ll dp[21][21][21];

int w(ll a,ll b,ll c){
    if (a <= 0 or b <= 0 or c <= 0)  return 1;
    if (a > 20 or b > 20 or c > 20) return w(20, 20, 20);
    if(dp[a][b][c]){
        return dp[a][b][c];
    }

    if (a < b and b < c) return dp[a][b][c] =w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
    return dp[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
}

void solve(){
    ll a,b,c;
    while(true){
        cin >> a >> b >> c;
        if(a== -1 && b== - 1 && c== -1) break;
        cout << "w(" <<a << ", " << b << ", "<<c << ") = " << w(a,b,c) << endl; 
    }

}

int main()
{
    Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--)  */
    solve();
    

}











