#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head)
{
    while (head != NULL)
    {
        printf("Element: %d\n", head->data);
        head = head->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = first;

    first->data = 15;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 25;
    third->next = NULL;

    linkedListTraversal(head);

    return 0;
}