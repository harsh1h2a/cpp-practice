#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool isswap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap=true;
            }
        }
        if(!isswap){
            return;
        }
    }
}

void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int smallindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallindex]){
                smallindex=j;
            }
        }
        swap(arr[i],arr[smallindex]);
    }
}

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int previous=i-1;
        int current=arr[i];
        while(previous >=0 && arr[previous]>current ){
            arr[previous+1]=arr[previous];
            previous--;
        }
        arr[previous+1]=current;
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}

int main(){
    int a[]={1,5,4,3,2};
    int n=5;
    insertionsort(a,n);
    print(a,n);
    return 0;
}
