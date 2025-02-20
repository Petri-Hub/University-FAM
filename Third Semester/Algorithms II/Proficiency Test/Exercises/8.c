#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *next;
};

void pushNode(struct Node *node, int value)
{
    struct Node *head = node;

    while (head->next != NULL)
    {
        head = head->next;
    }

    printf("O topo da lista é: %d", head->value);

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    *newNode = (struct Node){value, NULL};

    head->next = newNode;
}

void showEntireList(struct Node *node)
{
    int position = 1;

    printf("\n\n");

    while (node != NULL)
    {
        printf("\nValor do %dº node: %d", position, node->value);

        node = node->next;
        position++;
    }

    printf("\n\n");
}

int main()
{
    struct Node *nodeA = (struct Node *)malloc(sizeof(struct Node));
    struct Node *nodeB = (struct Node *)malloc(sizeof(struct Node));
    struct Node *nodeC = (struct Node *)malloc(sizeof(struct Node));

    struct Node nodeD = {10, NULL};

    *nodeC = (struct Node){3, &nodeD};
    *nodeB = (struct Node){2, nodeC};
    *nodeA = (struct Node){1, nodeB};

    showEntireList(nodeA);
    pushNode(nodeA, 999);
    showEntireList(nodeA);

    return 0;
}