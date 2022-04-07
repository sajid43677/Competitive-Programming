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
   //Read;Write;
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int len = s.size();
        int arr[len] = {0};
        string ans,exp;
        int flg = 0;
        for(int i = 0; i < len; i++){
            flg = 0;
            if(arr[i] == 1){
                continue;
            }
            for(int j = i+1; j < len; j++){
                if(s[i] == s[j]){
                    ans.pb(s[i]);
                    ans.pb(s[i]);
                    arr[j] = 1;
                    flg = 1;
                    break;
                }
            }
            if(flg == 0){
                exp.pb(s[i]);
            }
        }
        ans = ans + exp;
        cout << ans << endl;
    }
    
}











