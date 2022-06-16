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

int arr[1000000];

void solve(){
    int n,s,a;
    cin >> n >> s;
    int ones = 0;
    int lft =0,rt = 0;
    for1(n){
        cin >> a;
        arr[i] = a;
        if(a==1) {
            if(i < n/2) lft++;
            else rt++;
            ones++;}
    }
    int l=0,r=n-1,cnt = 0;
    while(true){
        if(s == ones){
            cout << cnt << endl;
            return;
        }
        if(s>ones){
            cout << -1 << endl;
            return;
        }
        if(l>=r){
            cout << -1 << endl;
            return;
        }
        if(arr[l] == 1) {
            l++;
            ones--;
            lft--;
        }
        else if(arr[r] == 1) {
            r--;
            ones--;
            rt--;
        }
        else{
            if(rt>lft){
                r--;
            }
            else{
                l++;
            }
        }
        cnt++;
    }
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











