# Pilha

Nas listas podemos, **Adicionar** e  **Remover**.

Porem existe uma regra para adicionar e remover, o primeiro elemento que for adicionado deve ser o ultimo a ser removido (FILO).

Para adicionar usamos **push**.

Para remover usamos **pop**.

> /Exemplo/stack.c

### Adicionar
> Complexidade = O(1)
~~~
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
~~~
### Remover
> Complexidade = O(1)
~~~
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
~~~

### Conclusão

Diferente da fila a pilha é mais rápida.