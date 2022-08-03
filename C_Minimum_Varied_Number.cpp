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

void sum(int n)
{
    if (n > 45) {
        cout << -1;
        return;
    }
    string res;
    int digit = 9;
    while (n > digit) {
        res = char('0' + digit) + res;
        n -= digit;
        digit -= 1;
    }
 
    if (n > 0) {
        res = char('0' + n) + res;
    }

    cout << res << endl;
}

void solve(){
    int n;
    cin >> n;
    sum(n);
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











