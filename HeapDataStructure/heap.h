#include<iostream>
#include<vector>
using namespace std;

// Heap Data Structure: Harsh Sagar Garg

class minHeap{
	vector<int> vec;

	void heapify(int idx){

		int left = 2*idx;
		int right = left + 1;

		int min_index = idx;

		if(left<vec.size() && vec[min_index]>vec[left]){
				min_index = left;
		}
		if(right<vec.size() && vec[min_index]>vec[right]){
		  		min_index = right;
		}
		if(idx!=min_index){
			swap(vec[idx],vec[min_index]);
			heapify(min_index);
		}
	}

public:
	
	minHeap(){
		vec.push_back(-1);	
	}
	void push(int data){
		vec.push_back(data);

		int idx = vec.size() - 1;
		int parent = idx/2;

		while(idx > 1 && vec[idx]<vec[parent] ){
			swap(vec[idx],vec[parent]);
			idx = parent;
			parent = parent/2;
		}
	}
	int top(){
		return vec[1];
	}
	void pop(){
		int last = vec.size() - 1;
		swap(vec[1],vec[last]);
		vec.pop_back();
		heapify(1);
	}
	bool empty(){
		return vec.size()==1;
	}
};