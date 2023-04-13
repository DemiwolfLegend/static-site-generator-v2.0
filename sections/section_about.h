#include "../header_file.h"

//////////////////////////////////////////////////////////////

void section_about(struct node **);
void about_h2(struct node **);
void about_row(struct node **);
void about_text(struct node **);
void about_textbox(struct node **, int);
void about_h3(struct node **, int);
void about_paragraph(struct node **, int);
void about_button(struct node **);
void about_image(struct node **);

//////////////////////////////////////////////////////////////

void section_about(struct node **p)
{
    char *open = "<section class=\"section-about\" id=\"section-about\">";
    append(p, open);

    about_h2(p);
    about_row(p);

    char *close = "</section>";
    append(p, close);
}
void about_h2(struct node **p)
{
    char *open = "<div class=\"u-center-text u-margin-bottom-big\">\n";
    char *text = "<h2 class=\"heading-secondary\">\n";
    char *text2 = "Exciting tours for adventurous people";
    char *text3 = "\n</h2>";
    char *close = "\n</div>";
    append(p, open);
    append(p, text);
    append(p, text2);
    append(p, text3);
    append(p, close);
}
void about_row(struct node **p)
{
    char *open = "<div class=\"row\">\n";
    append(p, open);

    about_text(p);
    about_image(p);

    char *close = "\n</div>";
    append(p, close);
}
void about_text(struct node **p)
{
    append(p, "<div class=\"col-1-of-2\">\n");
    about_textbox(p, 1);
    about_textbox(p, 2);
    about_button(p);
    append(p, "\n</div>");
}
void about_textbox(struct node **p, int num)
{
    about_h3(p, num);
    about_paragraph(p, num);
}
void about_h3(struct node **p, int num)
{
    char *heading;
    char *open = "<h3 class=\"heading-tertiary u-margin-bottom-small\">\n";
    append(p, open);

    if (num == 1)
    {
        heading = "You're going to fall in love with nature";
    }
    else if (num == 2)
    {
        heading = "Live adventures like you never have before";
    }
    append(p, heading);

    char *close = "\n</h3>\n";
    append(p, close);
}
void about_paragraph(struct node **p, int num)
{
    char *para;
    char *open = "<p class=\"paragraph\">\n";
    append(p, open);

    if (num == 1)
    {
        para = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Cupiditate quis possimus in excepturi illo similique dignissimos dolorem. Hic, sit. Quibusdam adipisci odit omnis voluptates debitis praesentium animi reprehenderit natus suscipit!";
    }
    else if (num == 2)
    {
        para = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Inventore voluptates amet ipsum quia voluptas asperiores consequatur dicta et a error! Labore.";
    }
    append(p, para);

    char *close = "\n</p>";
    append(p, close);
}
void about_button(struct node **p)
{
    append(p, "\n<a href=\"#\" class=\"btn-text\">Learn more &rarr;</a>\n");
}
void about_image(struct node **p)
{
    // printf("\nabout_img()");
    char *open = "<div class=\"col-1-of-2\">\n<div class=\"composition\">";
    char *content = "\n<img src=\"./img/nat-1-large.jpg\" alt=\"photo1\" class=\"composition__photo composition__photo--p1\">";
    char *content2 = "\n<img src=\"./img/nat-2-large.jpg\" alt=\"photo2\" class=\"composition__photo composition__photo--p2\">";
    char *content3 = "\n<img src=\"./img/nat-3-large.jpg\" alt=\"photo3\" class=\"composition__photo composition__photo--p3\">";
    char *close = "\n</div>\n</div>";
    append(p, open);
    append(p, content);
    append(p, content2);
    append(p, content3);
    append(p, close);
}