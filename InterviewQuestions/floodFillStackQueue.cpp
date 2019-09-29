#include <iostream>
#include<queue>
using namespace std;

// Applications Discussed in Class:
// 1) Rotten Oranges
// 2) Kinght's Path(Chess

/*
Rotten Oranges:
############Use Delimintaor################
-Create an empty queue, then push the rotten oranges to queue as well
- push a deliminator to mark the start of next second/minute
-while(q not empty):
pop an orange and rot adj oranges...inc time by 1
when delim is reached, pop it and push it in queue again
*/

/*

Knight:
1) Create an Empty Q, push src in Q
2)pop univisted node from Q: 1) its the destination node: return its distance
                             2)mark the current node as visited node, push valid configs in Q with dist+1


*/
/*
At the given index i,j replace current column by colorToBeReplaced column
and then do the same for the 8 adjacent cells
1) If column of grid[row][column] is not same as column, then return ....2) If i or j is outside the grid, then return.
3) Recur for north, south, east and west.
    floodRec(grid, row+1, column, column, jiseRakhnaHai);
    floodRec(grid, row-1, column, column, jiseRakhnaHai);
    floodRec(grid, row, column+1, column, jiseRakhnaHai);
    floodRec(grid, row, column-1, column, jiseRakhnaHai);
*/

bool isSafe(int grid[9][9], int row, int column,int colorTobeChanged){
    if(row>=0 && row<9 && column>=0 && column<9 &&grid[row][column]==colorTobeChanged){
        return true;
    }
    else{
        return false;
    }
    
}
void floodStack(int grid[9][9], int row, int column, int colorTobeChanged, int jiseRakhnaHai)
{
    if(!isSafe(grid,row,column,colorTobeChanged)){
        return;
    }
    grid[row][column]=jiseRakhnaHai;
//check North
floodStack(grid,row-1,column,colorTobeChanged,jiseRakhnaHai);
//East
floodStack(grid,row,column+1,colorTobeChanged,jiseRakhnaHai);
//West
floodStack(grid,row,column-1,colorTobeChanged,jiseRakhnaHai);
//south
floodStack(grid,row+1,column,colorTobeChanged,jiseRakhnaHai);

}

int interRow[]={-1,-1,-1,0,0,1,1,1};
int iterCol[]={-1,0,1,-1,1,-1,0,1};

void floodFillUsingQueue(int grid[][9],int row, int column, int colorTobeChanged, int jiseRakhnaHai){

    //create q queue
    queue<pair<int,int>>floodQ;
    floodQ.push({row,column});

    //till q not emptey
    while(!floodQ.empty()){
        //pop an element and pwork on it
        pair<int ,int>node=floodQ.front();
        floodQ.pop();

        // row, column rep current index
        int row=node.first;
        int col=node.second;

    //replace 
    grid[row][col]=jiseRakhnaHai;\

    // process all adjacent 
    for(int k=0;k<8;k++){
        if(isSafe(grid,row+interRow[k],col+iterCol[k],colorTobeChanged)){
            floodQ.push({row+interRow[k],col+iterCol[k]});
        }
    }
    }



}


int main() {
    // wikipedia example
        int grid[9][9]= {{1, 1, 1, 1, 1, 1, 1, 1,1},
                        {1, 0, 0, 0, 1, 0, 0, 0,1},
                        {1, 0, 0, 0, 1, 0, 0, 0,1},
                        {1, 0, 0, 1, 0, 0, 0, 0,1},
                        {1 ,1 ,1 ,0 , 0, 0, 1, 1, 1},
                        {1, 0, 0, 0, 0, 1, 0, 0, 1},
                        {1, 0, 0, 0, 1, 0, 0, 0,1},
                        {1, 0, 0, 0, 1, 0, 0, 0,1},
                        {1, 1, 1, 1, 1, 1, 1, 1,1}
                        };
    cout<<"Before Flood Fill "<<endl;
      for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    int row, column;
    cin>>row>>column;
    int jiseRakhnaHai;
    cin>>jiseRakhnaHai;
    int colorTobeChanged=grid[row][column];
   // floodStack(grid,row,column,colorTobeChanged,jiseRakhnaHai);
   floodFillUsingQueue(grid,row,column,colorTobeChanged,jiseRakhnaHai);
    cout<<"After Print"<<endl;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}
// give 4 4 3   as input and check 
