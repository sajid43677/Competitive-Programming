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
    char a;
    int cnt=0,prev1=0,ans[2][2],flg = 0;
    pair <int,int> pr;
    for1(8){
        cnt = 0;
        for(int j = 0; j < 8; j++){
            cin >> a;
            if(a == '#'){
                //cout << i << " " << j << " ";
                ans[cnt][0] = i;
                ans[cnt][1] = j;
                cnt++;
            }
        }
        if(prev1 == 2 && cnt  == 1 && flg == 0) {
            pr.first = ans[0][0]+1;
            pr.second = ans[0][1]+1;
            flg = 1;
        }
        prev1 = cnt;
        
    }
    cout << pr.first << " " << pr.second << endl;
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











