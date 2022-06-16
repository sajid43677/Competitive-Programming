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
    int a,b;
    cin >> a >> b;
    int cnt = 0,tmp,x;
    while(true){
        if(a < 1 || b < 1) break;
        if(a > b){
            x = a - b;
            tmp = x%b;
            if(tmp == 0){
                cnt += x/b + 1;
                break;
            }
            else{
                cnt += x/b + 1;
                a = tmp; 
            }
        }
        else{
            x = b - a;
            tmp = x%a;
            if(tmp == 0){
                cnt += x/a + 1;
                break;
            }
            else{
                cnt += x/a + 1;
                b = tmp; 
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











