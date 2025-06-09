#include <stdio.h>
#include <stdlib.h> // Required for dynamic memory allocation

/*
 * This program allows the user to create a singly linked list interactively.
 * The user can input values for each node and decide when to stop adding nodes.
 */

int main()
{
    // Define a structure for a node in the linked list
    struct node
    {
        int data;           // Holds the data (integer value)
        struct node *next;  // Points to the next node in the list
    };

    // Declare pointers to manage the linked list
    struct node *head = NULL; // Head pointer for the start of the list
    struct node *newnode, *temp; // Temporary pointers for operations

    int choice = 1; // Variable to control whether the user wants to continue

    /*
     * Loop to take input from the user and create the linked list.
     * The user decides when to stop adding new nodes.
     */
    while (choice)
    {
        // Allocate memory dynamically for a new node
        newnode = (struct node *)malloc(sizeof(struct node));

        // Check if memory allocation was successful
        if (newnode == NULL)
        {
            printf("Memory allocation failed!\n");
            return 1; // Exit the program if malloc fails
        }

        // Input data for the new node
        printf("Enter data for the new node: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL; // Initialize the new node's next pointer to NULL

        // If the list is empty, initialize the list with the new node
        if (head == NULL)
        {
            head = temp = newnode; // Set head and temp to point to the first node
        }
        else // If the list is not empty
        {
            temp->next = newnode; // Link the new node to the end of the list
            temp = newnode;       // Move temp to the new last node
        }

        // Ask the user if they want to continue adding nodes
        printf("Do you want to add another node? (1 for Yes / 0 for No): ");
        scanf("%d", &choice);
    }

    /*
     * Traverse and display the linked list
     * The list will be printed in the order nodes were added.
     */
    printf("\nThe linked list you created is:\n");
    temp = head; // Start from the first node
    while (temp != NULL) // Traverse until reaching the end of the list
    {
        printf("%d ", temp->data); // Print the data stored in the current node
        temp = temp->next;         // Move to the next node
    }
    printf("\n"); // Newline for better formatting

    /*
     * Free the memory used by the nodes to prevent memory leaks.
     */
    temp = head; // Start from the head node
    while (temp != NULL)
    {
        struct node *next = temp->next; // Save the next node
        free(temp);                     // Free the current node
        temp = next;                    // Move to the next node
    }

    return 0; // Indicate successful program termination
}
