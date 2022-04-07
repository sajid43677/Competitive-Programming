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

int cnt = 0;

void solve(){
    cnt++;
    cout << "Case #" << cnt << ":" << endl;
    int r,c;
    cin >> r >> c;
    r = r*2 + 1;
    c = c*2 + 1;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            if( i < 3 && j < 3){
                cout << ".";
                continue;
            }
            if(i%2==1){
                if(j%2==1){
                    cout << "+";
                    continue;
                }
                else{
                    cout << "-";
                    continue;
                }
            } 
            if(i%2==0){
                if(j%2==1){
                    cout << "|";
                    continue;
                }
                else{
                    cout << ".";
                    continue;
                }
            }
        }
        cout << endl;
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











