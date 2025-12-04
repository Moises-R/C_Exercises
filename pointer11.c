#include <stdio.h>
#include <stdlib.h> //for malloc, free

//Pointer2 Q11 - linkedlist implementation

//info to use:
//implement a singly linked list using structs and pointers
//singly linked list has nodes with data, then a next pointer
//head is first node, and it has null at end

//struct for a node in singly linked list
struct Node
{
	//int for data
	int data;
	//struct for next node and its pointer using *
	struct Node *next;
};

//function to insert node at beginning of list (must edit where head points to)
void insertBeginning(struct Node **head, int value)
{
	// uses ** double pointer^  for pointer of head pointer
	//struct for new node with malloc
	struct Node *nodeToAdd = malloc(sizeof(struct Node));

	//put value into node with ->
	nodeToAdd->data = value;

	//point next to current head to link it in front of the list
	nodeToAdd->next = *head;

	//updates head to point to node that  we're adding
	*head = nodeToAdd;
}

//functiion to delete a specific node
void deleteNode(struct Node **head, int value)
{
	//if head is empty for nul list, checks
	if(*head == NULL)
	{
		return; //stops method
	}

	//creates struct for temp head pointer
	struct Node *temp = *head;

	//now for next case, if head contains value
	if( temp->data == value)
	{
		*head = temp->next; //moves head pointer to next node
		free(temp); //deletes old head with free
		return;
	}

	//next case, looks for node before node to delete to change pointer to next
	//uses while loop while next of temp isn't null
	//also ensures data matches value we're trying to delete
	while( temp->next != NULL && temp->next->data != value)
	{
		//temp moves next in list
		temp = temp->next;
	}

	//now that it stopped, checks if value is not found(wouldve stopped w/ loop)
	//couldve stopped at end or at the node to delete, so this checks if its at end
	if(temp->next == NULL)
	{
		return; //ends method
	}

	//if method still runs at this point, we've found value to delete
	//uses temp->next to find the mnode to delete since we're at prev node
	struct Node *deletedNode  = temp->next;

	//passes over next pointer to the one after deletenode
	temp->next = deletedNode->next;

	free(deletedNode); //free to prevent memory leak
}


//function to print all elmemnts list, traversing with pointer
void printElements(struct Node* head)
{
	//temp ptr struct for head node
	struct Node *tempPtr = head;

	//prints elements with while loop as long as temp isnt null
	printf("List elements: ");
	while( tempPtr != NULL)
	{
		//prints each data value
		printf("%d ", tempPtr->data);
		//moves forward in list with temp
		tempPtr = tempPtr->next;
	}

	//at end of traversal, prints null cause its at the end by default
	printf("NULL\n");
}

//main
int main()
{
	//creates struct Node ptr to add values with later
	struct Node *head = NULL; //starts empty

	//inserts each of these values in the beginning
	//starst with &head addresso fhead, and value to add as args)
	insertBeginning(&head, 1);
	insertBeginning(&head, 2);
	insertBeginning(&head, 3);

	//prints list after inserting these 3 values^
	printf("This is the list after adding 1, 2, 3 values at beginning:\n");
	printElements(head);

	//deletes node with value of 2 to show delete method
	deleteNode(&head, 2);

	//prints list after deleting 2
	printf("This is the list after deleting node of value 2:\n");
	printElements(head);

	//insert another at start to show it works
	insertBeginning(&head, 67);

	//says it added it then prints to show new list
	printf("This is the list after inserting 67 at beginning:\n");
	printElements(head);

	//end main
	return 0;
}
