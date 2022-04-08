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

string s;

int cnt = 1;

int factorial(int n)
{
    // single line to find factorial
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

void solve(){
    int k,n;
    cin >> n >> k;
    cout << "Case " << cnt << ":" << endl;
    string s1 = s.substr(0,n);
    cout << s1 << endl;
    if(n < 5 && k > factorial(n)) k = factorial(n);
    for(int i = 0; i < k-1; i++){
        next_permutation(s1.begin(),s1.end());
        cout << s1 << endl;
    }
    cnt++;

}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    for(int i = 0; i< 26;i++) s += (char)(i+65);
    //cout << s;
    int t;
    cin >> t;
    while(t--) 
        solve();
    

}











