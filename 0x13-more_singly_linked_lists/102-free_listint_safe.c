#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: double pointer to the head of the linked list
 *
 * Description: This function can free lists with a loop.
 * It goes through the list only once and sets the head to NULL.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t counter = 0;
    listint_t *current_node;
    listint_t *temp_node;
    listint_t *checker_node;

    if (h == NULL || *h == NULL)
        return (0);

    current_node = *h;
    while (current_node != NULL)
    {
        checker_node = *h;
        while (checker_node != current_node)
        {
            if (checker_node == current_node->next)
            {
                *h = NULL;
                return (counter);
            }
            checker_node = checker_node->next;
        }

        temp_node = current_node->next;
        free(current_node);
        current_node = temp_node;
        counter++;
    }

    *h = NULL;
    return (counter);
}
