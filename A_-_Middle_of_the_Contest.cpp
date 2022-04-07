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
    string s;
    string e;
    cin >> s >> e;
    int h,mn,h1,mn1;
    h = (s[0]-'0')*10 + (s[1] - '0');
    mn = (s[3] - '0')*10 + (s[4] - '0');
    h1 = (e[0]-'0')*10 + (e[1] - '0');
    mn1 = (e[3] - '0')*10 + (e[4] - '0');
    int t1,t2;
    t1 = h*60 + mn;
    t2 = h1*60 + mn1;
    t1 = (t2 - t1)/2 + t1;
    //cout << t1 << endl;
    h = t1/60;
    mn = t1%60;
    if(h<10) cout << "0";
    cout << h << ":"; 
    if(mn < 10) cout << "0";
    cout << mn << endl;

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











