#include<iostream>

using namespace std;

void bubbleShort(int arr[],int n){
    int pass,j,flag;
    for(pass = 1; pass < n; pass++){
        flag = 0;
        for(j = 0;j < (n-pass); j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }

}

int main(){
    int arr[] = {4,6,2,8,9,12,54,1,4};

    bubbleShort(arr,9);

    for(int j = 0; j < 9; j++){
        cout << arr[j] << " ";
    }
    return 0;

}


