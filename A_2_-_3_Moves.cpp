#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

//double pi = acos(-1.0);

#define xx first
#define yy second
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
    int n;
    cin >> n;
    int ans = 0;
    if(n==1){
        cout << 2 << endl;
        return;
    }
    if(n%3 == 0){
        cout << n/3 << endl;
        return;
    }
    if(n%3 == 2){
        cout << n/3 + 1 << endl;
        return;
    }
    if(n%3 == 1){
        cout << n/3 + 1 << endl;
    }

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











