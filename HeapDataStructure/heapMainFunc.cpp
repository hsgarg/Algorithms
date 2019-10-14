#include<iostream>
#include "heap.h1"
using namespace std;

// Heap Data Structure : Using heap.h header file
int main(){

	minHeap h1;

	h1.push(89);
	h1.push(23);
	h1.push(22);
	h1.push(90);
	h1.push(21);
	h1.push(19);
	h1.push(93);
    h1.push(193);

	while(!h1.empty())
    {
		cout<<h1.top()<<" ";
		h1.pop();
	}
	
}