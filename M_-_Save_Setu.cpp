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

int sumOfDigit(long long num){
    int sum = 0;
    while(num!=0)
    {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}



void solve(){

 long long num;

    while(cin >> num){
        if(num == 0){
            break;
        }
        int sum = 0;
        while(true){
            sum = sumOfDigit(num);
            num = sum;
            if(sum < 10){
                break;
            }
        }
        cout << sum << endl;
    }

}

int main()
{
    Boost;
    //Read;Write;
    //while(t--) 
    solve();
    

}











