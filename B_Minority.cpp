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
 
 
int main()
{
    Boost;
   Read;Write;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ons = 0;
        int zrs = 0;
        int len = s.size();
        for(int i = 0; i< len; i++){
           // cout << s[i] << endl;
            if(s[i] == '1'){
                ons++;
            }
            else{
                zrs++;
            }
        }
       /*  cout << ons << endl;
        c *///out << zrs << endl;
        len = 0;
        if(zrs != ons)
            len = min(ons,zrs);
        
        cout << len << endl;
    }
    
    
}











