#include "../header_file.h"

//////////////////////////////////////////////////////////////

void popup(struct node **);
void popup_content(struct node **);
void popup_left(struct node **);
void popup_image(struct node **);
void popup_right(struct node **);
void popup_close(struct node **);
void popup_h2(struct node **);
void popup_h3(struct node **);
void popup_text(struct node **);
void popup_button(struct node **);

//////////////////////////////////////////////////////////////

void popup(struct node **p)
{
    char *open = "<div class=\"popup\" id=\"popup\">\n";
    append(p, open);
    popup_content(p);
    char *close = "\n</div>";
    append(p, close);
}
void popup_content(struct node **p)
{
    char *open = "\n<div class=\"popup__content\">\n";
    append(p, open);
    popup_left(p);
    popup_right(p);
    char *close = "\n</div>";
    append(p, close);
}
void popup_left(struct node **p)
{
    char *open = "\n<div class=\"popup__left\">\n";
    append(p, open);
    popup_image(p);
    char *close = "\n</div>";
    append(p, close);
}
void popup_image(struct node **p)
{
    char *first = "<img src=\"./img/nat-8.jpg\" alt=\"Tour photo\" class=\"popup__image\">";
    char *second = "\n<img src=\"./img/nat-9.jpg\" alt=\"Tour photo\" class=\"popup__image\">";
    append(p, first);
    append(p, second);
}
void popup_right(struct node **p)
{
    char *open = "\n<div class=\"popup__right\">\n";
    append(p, open);

    popup_close(p);
    popup_h2(p);
    popup_h3(p);
    popup_text(p);
    popup_button(p);

    char *close = "\n</div>";
    append(p, close);
}
void popup_close(struct node **p)
{
    char *tag = "\n<a href=\"#section-tours\" class=\"popup__close\">&times;</a>";
    append(p, tag);
}
void popup_h2(struct node **p)
{
    char *open = "\n<h2 class=\"heading-secondary u-margin-bottom-medium\">";
    char *text = "Start booking now";
    char *close = "</h2>";
    append(p, open);
    append(p, text);
    append(p, close);
}
void popup_h3(struct node **p)
{
    char *open = "\n<h3 class=\"heading-tertiary u-margin-bottom-small\">";
    char *text = "Important &ndash; please read the terms carefully before booking.";
    char *close = "</h3>";
    append(p, open);
    append(p, text);
    append(p, close);
}
void popup_text(struct node **p)
{
    char *open = "\n<p class=\"popup__text\">\n";
    char *text = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Quae hic ratione consequatur autem totam laborum adipisci labore nisi perspiciatis !Eum Lorem ipsum dolor sit amet consectetur adipisicing elit. Quaerat est, nemo dolor magnam, accusantium debitis saepe nulla natus cupiditate at beatae fugiat iure.Ipsum, consequuntur similique !Quisquam, maxime molestiae !Ratione ? corrupti neque ducimus accusamus, qui ipsum rem nulla nam eos ? Lorem ipsum dolor sit amet consectetur adipisicing elit.Quae hic ratione consequatur autem totam ";
    char *close = "\n</p>";
    append(p, open);
    append(p, text);
    append(p, close);
}
void popup_button(struct node **p)
{
    char *tag = "\n<a href=\"#section-book\" class=\"btn btn--green\">Book now</a>";
    append(p, tag);
}