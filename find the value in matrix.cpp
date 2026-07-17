#include<iostream>
using namespace std;
pair<int,int> findval(int mat[][3],int r,int c,int f){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(mat[i][j]==f){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int r=3,c=3;
    int f;
    cout<<"To find any element in matrix  = ";
    cin>>f;
    
    pair<int,int> ans=findval(mat,r,c,f);
    if(ans.first==-1){
        cout<<"element not found.";
    }else{
        cout<<"found at = "<<ans.first<<","<<ans.second;
    }
    return 0;
}
