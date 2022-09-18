#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next
};
class Linkedlist{
public:
	Node*head
	Linkedlist()
	{
		head = NULL;
	}
	/*bool isempty()
	{
		if (head == NULL)
			return true;
		else
			return false;
	}*/
	bool isempty() {
		return (head == NULL);
	}
	void insertfirst(int newvalue)
	{
		Node* newnode;
		newnode->data = newvalue;
		if (isempty())
		{
			newnode->next = NULL;
			head = newnode;
		}
		else
		{
			newnode->next = head;
			head = newnode;
		}

	}

	void display()
	{
		Node* temp = head;
		while (temp != NULL) {
			cout << temp - < data << "";
			temp = temp->next;
		}
	}
	int count()
	{
		int counter = 0;
		Node* temp = head;
		while (temp != NULL) {
			counter++;
			temp = temp->next;
		}
		return counter;
	}
	bool isfound(int key)
	{
		Node* temp = head;
		while (temp != NULL) {
			if (tump->data == key)
				found = true;
			temp = temp->next; 
		}
		return found;
	} 

	void insertbefor(int item, int newvalue)
	{ 
		if (isfound(item)) {
			Node* newnode;
			newnode->data = newvalue;
			node* temp = head;
			while (temp != NULL && node->next)
			{
				temp = temp->next;
			}
			newnode->next = temp->next;
			temp->next = newnode;
		}
		else
			cout << "item not found \n ";

	}


};
	

int main()
{
	Linkedlist lst;
	if (lst.isempty())
		cout << "the list is empty";
	else
		cout << "the list contains " << lst.count() << endl;
	int item;                                       //should use loop but what its end?? 
	cout << "enter item to insert in the list \n";
	cin >> item;
	lst.insertfirst();
	lst.display();
	int item;
	cout << "enter item to insert in the list \n";
	cin >> item;
	lst.insertfirst();
	lst.display();
	int item;
	cout << "enter item to insert in the list \n";
	cin >> item;
	lst.insertfirst();
	lst.display();
	cout << "the list contains" << lst.count() << endl;
	cout << "enter item to search for \n";
	cin >> item;
	if (lst.isfound(item))
		cout << "item found \n"
	else
		cout << "item not found \n"
		int newvalue;
	cout << "enter item and new value ";
	cin >> item >> newvalue;
	lst.insertbefore(item, newvalue);
	lst.display(); 



}

