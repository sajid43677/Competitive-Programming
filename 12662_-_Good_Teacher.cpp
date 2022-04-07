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
#define for2(n) for(int i = 1; i <= n;i++)



int main()
{
    Boost;
    Read;Write;
    int n;
    cin >> n;
    int c[3] = {0};
    int cnt = 0;
    char arr[n+1];
    for2(n){
        cin >> arr[i];
        if(isalpha(arr[i])){
            c[cnt] = i;
            cnt++;
        }
    }
    string ans[n+1];
    if(cnt == 1){
        ans[c[0]] = arr[c[0]];
        string a = "left of";
        for(int i = c[0] - 1; i > 0;i--){
            ans[i] = a + " " + arr[c[0]];
            a = a + " left of";
        }
        string b = "right of";
        for(int i = c[0] + 1; i<=n;i++){
            ans[i] = b + " " + arr[c[0]];
            b = b + " right of";
        }
    }
    else if(cnt == 2){
        ans[c[0]] = arr[c[0]];
        ans[c[1]] = arr[c[1]];
        int dif = c[1] - c[0];
        if(dif%2 == 0){
            dif = c[0] + (dif)/2;
            ans[dif] = "middle of " ;
            ans[dif] = ans[dif] + arr[c[0]] + " and "+ arr[c[1]];
            string a = "left of";
            for(int i = c[0] - 1; i > 0;i--){
                ans[i] = a + " " + arr[c[0]];
                a = a + " left of";
            }
            string b = "right of";
            for(int i = c[0] + 1; i<dif;i++){
                ans[i] = b + " " + arr[c[0]];
                b = b + " right of";
            }
            a = "left of";
            for(int i = c[1] - 1; i > dif;i--){
                ans[i] = a + " " + arr[c[1]];
                a = a + " left of";
            }
            b = "right of";
            for(int i = c[1] + 1; i<=n;i++){
                ans[i] = b + " " + arr[c[1]];
                b = b + " right of";
            }
            //cout << ans[dif] << endl;
        }
        else{
            dif = c[0] + dif/2;
            string a = "left of";
            for(int i = c[0] - 1; i > 0;i--){
                ans[i] = a + " " + arr[c[0]];
                a = a + " left of";
            }
            string b = "right of";
            for(int i = c[0] + 1; i<=dif;i++){
                ans[i] = b + " " + arr[c[0]];
                b = b + " right of";
            }
            a = "left of";
            for(int i = c[1] - 1; i > dif;i--){
                ans[i] = a + " " + arr[c[1]];
                a = a + " left of";
            }
            b = "right of";
            for(int i = c[1] + 1; i<=n;i++){
                ans[i] = b + " " + arr[c[1]];
                b = b + " right of";
            }

        }
    }
    else{
        ans[c[0]] = arr[c[0]];
        ans[c[1]] = arr[c[1]];
        ans[c[2]] = arr[c[2]];
        
        string a = "left of";
        for(int i = c[0] - 1; i > 0; i--){
            ans[i] = a + " " + arr[c[0]];
                a = a + " left of";
        }
        string b = "right of";
        for(int i = c[2] + 1; i<=n;i++){
            ans[i] = b + " " + arr[c[2]];
                b = b + " right of";
        }
        int dif1 = c[1] - c[0];
        if(dif1%2 == 0){
            dif1 = c[0] + dif1/2;
            ans[dif1] = "middle of " ;
            ans[dif1] = ans[dif1] + arr[c[0]] + " and "+ arr[c[1]];
            b = "right of";
            for(int i = c[0] + 1; i < dif1;i++){
                ans[i] = b + " " + arr[c[0]];
                b = b + " right of";
                }
            a = "left of";
            for(int i = c[1] - 1; i > dif1;i--){
                ans[i] = a + " " + arr[c[1]];
                a = a + " left of";
            }
            }
        else{
            dif1 = c[0] + dif1/2;
             b = "right of";
            for(int i = c[0] + 1; i <= dif1;i++){
                ans[i] = b + " " + arr[c[0]];
                b = b + " right of";
                }
            a = "left of";
            for(int i = c[1] - 1; i > dif1;i--){
                ans[i] = a + " " + arr[c[1]];
                a = a + " left of";
            }
        }
        dif1 = c[2] - c[1];
        if(dif1%2 == 0){
            dif1 = c[1] + dif1/2;
            ans[dif1] = "middle of " ;
            ans[dif1] = ans[dif1] + arr[c[1]] + " and "+ arr[c[2]];
            b = "right of";
            for(int i = c[1] + 1; i < dif1;i++){
                ans[i] = b + " " + arr[c[1]];
                b = b + " right of";
                }
            a = "left of";
            for(int i = c[2] - 1; i > dif1;i--){
                ans[i] = a + " " + arr[c[2]];
                a = a + " left of";
            }
            }
        else{
            dif1 = c[1] + dif1/2;
             b = "right of";
            for(int i = c[1] + 1; i <= dif1;i++){
                ans[i] = b + " " + arr[c[1]];
                b = b + " right of";
                }
            a = "left of";
            for(int i = c[2] - 1; i > dif1;i--){
                ans[i] = a + " " + arr[c[2]];
                a = a + " left of";
            }
        }
        }

    int q,qq;
    cin >> q;
    while(q--){
        cin >> qq;
        cout << ans[qq] << endl;
    }
    

}











