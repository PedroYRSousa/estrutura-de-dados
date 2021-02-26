#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int value;
    struct Node *next;
} Node;

void push(Node **root, int value);
int pop(Node **root);

void main()
{
    Node *root = NULL;

    printf("Adicionando 10\n");
    push(&root, 10);
    printf("Adicionando 20\n");
    push(&root, 20);
    printf("Adicionando 30\n");
    push(&root, 30);
    printf("Adicionando 40\n");
    push(&root, 40);

    printf("Removeu: %d\n", pop(&root));
    printf("Removeu: %d\n", pop(&root));
    printf("Removeu: %d\n", pop(&root));
    printf("Removeu: %d\n", pop(&root));
    printf("Removeu: %d\n", pop(&root));
}

void push(Node **root, int value)
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
int pop(Node **root)
{
    if (*root != NULL)
    {
        int value = (*root)->value;
        Node *target = *root;
        *root = (*root)->next;
        return value;
    }
    return -1;
}