#include "libmx.h"

void mx_pop_back(t_list **head) {
    t_list *temp = *head;

    if (head == NULL || *head == NULL)
        return;
    if (temp->next == NULL) {
        free(*head);
        *head = NULL;
    } 
    else {
        while (temp->next->next != NULL)
            temp = temp->next;
        free(temp->next);
        temp->next = NULL;
    }
}
