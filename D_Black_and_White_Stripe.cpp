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
#define lohi int, vector<int>, greater<int>>

void solve(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt=0,cntmx = INT_MAX,cr;
    int wl[n] = {0};
    int wr[n] = {0};
    //cout << s << endl;
    for1(n){
        if(s[i] == 'W')cnt++;
        wl[i] = cnt;
       // cout << wl[i] << endl;
    }
    cnt = 0;
    for(int i = n-1; i >= 0; i--){
        if(s[i] == 'W')cnt++;
        wr[i] = cnt;
    }
    for1(n){
        
        if(i+k-1 > n-1) break;
        cr = wl[i+k-1]-wl[i]+1;
        if(s[i] == 'B')cr--;
        //cout << cr << " k " << cntmx<< endl;
        cntmx = min(cntmx,cr);
    }
    for(int i = n-1;i >= 0; i--){
        if(i-k+1 < 0) break;
        cr = wr[i-k+1] - wr[i]+1;
        if(i != n-1) {if(s[i] == 'B')cr--;}
        //if(s[i] == 'W' && i == n-1) cr++;
       //cout << cr << " k2 " << cntmx<< endl;
        cntmx = min(cntmx,cr);
    }
    cout << cntmx << endl;

    /* for(int i = n-1;i >=0;i--){
        cnt = 0;
        cr = 0;
        for(int j = i; j >=0;j--){
            if(s[j] == 'W'){
                cnt++;
            }
            cr++;
            if(cr ==k ){
                break;
            }
        }
        if(cr < k){
            break;
        }
        cntmx = min(cnt,cntmx);
    } */
    //cout << cntmx << endl;


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











