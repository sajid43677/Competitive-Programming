#include<iostream>


using namespace std;

int partisn(int arr[],int strt,int nd){
    int i = strt;
    int piv = arr[strt];
    for(int j = strt + 1; j <= nd; j++){
        if(arr[j] < piv){
            i++;
            swap(arr[i],arr[j]);

        }
    }

    swap(arr[strt],arr[i]);
    return i;
}

void quickSort(int arr[],int strt,int nd){
if(strt< nd){
    int piv = partisn(arr,strt,nd);
    quickSort(arr,strt,piv - 1);
    quickSort(arr,piv + 1,nd);
}
}


int main(){
    int arr[9] = {4,6,2,8,9,12,54,1,4};

    for(int i = 0;i < 9;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    quickSort(arr,0,9-1);

    for(int i = 0;i < 9;i++){
        cout << arr[i] << " ";
    }

}
