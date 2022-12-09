#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data = -1;
	Node* link = NULL;

};

void printlist(Node* L);

void Append(Node** L, int n){


	Node** temp = L;
	// finding the last node
	while ((*temp) -> link != NULL)
	{
		(*temp) = (*temp) -> link;
	}

	// Create new node temp and allocate memory 
	Node* newnode = new Node{n,NULL};
	(*temp) -> link = newnode;
	//printlist(*L);
	return;
}

void printlist(Node* L)
{
	Node* temp = L;

	while (temp != NULL)
	{
		cout << temp -> data ;
		cout << " ";

		temp = temp -> link;
		return;
	}
}

int main()
{
	Node* L = new Node{1,NULL};
	Append(&L,2);
	//Append(&L,3);
	//Append(&L,4);
	printlist(L);

	return 0;
}