#include "../header_file.h"

//////////////////////////////////////////////////////////////

void section_tours(struct node **);
void tours_h2(struct node **);
void tours_row(struct node **);
void tours_card(struct node **, int);
void card_front(struct node **, int);
void card_picture(struct node **, int);
void card_heading(struct node **, int);
void card_detail(struct node **, int);
void card_back(struct node **, int);
void card_cta(struct node **, int);
void card_pricebox(struct node **, int);
void card_button(struct node **);
void tours_button(struct node **);

//////////////////////////////////////////////////////////////

void section_tours(struct node **p)
{
    char *open = "<section class=\"section-tours\" id=\"section-tours\">\n";
    append(p, open);

    tours_h2(p);
    tours_row(p);
    tours_button(p);

    char *close = "\n</section>";
    append(p, close);
}
void tours_h2(struct node **p)
{
    char *open = "\n<div class=\"u-center-text u-margin-bottom-big\">\n";
    char *content = "<h2 class=\"heading-secondary\">\n";
    char *content2 = "Most popular tours";
    char *content3 = "\n</h2>";
    char *close = "\n</div>";
    append(p, open);
    append(p, content);
    append(p, content2);
    append(p, content3);
    append(p, close);
}
void tours_row(struct node **p)
{
    char *open = "\n<div class=\"row\">\n";
    append(p, open);

    tours_card(p, 1);
    tours_card(p, 2);
    tours_card(p, 3);

    char *close = "\n</div>";
    append(p, close);
}
void tours_card(struct node **p, int num)
{
    char *open = "\n<div class=\"col-1-of-3\">\n<div class=\"card\">\n";
    append(p, open);

    card_front(p, num);
    card_back(p, num);

    char *close = "\n</div>\n</div>";
    append(p, close);
}
void card_front(struct node **p, int num)
{
    char *open = "<div class=\"card__side card__side--front\">\n";
    append(p, open);
    card_picture(p, num);
    card_heading(p, num);
    card_detail(p, num);
    char *close = "\n</div>";
    append(p, close);
}
void card_picture(struct node **p, int num)
{
    char *open;
    if (num == 1)
        open = "<div class=\"card__picture card__picture--1\">\n";
    else if (num == 2)
        open = "<div class=\"card__picture card__picture--2\">\n";
    else if (num == 3)
        open = "<div class=\"card__picture card__picture--3\">\n";
    char *content = "&nbsp;";
    char *close = "\n</div>";
    append(p, open);
    append(p, content);
    append(p, close);
}
void card_heading(struct node **p, int num)
{
    char *open = "<h4 class=\"card__heading\">\n";
    char *content;
    if (num == 1)
        content = "<span class=\"card__heading-span card__heading-span--1\">\nThe sea explorer\n</span>";
    else if (num == 2)
        content = "<span class=\"card__heading-span card__heading-span--2\">\nThe forest hiker\n</span>";
    else if (num == 3)
        content = "<span class=\"card__heading-span card__heading-span--3\">\nThe snow adventurer\n</span>";
    char *close = "\n</h4>";
    append(p, open);
    append(p, content);
    append(p, close);
}
void card_detail(struct node **p, int num)
{
    char *open = "<div class=\"card__details\">\n<ul>\n";
    append(p, open);
    if (num == 1)
    {
        append(p, "\n<li>3 days tour</li>");
        append(p, "\n<li>Up to 30 people</li>");
        append(p, "\n<li>2 tour guides</li>");
        append(p, "\n<li>Sleep in cozy hotels</li>");
        append(p, "\n<li>Difficulty: easy</li>");
    }
    else if (num == 2)
    {
        append(p, "\n<li>7 days tour</li>");
        append(p, "\n<li>Up to 40 people</li>");
        append(p, "\n<li>6 tour guides</li>");
        append(p, "\n<li>Sleep in provided tents</li>");
        append(p, "\n<li>Difficulty: medium</li>");
    }
    else if (num == 3)
    {
        append(p, "\n<li>5 days tour</li>");
        append(p, "\n<li>Up to 15 people</li>");
        append(p, "\n<li>3 tour guides</li>");
        append(p, "\n<li>Sleep in provided tents</li>");
        append(p, "\n<li>Difficulty: hard</li>");
    }
    char *close = "\n</ul>\n</div>";
    append(p, close);
}
void card_back(struct node **p, int num)
{
    char *open;
    if (num == 1)
    {
        open = "<div class=\"card__side card__side--back card__side--back-1\">\n";
    }
    else if (num == 2)
    {
        open = "<div class=\"card__side card__side--back card__side--back-2\">\n";
    }
    else if (num == 3)
    {
        open = "<div class=\"card__side card__side--back card__side--back-3\">\n";
    }
    append(p, open);

    card_cta(p, num);

    char *close = "\n</div>";
    append(p, close);
}
void card_cta(struct node **p, int num)
{
    char *open = "<div class=\"card__cta\">\n";
    append(p, open);

    card_pricebox(p, num);
    card_button(p);

    char *close = "\n</div>";
    append(p, close);
}
void card_pricebox(struct node **p, int num)
{
    char *open = "<div class=\"card__price-box\">\n";
    char *only = "<p class=\"card__price-only\">Only</p>";
    char *value = "<p class=\"card__price-value\">";
    char *price;
    if (num == 1)
        price = "$297";
    else if (num == 2)
        price = "$497";
    else if (num == 3)
        price = "$897";
    char *close = "</p>\n</div>";
    append(p, open);
    append(p, only);
    append(p, value);
    append(p, price);
    append(p, close);
}
void card_button(struct node **p)
{
    append(p, "\n<a href=\"#popup\" class=\"btn btn--white\">Book now!</a>");
}
void tours_button(struct node **p)
{
    char *open = "<div class=\"u-center-text u-margin-top-big\">\n";
    char *content = "<a href=\"#\" class=\"btn btn--green\">";
    char *content2 = "Discover all tours";
    char *content3 = "</a>";
    char *close = "\n</div>";
    append(p, open);
    append(p, content);
    append(p, content2);
    append(p, content3);
    append(p, close);
}