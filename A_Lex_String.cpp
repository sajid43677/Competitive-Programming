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
    int n1,n2,k;
    string s1,s2,ans = "";
    cin >> n1 >> n2 >> k;
    cin >> s1 >> s2;
    int cnt1 = 0,cnt2 = 0,flg = 0;
    pair <int,int> cnt;
    cnt.first = 0;
    cnt.second = 0;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for1(n1+n2+n2){
        if(cnt1 == n1 || cnt2 == n2){
            break;
        }
        if(s1[cnt1] < s2[cnt2]){
            if(cnt.second == 2) cnt.first = 0;
            if(cnt.first == k) {
                cnt.first = 0;
                if(cnt.second != 1){
                    ans += s1[cnt1];
                    cnt1++;
                    cnt.first++;
                    cnt.second = 1;
                    //cout << ans <<" "<<cnt1 << " "<<cnt2 << endl;
                    continue;
                    
                }
            }
            else{
                cnt.second = 1;
                cnt.first++;
                ans += s1[cnt1];
                cnt1++;
                //cout << ans <<" "<<cnt1 << " "<<cnt2 << endl;
                continue;
            }
            
        }
        if(cnt.second == 1) cnt.first = 0;
        if(cnt.first == k){
            cnt.first = 0;
            if(cnt.second != 2){
                ans += s2[cnt2];
                cnt2++;
                cnt.second = 2;
                cnt.first++;
                //cout << ans <<" "<<cnt1 << " "<<cnt2 << endl;
                continue; 
            }
            else{
                cnt.first = 1;
                cnt.second = 1;
                ans += s1[cnt1];
                cnt1++;
                continue;
            }
        }
        cnt.second = 2;
        cnt.first++;
        ans += s2[cnt2];
        cnt2++;
        //cout << ans <<" "<<cnt1 << " "<<cnt2 << endl;
        continue;

    }
    cout << ans << endl;
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











