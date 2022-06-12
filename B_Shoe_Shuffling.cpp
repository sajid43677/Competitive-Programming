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
int max_sz = 100005; 

void solve(){
    int n,flg = 0,a;
    cin >> n;
    int arr[n+1] = {0};
    int arr1[n+1] = {0};
    int arr2[n+1] = {0};
    int cnt = 0;
    for1(n){
        cin >> a;
        if(a > n) flg = 1;
        else arr1[i+1] = a;
        
    }
    if(flg == 1) {
        cout << -1 << endl;
        return;
    }
    int tmp = 0;
    for1(n){
        cnt = 0;
        tmp = arr1[i+1];
        //cout << tmp << endl;
        if(tmp != i+1 || tmp == 0){
            while(arr2[tmp] == -1 ){
                if(cnt == 0) {
                    tmp = n;
                    cnt=1;
                }
                tmp--;
            }
            arr[i] = tmp;
            arr2[tmp] = -1;
        }
        else{
            tmp = n;
            while(arr2[tmp] == -1){
                tmp--;
            }
            arr[i] = tmp;
            arr2[tmp] = -1;
        }    
       // cout << arr[i] << endl;
    }
    for1(n){
        cout << arr[i] << " ";
    }
    cout << endl;
    
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











