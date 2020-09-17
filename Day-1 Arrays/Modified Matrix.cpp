#include<bits/stdc++.h>
using namespace std;
#define R 3
#define C 4
void modifyMatrix(int mat[R][C]){
    int row[R];
    int col[C];
    
    for(int i=0;i<R;i++){
        row[i]=-1;
    }
    
    for(int j=0;j<C;j++){
        col[j]=-1;
    }
    
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(mat[i][j]==1){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(row[i]==1||col[j]==1){
                mat[i][j]=1;
            }
        }
    }
}

void printMatrix(int mat[R][C]) 
{ 
    int i, j; 
    for (i = 0; i < R; i++) 
    { 
        for (j = 0; j < C; j++) 
        { 
            cout << mat[i][j]; 
        } 
        cout << endl; 
    } 
} 

int main(){
    int mat[R][C] = { {1, 0, 0, 1}, {0, 0, 1, 0}, {0, 0, 0, 0}};
    
    cout << "Input Matrix \n"; 
    printMatrix(mat);
    
    modifyMatrix(mat);
    
    cout<<"Modified Matrix: ";
    printMatrix(mat);
    
    return 0;
    
}