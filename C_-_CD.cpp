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

int arr[40];
vector <int> sub;
vector <vector<int>> subSt;


int k;
int it = -1;
int sum = 0;
int mx = 0;
int n;
int cnt = -1;
int flg = 0;

void genSub(int pos){
    if(pos == k){
        cnt++;
        
        for(int x: sub) cout << x;
        if(sum == n){
            mx = sum;
            it = cnt;
            flg = 1;
        }
        if(sum > mx && sum < n && flg == 0){
            mx = sum;
            it = cnt;
        }
        //cout << sum << endl;
        sum = 0;
        subSt.pb(sub);
        return;
    }

    sub.pb(arr[pos]);
    genSub(pos+1);
    sub.pop_back();
    genSub(pos+1);
}

void solve(){
    while(cin >> n){
        cin >> k;
        
        for1(k) cin >> arr[i];
        genSub(0);
        int it = -1;
        int mx = 0;
        /* for(int i = 0; i < subSt.size(); i++){
            int sum = 0;
            for(int j = 0; j < subSt[i].size(); j++){
                sum += subSt[i][j];
            }
            if(sum == n){
                mx = sum;
                it = i;
                break;
            }
            if(sum > mx && sum < n){
                mx = sum;
                it = i;
            }
        } */
        for(int x: subSt[it]){
            cout << x << " ";
        }
        cout << "sum:" << mx << endl;
        it = -1;
        mx = 0;
        flg = 0;
        cnt = -1;
    }
}

int main()
{
    //Boost;
   Read;Write;
    solve();
    

}











