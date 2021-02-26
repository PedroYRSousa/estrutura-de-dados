#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int value;
    struct Node *next;
} Node;

void enqueue(Node **root, int value);
int dequeue(Node **root);

void main()
{
    Node *root = NULL;

    printf("Adicionando 10\n");
    enqueue(&root, 10);
    printf("Adicionando 20\n");
    enqueue(&root, 20);
    printf("Adicionando 30\n");
    enqueue(&root, 30);
    printf("Adicionando 40\n");
    enqueue(&root, 40);

    printf("Removeu: %d\n", dequeue(&root));
    printf("Removeu: %d\n", dequeue(&root));
    printf("Removeu: %d\n", dequeue(&root));
    printf("Removeu: %d\n", dequeue(&root));
    printf("Removeu: %d\n", dequeue(&root));
}

void enqueue(Node **root, int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = *root;
    if (*root == NULL)
        *root = newNode;
    else
    {
        newNode->next = *root;
        *root = newNode;
    }
}
int dequeue(Node **root)
{
    Node *ptr = *root;
    Node *target = ptr;
    while (ptr != NULL)
    {
        if (target->next == NULL)
        {
            if (target == *root)
                *root = NULL;
            else
                ptr->next = NULL;
            int value = target->value;
            free(target);
            return value;
        }
        ptr = target;
        target = target->next;
    }
    return -1;
}