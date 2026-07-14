#include<iostream>
#include<vector>
using namespace std;
bool ispossible(vector<int> arr,int n,int c,int maxdis){
    int cow=1,laststall=arr[0];
    for(int i=0;i<n;i++){
        if((arr[i]-laststall)>=maxdis){
            cow++;
            laststall=arr[i];
            
        }
        if(cow==c){
            return true;
        }
    }
    return false;
}

int getdis(vector<int> arr,int n,int m){
    
    int st=1,end=arr[n-1]-arr[0],ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr={1,5,7,12,18};
    int n=5,c=3;
    cout<<"The minimum dis btw cow = "<<getdis(arr,n,c)<<endl;
    return 0;
}
