#include <iostream>
using namespace std;

//spiral print

void spiralPrint(int arr[][170],int row,int col){

	int sr=0,er=row-1;
    int startCol=0,endCol=col-1;

	while(sr<=er && startCol<=endCol){
		//print start row
		for(int i=startCol;i<=endCol;i++){
			cout<<arr[sr][i]<<" ";
		}
		sr++;

		//print end column
		for(int j=sr;j<=er;j++){
			cout<<arr[j][endCol]<<" ";
		}
		endCol--;

		if(sr<er){
			//print end row
			for(int i=endCol;i>=startCol;i--){
				cout<<arr[er][i]<<" ";
			}
			er--;
		}

		if(startCol<endCol){
			//print start column
			for(int j=er;j>=sr;j--){
				cout<<arr[j][startCol]<<" ";
			}
			startCol++;
		}}
}

int main(){
	int arr[170][170];
	int row,col;
	cout<<"Enter Rows and Columns";
	cin>>row;
    cin>>col;
	int value=1;

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			arr[i][j]=value;
			value++;
		}}

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){

			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
    spiralPrint(arr,row,col);

	cout<<endl;
	return 0;
}
