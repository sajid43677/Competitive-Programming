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
    cin >> s;
    if(s.size()==5){
        cout << 3 << endl;
        return;
    }
    int cnt = 0;
    if(s[0] == 't')cnt++;  if(s[1] == 'w')cnt++;  if(s[2] == 'o')cnt++;

    if(cnt > 1)cout << 2 << endl;
    else{
        cout << 1 << endl;
    }
}

int main()
{
    Boost;
    //Read;Write;
    int t;
    cin >> t;
    while(t--) solve();
    

}











