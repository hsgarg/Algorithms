#include<bits/stdc++.h>
using namespace std;
///Sudoku Solver


bool canPlace(int grid[][9],int i,int j,int n, int number){

    for(int x=0;x<n;x++){
        if(grid[x][j]==number||grid[i][x]==number){
            return false;
        }
    }
    n=sqrt(n);
    int sx=(i/n)*n;
    int sy=(j/n)*n;
    for(int i=sx;i<sx+n;i++){
        for(int j=sy;j<sy+n;j++){
            if(grid[i][j]==number){
                return false;
            }
        }
    }
    return true;
}

bool sudokuSolver(int grid[][9],int i,int j,int n){

//Base Case
    if(i==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<grid[i][j];
            }
            cout<<endl;
        }
        return true;
    }

//row end
    if(j==n){
        sudokuSolver(grid,i+1,0,n);
    }

//blue cell
    if(grid[i][j]!=0){
        sudokuSolver(grid,i,j+1,n);
    }

//white cell
else{
    for(int number=1;number<=n;number++){
        /// agar rakh skte ho, rakh do
        if(canPlace(grid,i,j,n,number)){
            grid[i][j]=number;

            bool baatbni = sudokuSolver(grid,i,j+1,n);

            if(baatbni){
                return true;
            }
            }
}

    grid[i][j]=0;
    return false;

}



}

int main(){

    int grid[][9]= {{5,3,0,0,7,0,0,0,0},
                    {6,0,0,1,9,5,0,0,0},
                    {0,9,8,0,0,0,0,6,0},
                    {8,0,0,0,6,0,0,0,3},
                    {4,0,0,8,0,3,0,0,1},
                    {7,0,0,0,2,0,0,0,6},
                    {0,6,0,0,0,0,2,8,0},
                    {0,0,0,4,1,9,0,0,5},
                    {0,0,0,0,8,0,0,7,9}};

sudokuSolver(grid,0,0,9);
return 0;
}
