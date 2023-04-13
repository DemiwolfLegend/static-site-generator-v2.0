#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
/* ^^ these are the include guards */

/* Prototypes for the functions */

struct node
{
    char *str;
    struct node *link;
};

void display(struct node *);
void append(struct node **, char *);

// char *tag_merge(char *, char *, char *);
#endif

//////////////////////////////////////////////////////////