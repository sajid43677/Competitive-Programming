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
int cas = 1;
string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int taken[26] = {0};
int n,k,cnt = 0;
string pos = "AAAAAAAAAAAAAAAAAAAAAAAAAA";
void rot(int m){
    if(cnt > k-1) return;
    if(m==n){
        cnt++;
        for(int i = 0; i < n; i++){
            cout << pos[i];
        }
        cout << endl;
        return;
    }
    for1(n){
        if(taken[i] == 0){
            taken[i] = 1;
            pos[m] = s[i];
            rot(m+1);
            taken[i] = 0;
        }
    }   
}
    

void solve(){
    cout << "Case " << cas << ":"<<endl;
    cin >> n >> k;
    rot(0);
    cas++;
    cnt = 0;
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











