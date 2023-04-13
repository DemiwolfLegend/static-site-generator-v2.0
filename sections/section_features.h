#include "../header_file.h"

//////////////////////////////////////////////////////////////

void section_features(struct node **);
void features_row(struct node **);
void features_box(struct node **, int);
void featurebox_icon(struct node **, int);
void featurebox_h3(struct node **, int);
void featurebox_paragraph(struct node **, int);

//////////////////////////////////////////////////////////////

void section_features(struct node **p)
{
    char *open = "<section class=\"section-features\" id=\"section-features\">\n";
    append(p, open);

    features_row(p);

    char *close = "</section>";
    append(p, close);
}
void features_row(struct node **p)
{
    char *open = "<div class=\"row\">\n";
    append(p, open);

    features_box(p, 1);
    features_box(p, 2);
    features_box(p, 3);
    features_box(p, 4);

    char *close = "\n</div>";
    append(p, close);
}
void features_box(struct node **p, int num)
{
    char *open = "<div class=\"col-1-of-4\">\n<div class=\"feature-box\">\n";
    append(p, open);

    featurebox_icon(p, num);
    featurebox_h3(p, num);
    featurebox_paragraph(p, num);

    char *close = "\n</div>\n</div>";
    append(p, close);
}

void featurebox_icon(struct node **p, int num)
{
    char *icon;
    if (num == 1)
        icon = "<i class=\"feature-box__icon icon-basic-world\"></i>";
    else if (num == 2)
        icon = "<i class=\"feature-box__icon icon-basic-compass\"></i>";
    else if (num == 3)
        icon = "<i class=\"feature-box__icon icon-basic-map\"></i>";
    else if (num == 4)
        icon = "<i class=\"feature-box__icon icon-basic-heart\"></i>";
    append(p, icon);
}
void featurebox_h3(struct node **p, int num)
{
    char *heading;
    char *open = "<h3 class=\"heading-tertiary\">";
    append(p, open);
    if (num == 1)
        heading = "Explore the world";
    else if (num == 2)
        heading = "Meet nature";
    else if (num == 3)
        heading = "find your way";
    else if (num == 4)
        heading = "Live a healthier life";
    append(p, heading);
    char *close = "</h3>";
    append(p, close);
}
void featurebox_paragraph(struct node **p, int num)
{
    char *open = "<p class=\"feature-box__text\">\n";
    char *para = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Inventore voluptates amet ipsum quia voluptas asperiores consequatur dicta et a error! Labore.";
    char *close = "\n</p>";
    append(p, open);
    append(p, para);
    append(p, close);
}