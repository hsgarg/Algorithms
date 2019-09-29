#include <iostream>
using namespace std;

#define N 3
#define M 3

void ChangeRowCol (int grid[M][N]){
	bool col1 = false;
    bool row1 = false;

	for (int j = 0; j < N; j++)
		if (!grid[0][j]) {
			row1 = true;
			break;
		}	
	for (int i = 0; i < M; i++)
		if (!grid[i][0]) {
			col1 = true;
			break;
		}

	for (int i = 1; i < M; i++){
		for (int j = 1; j < N; j++)
			if (!grid[i][j]){
				grid[0][j] = grid[i][0] = 0;
            }

    }

	for (int i = 1; i < M; i++){
		for (int j = 1; j < N; j++)
			if (!grid[0][j] || !grid[i][0]){
				grid[i][j] = 0;
            }
    }

	// if row1 had any zeros, make all of it 0
	for (int i = 0; row1 && i < N; i++)
		grid[0][i] = 0;

	// if col1 had 0, make all of it 0
	for (int i = 0; col1 && i < M; i++)
		grid[i][0] = 0;
}

int main(){
	int grid[M][N] ={{1,1,1},
                    {1,0,1},
                    {1,1,1}};

	// ChangeRowCol of matrix
	ChangeRowCol(grid);

	for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
