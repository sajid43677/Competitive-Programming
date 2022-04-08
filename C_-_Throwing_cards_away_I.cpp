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
    while(true){
        cin>> n;
        if(n==0)break;

        deque <int> dq;
        for1(n) dq.push_back(i+1);
        cout << "Discarded cards:";
        int tmp ;
        while(dq.size() > 1){
            if(dq.front() == 1) cout << " 1";
            else cout << ", " << dq.front();
            dq.pop_front();
            int tmp = dq.front();
            dq.pop_front();
            dq.push_back(tmp);
        }
        cout << endl;
        cout << "Remaining card: " << dq.front()<< endl;
    }
}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--)  */
        solve();
    

}











