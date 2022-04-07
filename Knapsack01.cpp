#include<iostream>

using namespace std;



int main()
{
    int bi[4] = {0,3,8,6};
    int wi[4] = {0,1,2,3};
    int w = 5;
    int b[4][w+1];
    for(int i =0; i <= w;i++){
        b[0][i] = 0;
        //cout << b[0][i] << endl;
    }
    for(int i = 1; i <= 4;i++){
        b[i][0] = 0;
        //cout << "b[i,j] = "<<i-1<<","<<0<<" " << b[i-1][0] << endl;
        for(int j=1;j<=w;j++){
            if(j>=wi[i]){
                if(bi[i]+b[i-1][j-wi[i]]>b[i-1][j]){
                    b[i][j]=bi[i] + b[i-1][j-wi[i]];
                }
                else{
                    b[i][j] = b[i-1][j];
                }
            }
            else{
                    //cout << "out else"<< endl;
                b[i][j] = b[i-1][j];
            }
            //cout << "b[i,j] = "<<i<<","<<j<<" " << b[i][j] << endl;
        }
    }
    int n = b[3][w];
    cout << n << endl;

}
//3 5
//3 1
//4 2
//2 3

