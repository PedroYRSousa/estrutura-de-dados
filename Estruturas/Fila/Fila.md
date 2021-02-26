# Listas

Nas listas podemos, **Adicionar** e  **Remover**.

Porem existe uma regra para adicionar e remover, o primeiro elemento que for adicionado deve ser o primeiro a ser removido (FIFO).

Para adicionar usamos **enqueue**.

Para remover usamos **dequeue**.

> /Exemplo/queue.c

### Adicionar
> Complexidade = O(1)
~~~
Node *enqueue(Node *root, int value)
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
~~~
### Remover
> Complexidade = O(n)
~~~
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
~~~

### Conclusão

A fila é uma estrutura simples, com um proposito especifico, quando queremos ter controle sobre a ordem de alguma coisa. Podemos tornar a remoção em uma complexidade O(1), mas para isso iriamos aumentar o custo de RAM. Caso fizéssemos uma struct de uma lista duplamente encadeada e tivéssemos um ponteiro **root** para o inicio e um **end** para o final, poderíamos adicionar e remover rapidamente, mas como disse aumentando o custo da RAM.