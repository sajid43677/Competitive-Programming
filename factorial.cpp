#include<iostream>

using namespace std;

int fact(int facto,int num){
    if(num <= 1){
        return facto;
    }
    fact(facto*num,num-1);
}


int main(){
    int num;
    cin >> num;
    cout << fact(1,num)<<endl;

}

