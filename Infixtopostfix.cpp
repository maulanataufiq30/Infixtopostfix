#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<typename F>
class Stack{
 public:
 	Stack();//creates the stack
 	bool isempty(); // returns true if the stack is empty
 	F gottop();//returns the front of the list 
 	void push(F entry);//add entry to the top of the stack
 	void pop();//remove the top of the stack
 private:
 	vector<F> stack;
}; // Stack

template<typename F>
Stack<F>::Stack(){
	
}

template<typename F>
bool Stack<F>::isempty(){ 
	if (stack.size() == 0)
		return true;
	else
		return false;
}

template<typename F>
F Stack<F>::gottop(){
	return stack[stack.size()-1];
}

template<typename F>
void Stack<F>::push(F entry){
   stack.push_back(entry);
}

template<typename F>
void Stack<F>::pop(){
   stack.pop_back();
}
