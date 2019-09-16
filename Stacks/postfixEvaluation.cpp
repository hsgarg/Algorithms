#include <iostream>
#include <stack>
using namespace std;

// Evaluate postfix expression
/*
For Digits: Push in Stack
For Operators: Pop two elements from Stack
*/

int evaluation(string str){
	stack<int> stack;

	for (int i = 0; i < str.length(); i++){

		if (str[i] >= '0' && str[i] <= '9') {
			stack.push(str[i] - '0');
		}
		
		else{
			// pop top two elements from the stack
			int x = stack.top();
			stack.pop();

			int y = stack.top();
			stack.pop();

			if(str[i] == '+')
				stack.push(y + x);

			else if(str[i] == '-')
				stack.push(y - x);

			else if(str[i] == '*')
				stack.push(y * x);

			else{
				stack.push(y / x);
            }
		}
	}
    // Top will have the evaluated answer
	return stack.top();
}


int main(){
	string str = "231*+9-";

	cout <<evaluation(str);

	return 0;
}