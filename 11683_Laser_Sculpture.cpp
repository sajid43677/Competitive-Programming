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



int main()
{
    Boost;
    //Read;Write;
    int h,l;
    while(true){
        cin >> h;
        if(h == 0) break;
        cin >> l;
        int arr[l] = {0};
        for1(l) cin >> arr[i];
        int op = 0;
        op = h - arr[0];
        for(int i = 1; i < l;i++){
            if(arr[i] < arr[i-1]){
                op = op + arr[i-1] - arr[i];
            }
        }
        cout << op << endl;

    }

}











