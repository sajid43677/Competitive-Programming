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
    if(n == 1) {
        cin >> n;
        cout << -1 << endl;
        return;
    }
    vector <int> arr(n);
    for1(n) cin >> arr[i];
    vector <int> vc(n),vc1(n);
    vc = arr;
    vc1 = vc;
    sort(vc.begin(),vc.end());
    for1(n){
        for(int j = 0; j < n;j++){
            if(arr[i] != vc[j] && vc[j] != -1){
                arr[i] = vc[j];
                vc[j] = -1;
                break;
            }
        }
    }
    for(int i = 1; i < n;i++){
        if(arr[i] == vc1[i]){
            swap(arr[i],arr[i-1]);
        }
    }
    for1(n) cout << arr[i] << " ";
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











