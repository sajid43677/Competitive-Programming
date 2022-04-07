#include<iostream>

using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[] = {4,6,2,8,9,12,54,1,4};

    if(linearSearch(arr,9,50) == 1){
        cout << "Data found" << endl;
    }
    else
        cout << "Data not found" << endl;


    return 0;

}



