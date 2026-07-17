#include<iostrean>
int main(){
    int r,c;
    cout<<"Enter the number of rows  = ";
    cin>>r;
    cout<<"Enter the number of col   = ";
    cin>>c;
    int mat[r][c];
    cout<<"Enter the element in matrix"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    cout<<"your matrix is :- "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

