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
    int n;
    cin >> n;
    int arr[n] = {0};
    int cnt = 0;
    int cntev = 0;
    int cntod = 0;
   // cout << n << endl;
    for(int i = 0; i < n;i++) {cin >> arr[i];
       // cout << arr[i]<<" ";
        if(arr[i]%2 == 0){
            if(cntev > arr[i]){
                cnt = 1;
               // cout << arr[i] <<" ev " << cntev << endl;
            }
            cntev = arr[i];
        }
        else {
            if(cntod > arr[i]){
                cnt = 1;
               // cout << arr[i] <<" od " << cntod << endl;
            }
            cntod = arr[i];
        }
    }

   // cout << arr[n-1] << endl;
    if(cnt == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
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











