#include<iostream>
using namespace std;

struct Node
{
	int val;
	struct Node *next;
};

class List
{
private:
	Node *head, *tail;
public:
	List()
	{
		head = NULL;
		tail = NULL;
	}
	void addNode(int n)	{
		Node *tmp = new Node;
		tmp -> val = n;
		tmp -> next = NULL;
		if (head == NULL)	{
			head = tmp;
			tail = tmp;
		}
		else 
		{
			tail -> next = tmp;
			tail = tail -> next;
		}
	}
	void deleteNode(Node *del)
	{
		Node *tmp;
		tmp = del -> next;
		del -> next = tmp -> next;
		delete tmp;
	}
	Node *getNode(int des)
	{
		Node *tmp;
		tmp = head;
		for (int i = 0; ;i++)	{
			if (i == des-2)	
				return tmp;
			tmp = tmp -> next;
		}

	}
	void display()
	{
		Node *tmp;
		tmp = head;
		while(tmp != NULL)	{
			cout << tmp -> val << endl;
			tmp = tmp -> next;
		}
	}
};

int main()	{
	List node;
	int n,k;
	cin >> n;
	for (int i = 0; i < n; i++)	{
		int tmp;
		cin >> tmp;
		node.addNode(tmp);
	}
	cin >> k;
	node.deleteNode(node.getNode(n-k+1));
	node .display();
}