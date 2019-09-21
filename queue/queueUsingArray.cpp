#include<iostream>
using namespace std;

// Queue Implementation using Array
// Author: Harsh Sagar Garg

class Queue{

	int currentSize;
	int maximumSize;
	int front;
	int rear;
	int *arr;

public:
    //1: Parameterized Constructor
	Queue(int queueCapacity){
		front = 0;
		currentSize = 0;
		maximumSize = queueCapacity;
		rear = maximumSize-1;
		arr = new int[queueCapacity];
	}
    //2: Function that returns TRUE if the queue is full
	bool full(){
		return currentSize==maximumSize;
	}
    //3: Function that returns TRUE if the queue is empty
    bool empty(){
		return currentSize==0;
	}
    //4: Function that returns front element of queue
    int frontElement(){
		return arr[front];
	}
    
    //____________________ENQUEUE Function____________________//
    void enqueue(int data){
        // checking if the queue has space for new element or not
		if(!full()){
			rear = (rear+1)%maximumSize;
			arr[rear] = data;
			currentSize++;
		}
        else{
            cout<<"Queue is FULL, can NOT enter "<<data<<" in the queue" <<endl;
        }
	}
    //____________________DEQUEUE Function____________________//
	void dequeue(){
        // Checking if there are any elements present to dequeue 
		if(!empty()){
			front = (front+1)%maximumSize;
			currentSize--; 
		}
        else{
            cout<<"Queue is empty, can NOT remove more elements."<<endl;
        }
	}

	// Destructor - to prevent memory leak
	~Queue(){
	 delete[] arr;
	  } 
	
};

int main(){
    // Creating a Queue of maximum size 10
	Queue q(10);

	for(int i=1;i<=8;i++){
		q.enqueue(i);
	}
	q.dequeue();
	q.enqueue(10);
	q.enqueue(11);
 	q.enqueue(101);
  	q.enqueue(1001);

    // printing the queue
	while(!q.empty()){
		cout<<q.frontElement()<<" ";
		q.dequeue();
	}

	return 0;
}

