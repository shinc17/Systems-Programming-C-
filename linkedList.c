#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool sWitch = true;
int mChoice;

// Define Node
typedef struct Node {
    char* fName;
    char* lName;
    int puID;
    int age;
    struct Node* rightNode;
};

// Return link length
int LinkedListLength(struct Node* startNode) {
    int length = 0;
    struct Node* tempNode = startNode;

    tempNode = (struct Node*)malloc(sizeof(struct Node));

    while (tempNode != NULL) {
        tempNode = tempNode->rightNode;
        length++;
    }

    return length;
}

// Create list with no nodes, just a start pointer
struct Node* CreateListNoNodes() {
    struct Node* blank;

    return blank;
};

// Create list with a single node. Data to fill the node is the precondition and must be passed as a parameter
struct Node* CreateListNode(char* fName, char* lName, int age, int puID) {
    struct Node* startNode = CreateListNoNodes();

    startNode = (struct Node*)malloc(sizeof(struct Node));
    startNode->fName = fName;
    startNode->lName = lName;
    startNode->puID = puID;
    startNode->age = age;
    startNode->rightNode = NULL;

    return startNode;
}

// Insert a node at the front of the list
struct Node* InsertFront(struct Node* startNode, char* fName, char* lName, int age, int puID) {
    struct Node* newNode = CreateListNode(fName, lName, age, puID);

    startNode->rightNode = newNode;

    return startNode;
}


// Insert a node in the middle of the list
struct Node* InsertMiddle(struct Node* startNode, char* fName, char* lName, int age, int puID) {
    int length = LinkedListLength(startNode);
    int middle;

    // Find the middle
    if (length == 0) {
        middle = 0;
    }
    else if (length % 2 == 1) {
        middle = (length - 1) / 2;
    }
    else {
        middle = length / 2;
    }

    struct Node* tempNode = startNode;
    for (int i = 0; i < middle - 1; i++) {
        tempNode = tempNode->rightNode;
    }

    tempNode = (struct Node*)malloc(sizeof(struct Node));

    // Insert the node that just created in middle of list
    struct Node* newNode = CreateListNode(fName, lName, age, puID);
    newNode->rightNode = tempNode->rightNode;
    tempNode->rightNode = newNode;

    return startNode;
}

// Insert a node at the end of the list
struct Node* InsertEnd(struct Node* startNode, char* fName, char* lName, int age, int puID) {
    int length = LinkedListLength(startNode);
    struct Node* tempNode = startNode;

    tempNode = (struct Node*)malloc(sizeof(struct Node));

    // Find the end of the list
    for (int i = 0; i < length - 1; i++) {
        tempNode = tempNode->rightNode;
    }

    struct Node* newNode = CreateListNode(fName, lName, age, puID);
    tempNode->rightNode = newNode;
}

// Delete the first node in the list
struct Node* DeleteFront(struct Node* startNode) {
    struct Node* tempNode = startNode;

    tempNode = (struct Node*)malloc(sizeof(struct Node));

    //Free the data of first node
    startNode = startNode->rightNode;
    free(tempNode);

    return startNode;
}

// Delete a node in the middle of the list
struct Node* DeleteMiddle(struct Node* startNode) {
    struct Node* before = startNode;
    struct Node* trash = startNode;
    struct Node* temp;

    // Check the availability to delete
    while (trash != NULL && trash->rightNode != NULL) {
        trash = trash->rightNode->rightNode;
        temp = before;
        before = before->rightNode;
    }

    temp->rightNode = before->rightNode;
    before = NULL;

    return startNode;
}

// Delete a node at the emd of the list
struct Node* DeleteEnd(struct Node* startNode) {
    int length = LinkedListLength(startNode);
    struct Node* tempNode = startNode;

    tempNode = (struct Node*)malloc(sizeof(struct Node));

    // Change the pointers in the list
    for (int i = 0; i < length - 2; i++) {
        tempNode = tempNode->rightNode;
    }

    // Reset the end Node's pointer
    tempNode->rightNode = NULL;
    free(tempNode);

    return startNode;
}

// Traverse the list based on some key values in the data portion of the node
int Traverse(struct Node* startNode, int key) {
    struct Node* tempNode = startNode;

    tempNode = (struct Node*)malloc(sizeof(struct Node));

    // Search the correct Node
    while (tempNode != NULL) {
        if (tempNode->puID == key) {
            return 0;
        }
        tempNode = tempNode->rightNode;
    }

    return -1;
}

// Find a particular node by using the PUID of each node to search
int Search(struct Node* startNode, int puid) {
    struct Node* tempNode = startNode;

    tempNode = (struct Node*)malloc(sizeof(struct Node));

    if (LinkedListLength(startNode) < puid - 1) {
        return -1;
    }

    for (int i = 0; i < puid; i++) {
        tempNode = tempNode->rightNode;
    }

    return tempNode->puID;
}

// Print the list
void PrintList(struct Node* startNode) {
    struct Node* tempNode = startNode;

    tempNode = (struct Node*)malloc(sizeof(struct Node));

    while (tempNode != NULL) {
        printf("$ %s $ > ", tempNode->fName);
        tempNode = tempNode->rightNode;
    }
    printf("NULL\n");
    printf("Length of list = %i\n", LinkedListLength(startNode));
}

int main() {
	// Make menu and get choices
	while (sWitch = true)
	{
		printf("1. CreateListNoNodes\n2. CreateListNode\n3. InsertFront\n4. InsertMiddle\n5. InsertEnd\n6. DeleteFront\n7. DeleteMiddle\n8. DeleteEnd\n9. Traverse\n10. Search\n11. Exit\n");
		scanf("%d", &mChoice);

		if (mChoice == 1)
		{
            printf(" \n");
		}
		else if (mChoice == 2)
		{
            printf(" \n");
		}
        else if (mChoice == 3)
        {
            printf(" \n");
        }
        else if (mChoice == 4)
        {
            printf(" \n");
        }
        else if (mChoice == 5)
        {
            printf(" \n");
        }
        else if (mChoice == 6)
        {
            printf(" \n");
        }
        else if (mChoice == 7)
        {
            printf(" \n");
        }
        else if (mChoice == 8)
        {
            printf(" \n");
        }
        else if (mChoice == 9)
        {
            printf(" \n");
        }
        else if (mChoice == 10)
        {
            printf(" \n");
        }
        else if (mChoice == 11)
        {
            printf("GoodBye!!\n");
            sWitch = false;
            break;
        }
		else
		{
			printf("Wrong choice. Please try again!!");
		}
	}

	getchar();

	return 0;
}
