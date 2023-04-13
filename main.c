#include <stdio.h>
#include <stdlib.h>
#include "header_file.h"
#include "./sections/body.h"
#include "./sections/head.h"

int main()
{
    struct node *list;
    list = NULL;
    append(&list, "<!DOCTYPE html>\n");
    append(&list, "<html lang=\"en\">\n");
    head(&list);
    body(&list);
    append(&list, "\n</html>");
    display(list);

    return 0;
}

void display(struct node *q)
{
    int i;
    FILE *f;
    f = fopen("./index.html", "w");

    while (q != NULL)
    {
        i = 0;
        while ((q->str)[i] != '\0')
        {
            fprintf(f, "%c", (q->str)[i]);
            i++;
        }
        q = q->link;
    }
    fclose(f);
}

void append(struct node **q, char *str)
{
    struct node *temp, *r;
    temp = *q;

    if (*q == NULL)
    {
        temp = malloc(sizeof(struct node));
        temp->str = str;
        temp->link = NULL;
        *q = temp;
    }
    else
    {
        temp = *q;

        while (temp->link != NULL)
        {
            temp = temp->link;
        }

        r = malloc(sizeof(struct node));
        r->str = str;
        r->link = NULL;
        temp->link = r;
    }
}