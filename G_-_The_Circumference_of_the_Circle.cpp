#include <bits/stdc++.h>

using namespace std;


typedef long long ll;

double PI = acos(-1.0);

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
    double x1, y1;
    double x2, y2;
    double x3, y3;


    while( scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3 ) == 6 ){
        double a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        double b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
        double c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
        double s = (a + b + c) / 2;
        double A = sqrt( s*(s-a)*(s-b)*(s-c) );
        double d = (a * b * c) / (2 * A);
        double circumference = PI * d;


        printf("%.2lf\n", circumference );
    }
}

int main()
{
    Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--) */ 
    solve();
    

}











