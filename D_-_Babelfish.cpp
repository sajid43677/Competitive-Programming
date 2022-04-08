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
    map <string,string> mp;
    string s,s1;
    getline(cin,s);
    while(s != ""){
        stringstream ss(s);
        ss >> s >> s1;
        mp[s1]=s;
        getline(cin,s);
    }
    while (cin >> s)
    {
        map<string, string>::const_iterator it= mp.find(s);
        
        if (it == mp.end())
        
            cout << "eh" << endl;
        
        else
            cout << it->second << '\n';
    }
}

//FuzzyCarnage
int main()
{
    Boost;
   // Read;Write;
    /* int t;
    cin >> t;
    while(t--) */ 
        solve();
    

}











