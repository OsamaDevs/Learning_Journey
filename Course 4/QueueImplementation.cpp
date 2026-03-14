#include <iostream>
# include <vector>
using namespace std;

class Queue {
private:

	vector <int> vector1;
	int rear;
	int front;


public:
	Queue(int size)
	{
		front = -1;
		rear = -1;

		for (int i = 0; i < size; i++)
			vector1.push_back(0);
	}

	bool isEmpty()
	{
		if (rear == -1 && front == -1)
			return true;
		else
			return false;

	}

	bool isFull() {
		if (rear == vector1.size() - 1)
			return true;
		else
			return false;

	}

	bool has1Element() {
		if (rear == 0 && front == 0)
			return true;
		else
			return false;

	}

	void enqueue(int element)
	{
		if (isFull()) {
			cout << "Can't enqueue, Queue is Full.\n";
			return;
		}
		else if (isEmpty()) {
			rear++;
			front++;
			vector1[rear] = element;
		}
		else {
			rear++;
			vector1[rear] = element;
		}

		cout << "Element Enqueued Successfully\n";

	}

	int dequeue() {
		int tempraryElement;
		if (isEmpty()) {
			cout << "Queue Is Empty";
			return 0;
		}
		else if (has1Element())
		{
			tempraryElement = vector1[0]; // can be front instead of 0
			vector1[0] = 0;
			rear = -1;
			front = -1;

			return tempraryElement;
		}
		else
		{
			tempraryElement = vector1[front];
			vector1[front] = 0;
			front++;

			return tempraryElement;
		}


	}

	int count()
	{
		return rear - front + 1;
	}

	int queueSize() {
		return vector1.size();
	}

	void display() {
		cout << "Rear:   ";
		for (int i = vector1.size() - 1; i > 0; i--)
			cout << vector1[i] << " ";
		cout << "    :Front\n";

	}
};

void showMenu() {

	cout << "\n\nWhat operation do you want to perform? Select Option number." << endl;
	cout << "0. Exit" << endl;
	cout << "1. Enqueue()" << endl;
	cout << "2. Dequeue()" << endl;
	cout << "3. isEmpty()" << endl;
	cout << "4. isFull()" << endl;
	cout << "5. count()" << endl;
	cout << "6. display()" << endl;
	cout << "7. Clear Screen" << endl << endl;
}

int readInput(string message)
{

	int input;
	cout << message;
	cin >> input;
	return input;

}

void doOperation(int option, Queue	q) {

	switch (option) {
	case 0:
		cout << "You enterd Zero, BYE!" << endl;
		break;

	case 1:
	{
		int enqueued = readInput("Enter the element you want to Enqueu: ");
		q.enqueue(enqueued);

		break;
	}
	case 2:
		cout << "Dequeued " << q.dequeue() << "\n";
		break;
	case 3:
		if (q.isEmpty())
			cout << "Queue is Empty at size of: " << q.queueSize() << endl;
		else
			cout << "Queue is NOT Empty at size of: " << q.queueSize() << "\n";
		break;
	case 4:
		if (q.isFull())
			cout << "Queue is Full at size of: " << q.queueSize() << endl;
		else
			cout << "Queue is NOT Full at count of: " << q.count() << "\n";
		break;

	case 5:
		cout << "Number of elements in Queue is: " << q.count() << endl;
		break;

	case 6:
		q.display();
		break;

	case 7:
		system("cls");
		break;

	default:
		cout << "Invalid Option, Please try Agian!" << endl;

	}

}

void choice(Queue queue) {

	int option;


	do {

		showMenu();
		option = readInput("Enter option: ");
		doOperation(option, queue);

	} while (option != 0);






}




int main() {

	Queue queue(readInput("Enter the size of Queue: "));

	choice(queue);



}