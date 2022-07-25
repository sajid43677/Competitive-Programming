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
    int n,m;
    cin >> n >> m;
    int arr[n] = {0};
    char s[m];
    for1(m) s[i] = 'B';
    int c1,c2;
    for1(n){
        cin >> arr[i];
        c1 = arr[i]-1;
        c2 = m + 1 - arr[i]-1;
        if(s[c1] == 'A'){
            s[c2] = 'A';
            continue;
        }
        if(s[c2] == 'A'){
            s[c1] = 'A';
            continue;
        }
        c1 = min(c1,c2);
        s[c1] = 'A';
    }
    for1(m) cout << s[i];
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











