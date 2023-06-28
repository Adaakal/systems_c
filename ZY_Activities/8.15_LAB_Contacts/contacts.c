/**A linked list is built in this lab. Make sure to keep track of the head node.

(1) Complete contacts.c to define the struct ContactNode with the following data members:

char contactName[]
char contactPhoneNumber[]
ContactNode* nextNodePtr
(2) Add the following functions:

InitializeContactNode() with parameters for name followed by phone number (1 pt)
GetName() - Accessor (1 pt)
GetPhoneNumber() - Accessor (1 pt)
InsertAfter() (2 pts)
GetNext() - Accessor (1 pt)
PrintContactNode()
Ex: if the name is Roxanne Hughes and the phone number is 443-555-2864, PrintContactNode() outputs:

Name: Roxanne Hughes
Phone number: 443-555-2864
(2) Define main() to read the name and phone number for three contacts and output each contact. Create three ContactNodes and use the nodes to build a linked list. (2 pts)

Note: End the last input line with a newline.

Ex: If the input is:

Roxanne Hughes
443-555-2864
Juan Alberto Jr.
410-555-9385
Rachel Phillips
310-555-6610
the output is:

Person 1: Roxanne Hughes, 443-555-2864
Person 2: Juan Alberto Jr., 410-555-9385
Person 3: Rachel Phillips, 310-555-6610
(3) Output the linked list using a loop to output contacts one at a time. (2 pts)

Ex:

CONTACT LIST
Name: Roxanne Hughes
Phone number: 443-555-2864

Name: Juan Alberto Jr.
Phone number: 410-555-9385

Name: Rachel Phillips
Phone number: 310-555-6610*/

#include <stdio.h>
#include <string.h>

typedef struct ContactNode_struct
{
    /* Define ContactNode struct here. */
    char contactName[50];
    char contactPhoneNumber[50];
    struct ContactNode_struct* nextNodePtr;


} ContactNode;

/* Define the functions here. */
void InitializeContactNode(ContactNode* thisNode, char nameInit[], char phoneNumInit[], ContactNode* nextLoc)
{
    strcpy(thisNode->contactName, nameInit);
    strcpy(thisNode->contactPhoneNumber, phoneNumInit);
    thisNode->nextNodePtr = nextLoc;
}

void InsertAfter(ContactNode* thisNode, ContactNode* newNode)
{
    ContactNode* tmpNext = NULL;

    tmpNext = thisNode->nextNodePtr;
    thisNode->nextNodePtr = newNode;
    newNode->nextNodePtr = tmpNext;
}

void GetName(ContactNode* thisNode, char name[])
{
    strcpy(name, thisNode->contactName);
}

void GetPhoneNumber(ContactNode* thisNode, char num[])
{
    strcpy(num, thisNode->contactPhoneNumber);
}

ContactNode* GetNextContact(ContactNode* thisNode)
{
    return thisNode->nextNodePtr;
}

void PrintContactNode(ContactNode* thisNode)
{
    printf("Name: %s\n", thisNode->contactName);
    printf("Phone number: %s\n", thisNode->contactPhoneNumber);
}



int main(void)
{
    /* Type your code here. */
    ContactNode* head = NULL;
    ContactNode* tail = NULL;
    ContactNode* tmp = NULL;
    char name[50];
    char phoneNum[50];

    // Create three ContactNodes and use the nodes to build a linked list.









    for (int i = 0; i < 3; i++)
    {
        printf("Person %d\n", i + 1);
        printf("Enter name:\n");
        fgets(name, 50, stdin);
        name[strlen(name) - 1] = '\0';
        printf("Enter phone number:\n");
        fgets(phoneNum, 50, stdin);
        phoneNum[strlen(phoneNum) - 1] = '\0';
        printf("You entered: %s, %s\n", name, phoneNum);

        tmp = (ContactNode*)malloc(sizeof(ContactNode));
        InitializeContactNode(tmp, name, phoneNum, NULL);

        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            InsertAfter(tail, tmp);
            tail = tmp;
        }
        printf("\n");
    }

    return 0;
}
