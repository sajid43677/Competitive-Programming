
#include <bits/stdc++.h>
using namespace std;

// Taking size of stack as 10
#define SIZE 100

// Class
// To represent stack using template by class
// taking class in template
template <class T> class Stack {
	// Public access modifier
public:
	// Empty constructor
	Stack();

	// Method 1
	// To add element to stack which can be any type
	// using stack push() operation
	void push(T k);

	// Method 2
	// To remove top element from stack
	// using pop() operation
	T pop();

	// Method 3
	// To print top element in stack
	// using peek() method
	T topElement();

	// Method 4
	// To check whether stack is full
	// using isFull() method
	bool isFull();

	// Method 5
	// To check whether stack is empty
	// using isEmpty() method
	bool isEmpty();

private:
	// Taking data member top
	int top;

	// Initialising stack(array) of given size
	T st[SIZE];
};

// Method 6
// To initialise top to
// -1(default constructor)
template <class T> Stack<T>::Stack() { top = -1; }

// Method 7
// To add element element k to stack
template <class T> void Stack<T>::push(T k)
{

	// Checking whether stack is completely filled
	if (isFull()) {
		// Display message when no elements can be pushed
		// into it
		cout << "Stack is full\n";
	}

	// Inserted element
	cout << "Inserted element " << k << endl;

	// Incrementing the top by unity as element
	// is to be inserted
	top = top + 1;

	// Now, adding element to stack
	st[top] = k;
}

// Method 8
// To check if the stack is empty
template <class T> bool Stack<T>::isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}

// Utility methods

// Method 9
// To check if the stack is full or not
template <class T> bool Stack<T>::isFull()
{
	// Till top in inside the stack
	if (top == (SIZE - 1))
		return 1;
	else

		// As top can not exceeds th size
		return 0;
}

// Method 10
template <class T> T Stack<T>::pop()
{
	// Initialising a variable to store popped element
	T popped_element = st[top];

	// Decreasing the top as
	// element is getting out from the stack
	top--;

	// Returning the element/s that is/are popped
	return popped_element;
}

// Method 11
template <class T> T Stack<T>::topElement()
{
	// Initialising a variable to store top element
	T top_element = st[top];

	// Returning the top element
	return top_element;
}
int precedence(char c)
{
	if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}

void evalute(string s){
    int result = 0;
    stack <char> st;
    for(int i = 0; i < s.size();i++){
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')
			|| (s[i] >= '0' && s[i] <= '9'))
			st.push(s[i]);
        else{
            if(s[i] == '+'){
                int b = st.top() - '0';
                st.pop();
                int a = 0;
                if(result != 0){
                    a = result;
                }
                else{
                    a = st.top() - '0';
                    st.pop();
                }
                result = a + b;
            }
            else if(s[i] == '-'){
                int b = st.top() - '0';
                st.pop();
                int a = 0;
                if(result != 0){
                    a = result;
                }
                else{
                    a = st.top() - '0';
                    st.pop();
                }
                result = a - b;
            }
            else if(s[i] == '*'){
                int b = st.top() - '0';
                st.pop();
                int a = 0;
                if(result != 0){
                    a = result;
                }
                else{
                    a = st.top() - '0';
                    st.pop();
                }
                result = a * b;
            }
            else if(s[i] == '/'){
                int b = st.top() - '0';
                st.pop();
                int a = 0;
                if(result != 0){
                    a = result;
                }
                else{
                    a = st.top() - '0';
                    st.pop();
                }
                result = a / b;
            }
        }
    }
    cout << "Evalute: " << result << endl;
}

void infixToPostfix(string s)
{

	stack<char> st; 
	string output;

	for (int i = 0; i < s.length(); i++) {
		char a = s[i];
		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')
			|| (a >= '0' && a <= '9'))
			output += a;
		else if (a == '(')
			st.push('(');
		else if (a == ')') {
			while (st.top() != '(') {
				output += st.top();
				st.pop();
			}
			st.pop();
		}
		else {
			while (!st.empty()
				&& precedence(s[i]) <= precedence(st.top())) {
				output += st.top();
				st.pop();
			}
			st.push(a);
		}
	}
	while (!st.empty()) {
		output += st.top();
		st.pop();
	}

	cout << output << endl;
    evalute(output);
}

int main()
{
	string exp = "";
    cin >> exp;
	infixToPostfix(exp);
	return 0;
}
