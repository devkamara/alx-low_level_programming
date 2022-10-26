#include "lists.h"
/**
 * find_listint_loop - function that finds a loop and the begining of loop
 * @head: pointer to head in function
 * Return: pointer to the begining of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lion;
	listint_t *cat;

	if (head == NULL || head->next == NULL)
		return (NULL);

	lion = cat = head;

	while (lion && cat && cat->next)
	{
		lion = lion->next;
		cat = cat->next->next;
		if (lion == cat)
			break;
	}

	if (lion != cat)
		return (NULL);

	lion = head;

	while (lion != cat)
	{
		lion = lion->next;
		cat = cat->next;
	}
	return (cat);
}
