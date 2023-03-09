#include <bits/stdc++.h>


using namespace std;



int main()
{
    
    cout << (1>>1) << endl;
    cout << (0>>1) << endl;
}


#include <bits/stdc++.h>


using namespace std;

int arr[1000];
int dp[1000][2][2];
int n;

int f(int pos,int pos2, int prv){
    if(pos >= n) return 0;
    if(dp[pos][pos2][prv] != 0) return dp[pos][pos2][prv];
    if(prv == 0){
        if(pos2 == 0){
            int val1 = f(pos+1,1,)
        }
    }
}

int main()
{   
    cin >> n;

    for(int i = 0; i < n; i++){
            cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        dp[i][0][0] = dp[i][0][1] = dp[i][1][0] = dp[i][1][1] = INT32_MIN;
    }

    int ans = max;

    cout << ans << endl;

    return 0;
}
