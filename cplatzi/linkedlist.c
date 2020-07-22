#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int number;
	struct Node *next;
} NODE;

NODE *createNode(int number)
{
	NODE *newNode;

	newNode = malloc(sizeof(NODE));
	newNode->next = NULL;
	newNode->number = number;
}

int main(int argc, const char *arg[])
{
	NODE *start = NULL, *current, *next;
	char goOn;
	int listSize = 0, number;

	do
	{
		printf("La lista contiene %d nodos. Ingrese el siguinte number (0 para finalizar)\n", listSize);
		scanf("%d", &number);
		if (number)
		{
			if (!start)
			{
				start = createNode(number);
			}
			else
			{
				current = start;
				while (current->next)
				{
					current = current->next;
				}
				current->next = createNode(number);
			}
			goOn = 1;
		}
		else
		{
			goOn = 0;
		}
		listSize++;
	} while (goOn);
	current = start;
	printf("La lista contiene los numeros: \n");
	while (current)
	{
		printf("%d", current->number);
		printf(current->next ? "," : "\n");
		current = current->next;
	}

	current = start;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	return 0;
}
