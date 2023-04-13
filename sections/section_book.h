#include "../header_file.h"

//////////////////////////////////////////////////////////////

void section_book(struct node **);
void book_row(struct node **);
void book_form(struct node **);
void form_h2(struct node **);
void form_name(struct node **);
void form_email(struct node **);
void form_size(struct node **);
void form_size_small(struct node **);
void form_size_large(struct node **);
void form_button(struct node **);

//////////////////////////////////////////////////////////////

void section_book(struct node **p)
{
    char *open = "<section class=\"section-book\" id=\"section-book\">\n";
    append(p, open);

    book_row(p);

    char *close = "\n</section>";
    append(p, close);
}
void book_row(struct node **p)
{
    char *open = "<div class=\"row\">\n";
    char *content = "<div class=\"book\">\n";
    char *content2 = "<div class=\"book__form\">\n";
    append(p, open);
    append(p, content);
    append(p, content2);

    book_form(p);

    char *close = "\n</div>\n</div>\n</div>";
    append(p, close);
}
void book_form(struct node **p)
{
    char *open = "<form action=\"#\" class=\"form\">\n";
    append(p, open);

    form_h2(p);
    form_name(p);
    form_email(p);
    form_size(p);
    form_button(p);

    char *close = "\n</form>";
    append(p, close);
}
void form_h2(struct node **p)
{
    char *open = "<div class=\"u-margin-bottom-medium\">\n";
    char *content = "<h2 class=\"heading-secondary\">\n";
    char *content2 = "Start booking now";
    char *content3 = "\n</h2>";
    char *close = "\n</div>";
    append(p, open);
    append(p, content);
    append(p, content2);
    append(p, content3);
    append(p, close);
}
void form_name(struct node **p)
{
    char *open = "<div class=\"form__group\">\n";
    char *content = "<input type=\"text\" class=\"form__input\" placeholder=\"Full Name\" id=\"name\" required>\n";
    char *content2 = "<label for=\"name\" class=\"form__label\">Full Name</label>";
    char *close = "\n</div>";
    append(p, open);
    append(p, content);
    append(p, content2);
    append(p, close);
}
void form_email(struct node **p)
{
    char *open = "<div class=\"form__group\">\n";
    char *content = "<input type=\"email\" class=\"form__input\" placeholder=\"Email Address\" id=\"email\" required>\n";
    char *content2 = "<label for=\"email\" class=\"form__label\">Email Address</label>";
    char *close = "\n</div>";
    append(p, open);
    append(p, content);
    append(p, content2);
    append(p, close);
}
void form_size(struct node **p)
{
    char *open = "<div class=\"form__group u-margin-bottom-medium\">\n";
    append(p, open);

    form_size_small(p);
    form_size_large(p);

    char *close = "\n</div>";
    append(p, close);
}
void form_size_small(struct node **p)
{
    char *open = "<div class=\"form__radio-group\">\n";
    char *input = "<input type=\"radio\" id=\"small\" class=\"form__radio-input\" name=\"size\">\n";
    char *label = "<label for=\"small\" class=\"form__radio-label\">\n";
    char *span = "<span class=\"form__radio-button\"></span>\n";
    char *text = "Small tour group";
    char *close = "\n</label>\n</div>";
    append(p, open);
    append(p, input);
    append(p, label);
    append(p, span);
    append(p, text);
    append(p, close);
}
void form_size_large(struct node **p)
{
    char *open = "<div class=\"form__radio-group\">\n";
    char *input = "<input type=\"radio\" id=\"large\" class=\"form__radio-input\" name=\"size\">\n";
    char *label = "<label for=\"large\" class=\"form__radio-label\">\n";
    char *span = "<span class=\"form__radio-button\"></span>\n";
    char *text = "Large tour group";
    char *close = "\n</label>\n</div>";
    append(p, open);
    append(p, input);
    append(p, label);
    append(p, span);
    append(p, text);
    append(p, close);
}
void form_button(struct node **p)
{
    char *open = "<div class=\"form__group\">\n";
    char *content = "<button class=\"btn btn--green\">Next Step &rarr;</button>";
    char *close = "\n</div>";
    append(p, open);
    append(p, content);
    append(p, close);
}