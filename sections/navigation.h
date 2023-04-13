#include "../header_file.h"

//////////////////////////////////////////////////////////////

void navigation(struct node **);
void nav_checkbox(struct node **);
void nav_background(struct node **);
void nav_navigation(struct node **);
void nav_list(struct node **);
void nav_item(struct node **, int);

//////////////////////////////////////////////////////////////

void navigation(struct node **p)
{
    append(p, "\n<div class=\"navigation\">\n");
    nav_checkbox(p);
    nav_background(p);
    nav_navigation(p);
    append(p, "\n</div>");
}
void nav_checkbox(struct node **p)
{
    char *input = "\n<input type=\"checkbox\" name=\"none\" id=\"navi-toggle\" class=\"navigation__checkbox\">\n";
    char *labelopen = "<label for=\"navi-toggle\" class=\"navigation__button\">\n";
    char *span = "<span class=\"navigation__icon\">&nbsp;</span>";
    char *labelclose = "\n</label>";
    append(p, input);
    append(p, labelopen);
    append(p, span);
    append(p, labelclose);
}
void nav_background(struct node **p)
{
    append(p, "\n<div class=\"navigation__background\">&nbsp;</div>\n");
}
void nav_navigation(struct node **p)
{
    append(p, "<nav class=\"navigation__nav\">\n");
    nav_list(p);
    append(p, "\n</nav>");
}
void nav_list(struct node **p)
{
    append(p, "<ul class=\"navigation__list\">\n");
    nav_item(p, 1);
    nav_item(p, 2);
    nav_item(p, 3);
    nav_item(p, 4);
    nav_item(p, 5);
    append(p, "\n</ul>");
}
void nav_item(struct node **p, int num)
{
    char *content, *content2;
    char *open = "<li class=\"navigation__item\">\n";
    append(p, open);
    if (num == 1)
    {
        content = "<a href=\"#section-about\" class=\"navigation__link\">\n";
        content2 = "<span>01</span> About Natours";
    }
    else if (num == 2)
    {
        content = "<a href=\"#section-features\" class=\"navigation__link\">\n";
        content2 = "<span>02</span> Your benefits";
    }
    else if (num == 3)
    {
        content = "<a href=\"#section-tours\" class=\"navigation__link\">\n";
        content2 = "<span>03</span> Popular tours";
    }
    else if (num == 4)
    {
        content = "<a href=\"#section-stories\" class=\"navigation__link\">\n";
        content2 = "<span>04</span> Stories";
    }
    else if (num == 5)
    {
        content = "<a href=\"#section-book\" class=\"navigation__link\">\n";
        content2 = "<span>05</span> Book now";
    }
    append(p, content);
    append(p, content2);
    append(p, "\n</a>\n</li>");
}