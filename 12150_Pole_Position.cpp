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



int main()
{
    Boost;
   // Read;Write;
    int n;
    while(true){
        cin >> n;
        if(n == 0){
            break;
        }
        int a = 0, flg = 0;
        int arr[n] = {0};
        int ans[n] = {0};
        allnegOne(ans);
        for1(n){
            cin >> arr[i] >> a;
            a = i+a;
            if(a >= n || a < 0 || ans[a] != -1){
                flg = 1;
            }
            //cout << "cc" << endl;
            else
                ans[a] = arr[i];
        }
        if(flg == 1){
            cout << -1 << endl;
        }
        else{
            for1(n-1){
                cout << ans[i] << " ";
            }
            cout << ans[n-1] << endl;
        }
            
    }
   

}











