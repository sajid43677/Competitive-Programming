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
    int a ;
    cin >> a;
    cin >> s;
    int cnt = 0;
    int len = s.length();
    for(int i = 1 ; i < len; i++){
        if(s[i] == '1' && i !=len-1){
            if(s[i+1] == '0'){
                if(s[i-1] == '0'){
                    cnt++;
                    i++;
                    continue;
                }
            }
        }
        else if(s[i] == '0'){
            if(s[i-1] == '0'){
                //cout << "cnt 2 with 0" << endl;
                cnt += 2;
                continue;
            }
        }
    }
    cout << cnt << endl;
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











