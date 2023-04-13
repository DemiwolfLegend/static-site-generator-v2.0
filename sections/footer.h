#include "../header_file.h"

//////////////////////////////////////////////////////////////

void footer(struct node **);
void footer_logo(struct node **);
void footer_row(struct node **);
void footer_navigation(struct node **);
void footer_navigation_list(struct node **);
void footer_navigation_item(struct node **, char *);
void footer_navigation_link(struct node **, char *);
void footer_copyright(struct node **);

//////////////////////////////////////////////////////////////

void footer(struct node **p)
{
    char *open = "<footer class=\"footer\">\n";
    append(p, open);
    footer_logo(p);
    footer_row(p);
    char *close = "\n</footer>";
    append(p, close);
}

void footer_logo(struct node **p)
{
    char *open = "\n<div class=\"footer__logo-box\">\n";
    char *img = "<img src=\"./img/logo-green-2x.png\" alt=\"Full logo\" class=\"footer__logo\">";
    char *close = "\n</div>";
    append(p, open);
    append(p, img);
    append(p, close);
}

void footer_row(struct node **p)
{
    char *open = "\n<div class=\"row\">\n";
    append(p, open);
    footer_navigation(p);
    footer_copyright(p);
    char *close = "\n</div>";
    append(p, close);
}
void footer_navigation(struct node **p)
{
    char *open = "\n<div class=\"col-1-of-2\">\n";
    char *navigation = "<div class=\"footer__navigation\">\n";
    append(p, open);
    append(p, navigation);

    footer_navigation_list(p);

    char *close = "\n</div>\n</div>";
    append(p, close);
}
void footer_navigation_list(struct node **p)
{
    char *open = "\n<ul class=\"footer__list\">\n";
    append(p, open);

    footer_navigation_item(p, "company");
    footer_navigation_item(p, "contact us");
    footer_navigation_item(p, "carrers");
    footer_navigation_item(p, "privacy policy");
    footer_navigation_item(p, "terms");

    char *close = "\n</ul>";
    append(p, close);
}
void footer_navigation_item(struct node **p, char *link)
{
    char *open = "\n<li class=\"footer__item\">\n";
    append(p, open);
    footer_navigation_link(p, link);
    char *close = "\n</li>";
    append(p, close);
}
void footer_navigation_link(struct node **p, char *link)
{
    char *open = "<a href=\"#\" class=\"footer__link\">";
    char *close = "</a>";
    append(p, open);
    append(p, link);
    append(p, close);
}
void footer_copyright(struct node **p)
{
    char *open = "\n<div class=\"col-1-of-2\">\n";
    char *paragraph = "<p class=\"footer__copyright\">\n";
    char *text = "Lorem ipsum dolor, company sit amet consectetur adipisicing elit. Numquam consectetur minima dolores recusandae ratione eveniet itaque soluta perferendis culpa, velit repellendus quod error, voluptates eos! Totam nesciunt nostrum animi corporis.";
    char *close = "\n</p>\n</div>";
    append(p, open);
    append(p, paragraph);
    append(p, text);
    append(p, close);
}