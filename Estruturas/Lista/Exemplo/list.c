#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int value;
    struct Node *next;
} Node;

Node *nodeAdd(Node *root, int value);
Node *nodeRemove(Node *root, int value);
Node *nodeContains(Node *root, int value);
Node *nodeUpdate(Node *root, int oldValue, int newValue);
void nodeTravel(Node *root);

void main()
{
    Node *root = NULL;

    root = nodeAdd(root, 10);
    root = nodeAdd(root, 20);
    root = nodeAdd(root, 30);
    root = nodeAdd(root, 40);
    printf("-------------------\n");
    nodeTravel(root);
    root = nodeUpdate(root, 10, 100);
    root = nodeUpdate(root, 20, 200);
    printf("-------------------\n");
    nodeTravel(root);
    root = nodeRemove(root, 200);
    printf("-------------------\n");
    nodeTravel(root);

    if (nodeContains(root, 10) != NULL)
        printf("Contem!\n");
    else
        printf("Não contem\n");
    if (nodeContains(root, 100) != NULL)
        printf("Contem!\n");
    else
        printf("Não contem\n");
}

Node *nodeAdd(Node *root, int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;
    if (root == NULL)
        root = newNode;
    else
    {
        Node *ptr = root;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = newNode;
    }
    if (root == NULL)
        printf("root\n");
    return root;
}
Node *nodeRemove(Node *root, int value)
{
    Node *ptr = root;
    Node *target = ptr->next;
    while (ptr != NULL)
    {
        if (target != NULL)
        {
            if (target->value == value)
            {
                ptr->next = target->next;
                free(target);
                break;
            }
        }
        ptr = ptr->next;
        target = ptr->next;
    }
    return root;
}
Node *nodeUpdate(Node *root, int oldValue, int newValue)
{
    Node *ptr = root;
    while (ptr != NULL)
    {
        if (ptr->value == oldValue)
        {
            ptr->value = newValue;
            break;
        }
        ptr = ptr->next;
    }
    return root;
}
Node *nodeContains(Node *root, int value)
{
    Node *ptr = root;
    while (ptr != NULL)
    {
        if (ptr->value == value)
            break;
        ptr = ptr->next;
    }
    return ptr;
}
void nodeTravel(Node *root)
{
    Node *ptr = root;
    int index = 0;
    while (ptr != NULL)
    {
        printf("%d: [value: %d | next: %x]\n", index, ptr->value, ptr->next);
        ptr = ptr->next;
        index++;
    }
}