#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

// Comparator function
class myComparator{

public:

	bool operator()(int a1,int a2){
		return a1>a2;
	}

};


int main(){

	// This is how to create a Min Heap 
	priority_queue<int,vector<int>,greater<int> >min_heap;

    // Creating Max Heap
	priority_queue<int> max_heap;

	// Heap created byu me
	priority_queue<int,vector<int>, myComparator> my_heap;
	

	my_heap.push(11);
	my_heap.push(22);
	my_heap.push(33);
	my_heap.push(44);
	my_heap.push(55);
	my_heap.push(66);
	my_heap.push(123);

	while(!my_heap.empty()){
        
		cout<<my_heap.top()<<" ";
		my_heap.pop();
	}


	return 0;
}