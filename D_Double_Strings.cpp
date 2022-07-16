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
    string arr[n];
    map <string,int> mp;
    for1(n){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    string lft,rght;
    int flg = 0;
    for1(n){
        flg = 0;
        cout << endl << arr[i].size() - 2 << endl;
        for(int j = 0; j < arr[i].size() - 2;j++){
            
            //if(j > arr[i].size() - 2) break;
            lft = arr[i].substr(0,j+1);
            rght = arr[i].substr(j+1,arr[i].size() - lft.size());
            if(mp[lft] > 0 && mp[rght] > 0){
                flg = 1;
                cout << 1;
                break;
            }
        }
        if(flg == 0) cout << 0;
    }
    cout << endl;
}

//FuzzyCarnage
int main()
{
    //Boost;
    //Read;Write;
    int t;
    cin >> t;
    while(t--) 
        solve();
    

}











