#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for a node of a doubly linked list
struct Node {
    char name[50];
    char surname[50];
    char jmbg[14];
    struct Node* next;
    struct Node* prev;
};

// Function to add a new node at the end of the list
void add_at_end(struct Node** head, char name[], char surname[], char jmbg[]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->name, name);
    strcpy(newNode->surname, surname);
    strcpy(newNode->jmbg, jmbg);
    newNode->next = NULL;
    newNode->prev = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }

    last->next = newNode;
    newNode->prev = last;
}

// Function to display elements of the list in both directions
void display(struct Node* head) {
    struct Node* current = head;

    printf("List forward:\n");
    while (current != NULL) {
        printf("Name: %s, Surname: %s, JMBG: %s\n", current->name, current->surname, current->jmbg);
        current = current->next;
    }

    printf("List backward:\n");
    while (current->prev != NULL) {
        current = current->prev;
        printf("Name: %s, Surname: %s, JMBG: %s\n", current->name, current->surname, current->jmbg);
    }
}
// Main function
int main() {
    struct Node* head = NULL;
    int n;
    char name[50], surname[50], jmbg[14];

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter the name of person %d: ", i + 1);
        scanf("%s", name);
        printf("Enter the surname of person %d: ", i + 1);
        scanf("%s", surname);
        printf("Enter the JMBG of person %d: ", i + 1);
        scanf("%s", jmbg);

        add_at_end(&head, name, surname, jmbg);
    }

    printf("List of persons:\n");
    display(head);

    return 0;
}
