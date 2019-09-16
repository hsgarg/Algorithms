#include <iostream>
#include <stack>
using namespace std;


// Stack function that returns minimum element
/*
Implementing this function just requires one extra Helper Stack
and some changes in Push and Pop functions

*/
class Stack{
	stack<int> s;  	
    // top eleemengt of helper is the min element always
	stack<int> helper; 

public:
	void push(int data){
		
        // Always push the data into the main stack
		s.push(data);

	    // if helper is empty, push the data into it
		if (helper.empty()) {
			helper.push(data);
		}
		else {
			// Only push the data into stack if it's <= current minimum
			if (helper.top() >= data) {
				helper.push(data);
			}
            }
	}

	int pop(){
		
		int top = s.top();
        // pop elemeny from main stack
		s.pop();

		// pop element from helper only if it is minimum
		if (top == helper.top()) {
			helper.pop();
		}

		return top;
	}

	int min(){
		return aux.top();
	}

	
};

int main(){

	Stack s;


	return 0;
}