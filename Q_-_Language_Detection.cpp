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
    int n = 0;
    string s;
    while (cin >> s, s != "#") {
    cout << "Case " << ++n << ": ";
    if (s == "HELLO") {
      cout << "ENGLISH\n";
    } else if (s == "HOLA") {
      cout << "SPANISH\n";
    } else if (s == "HALLO") {
      cout << "GERMAN\n";
    } else if (s == "BONJOUR") {
      cout << "FRENCH\n";
    } else if (s == "CIAO") {
      cout << "ITALIAN\n";
    } else if (s == "ZDRAVSTVUJTE") {
      cout << "RUSSIAN\n";
    } else {
      cout << "UNKNOWN\n";
    }
  }
}

int main()
{
    Boost;
    //Read;Write;
    //int t;
    //cin >> t;
    //while(t--) 
    solve();
    

}











