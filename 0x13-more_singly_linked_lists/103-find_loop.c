#include "lists.h"

/**
 * find_listint_loop - function that finds a loop and the begining of loop
 * @head: pointer to head in function
 * Return: pointer to the begining of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *val1;
	listint_t *val2;

	if (head == NULL || head->next == NULL) /*If the list is null or just 1 node*/
		return (NULL);

	val1 = val2 = head; /*Start at the same point*/

	while (val1 && val2 && val2->next)
	{
		val1 = val1->next;
		val2 = val2->next->next;
		if (val1 == val2)
			break;
	}

	if (val1 != val2) /* if the while ended until a NULL*/
		return (NULL);

	val1 = head; /*re-start val1*/

	while (val1 != val2)
	{
		val1 = val1->next;
		val2 = val2->next;
	}
	return (val2);
}
