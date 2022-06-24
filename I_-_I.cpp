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

ll mod = 1000000007;

int Subscount(string a, string b)
{
    int m = a.length();
    int n = b.length();
    int dp[m + 1][n + 1] = { { 0 } };
    for (int i = 0; i <= n; ++i)
        dp[0][i] = 0;
    for (int i = 0; i <= m; ++i)
        dp[i][0] = 1;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1]%mod +
                               dp[i - 1][j]%mod;
                 
            else
                dp[i][j] = dp[i - 1][j]%mod;
        }
    }
    return dp[m][n]%mod;
}

void solve(){
    string s2 = "michigan";
    string s1;
    cin >> s1;
    cout << Subscount(s1,s2) << endl;

}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--)  */
        solve();
    

}











