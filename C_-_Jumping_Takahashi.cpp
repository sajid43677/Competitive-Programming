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
    int n,x;
    cin >> n >> x;
    int arr1[n] = {0};
    int arr2[n] = {0};
    int sumall1 = 0;
    int sumall2 = 0;
    for1(n){
        cin >> arr1[i] >> arr2[i];
        sumall1 = sumall1 + arr1[i];
        sumall2 = sumall2 + arr2[i];
    }
    int sum1 = 0;
    int sum2= 0;
    int flg = 0;
    for(int i = 0; i < n; i++){
        sum1 = arr1[i];
        sum2 = arr2[i];
        for(int j = 0; j < i; j++){
            sum1 = sum1 + arr2[j];
            sum2 = sum2 + arr1[j];
        }
        for(int j = i+1; j < n; j++){
            sum1 = sum1 + arr2[j];
            sum2 = sum2 + arr1[j];
        }
       // cout << sum << endl;
        if(sum1 == x || sum2 == x){
            flg = 1;
            break;
        }
    }
    if(sumall1 == x || sumall2 == x){
        flg = 1;
    }
    if(flg == 1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }



    

}











