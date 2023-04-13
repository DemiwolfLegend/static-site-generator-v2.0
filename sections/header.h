#include "../header_file.h"

//////////////////////////////////////////////////////////////

void header(struct node **);
void header_logobox(struct node **);
void header_textbox(struct node **);
void header_h1(struct node **);
void header_button(struct node **);

//////////////////////////////////////////////////////////////

void header(struct node **p)
{
    append(p, "<header class=\"header\">\n");
    header_logobox(p);
    header_textbox(p);
    append(p, "\n</header>");
}

void header_logobox(struct node **p)
{
    append(p, "<div class=\"header__logo-box\">\n");
    append(p, "<img src=\"./img/logo-white.png \" alt=\" logo \" class=\" header__logo \">");
    append(p, "\n</div>");
}
void header_textbox(struct node **p)
{
    append(p, "<div class=\"header__text-box\">\n");
    header_h1(p);
    header_button(p);
    append(p, "\n</div>");
}

void header_h1(struct node **p)
{
    char *open = "<h1 class=\"heading-primary\">\n";
    char *content = "<span class=\"heading-primary--main\">Outdoors</span>\n";
    char *content2 = "<span class=\"heading-primary--sub\">is where life happens</span>";
    char *close = "\n</h1>";
    append(p, open);
    append(p, content);
    append(p, content2);
    append(p, close);
}
void header_button(struct node **p)
{
    char *open = "\n<a href=\"#section-tours\" class=\"btn btn--white btn--animate\">";
    char *content = "Discover our tours";
    char *close = "</a>";
    append(p, open);
    append(p, content);
    append(p, close);
}