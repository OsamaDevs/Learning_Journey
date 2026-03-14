# include <iostream>
# include <vector>
# include <string>
using namespace std;

class Stack {
private:
	int top;
	int array[5];
    int size = sizeof(array) / 4;

public:
	Stack() {
		top = -1;
		for (int i = 0; i < size; i++)
			array[i] = 0;
	}

	bool isEmpty() {

		if (top == -1)
			return true;

		else
			return false;
	}

	bool isFull() {
		if (top >= size - 1)
			return true;
		else
			return false;
	}

	void push(int element) 
	{
		if (isFull()) 
		{
			cout << "Stack overflow, Please remove an element" << endl;
		}
		else 
		{
			top++;
			array[top] = element;
		}

	}

	int pop() 
	{
		if (isEmpty()) 
		{
			cout << "Stack underflow, add an element to pop it\n";
			return 0;
		}
		else
		{
			int oldTop = array[top];
			array[top] = 0;
			top--;
			return oldTop;
		}

	}

	int count() {
		return (top + 1);
	}

	int peek(int index) {
		if (isEmpty()) {
			cout << "Stack underflow";
			return 0;
		}
		else
			return array[index];
	}

	void change(int newElement, int postion ) {
		array[postion] = newElement;
	}

	void display() {
		for (int i = size - 1; i >= 0; i--)
			cout << i << ": " << to_string(array[i]) << "\n";
		
	}
};

void printMenu() {

	cout << "What operation do you want to perform? Select option number. Enter to exit." << endl;
	cout << "1. Push()" << endl;
	cout << "2. Pop()" << endl;
	cout << "3. isEmpty() " << endl;
	cout << "4. isFull()" << endl;
	cout << "5. peek() " << endl;
	cout << "6. count()" << endl;
	cout << "7. change()" << endl;
	cout << "8. display()" << endl;
	cout << "9. Clear Screen" << endl << endl;

}



int readUserInput(string Massage) {

	int option;
	
	
	cout << Massage;
	cin >> option;

	return option;

	
	
}

void checkSwitch(Stack &stack) {
	int option;
	do
	{
	printMenu();
	option = readUserInput("Enter option from Menue: ");

	switch(option){
	case 0:
		break;
	case 1:
		stack.push(readUserInput("Enter Element to push: "));
		break;
	case 2:
		cout << "Top elemnt removed\n";
		stack.pop();
		break;
	case 3:
		if (stack.isEmpty())
			cout << "Stack is Empty"<< endl;
		else
			cout << "Stack is not Empty"<< endl;
		break;
	case 4:
		if (stack.isFull())
			cout << "Stack is Full"<< endl;
		else
			cout << "Stack is not Full"<< endl;
		break;
	
	case 5:{ 
		int index= readUserInput("Enter Index of the element you want to peek: ");
		int peekedElement = stack.peek(index);
		cout << "Element at Index " << index << " is: " << peekedElement << '\n';
	}
		break;

	case 6:
		cout << "Number of elements in Stack is: " << stack.count() << endl;
		break;
		
	case 7:{ 
		int postion = readUserInput("Enter the postion of the element you want to change: ");
		int newElement = readUserInput("Enter the New Element you want to put at postion " + to_string(postion) + ": ");
		stack.change(newElement, postion);
		cout << "Changed!" << endl;
		break;}
	case 8: 
		cout << "Stack:\n";

		stack.display();
		break;
	case 9:
		system("cls");
		break;
	default:
		cout << "option " << option << " invalid\n";
	}
	

	} while (option != 0);

}



int main() {
	Stack stack;

	checkSwitch(stack);

}