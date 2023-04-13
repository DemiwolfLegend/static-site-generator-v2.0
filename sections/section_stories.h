#include "../header_file.h"

//////////////////////////////////////////////////////////////

void section_stories(struct node **);
void stories_background(struct node **);
void background_video(struct node **);
void stories_h2(struct node **);
void stories_row(struct node **);
void stories_box(struct node **, int);
void stories_shape(struct node **, int);
void stories_text(struct node **, int);
void stories_h3(struct node **, int);
void stories_paragraph(struct node **);
void stories_button(struct node **);

//////////////////////////////////////////////////////////////

void section_stories(struct node **p)
{
    char *open = "<section class=\"section-stories\" id=\"section-stories\">\n";
    append(p, open);

    stories_background(p);
    stories_h2(p);
    stories_row(p);
    stories_button(p);
    char *close = "\n</section>";
    append(p, close);
}
void stories_background(struct node **p)
{
    char *open = "<div class=\"bg-video\">\n";
    append(p, open);
    background_video(p);
    char *close = "\n</div>";
    append(p, close);
}
void background_video(struct node **p)
{
    char *open = "<video class=\"bg-video__content\" autoplay muted loop>\n";
    char *content = "<source src=\"./img/video.mp4\" type=\"video/mp4\">\n";
    char *content2 = "<source src=\"./img/video.webm\" type=\"video/webm\">\n";
    char *content3 = "Your browser does not supported!";
    char *close = "\n</video>";
    append(p, open);
    append(p, content);
    append(p, content2);
    append(p, content3);
    append(p, close);
}
void stories_h2(struct node **p)
{
    char *open = "<div class=\"u-center-text u-margin-bottom-big\">\n";
    char *content = "<h2 class=\"heading-secondary\">\n";
    char *content2 = "We make people genuinely happy";
    char *content3 = "\n</h2>";
    char *close = "\n</div>";
    append(p, open);
    append(p, content);
    append(p, content2);
    append(p, content3);
    append(p, close);
}

void stories_row(struct node **p)
{
    char *open = "\n<div class=\"row\">\n";
    append(p, open);

    stories_box(p, 1);
    stories_box(p, 2);

    char *close = "\n</div>";
    append(p, close);
}

void stories_box(struct node **p, int num)
{
    char *open = "<div class=\"story\">\n";
    append(p, open);

    stories_shape(p, num);
    stories_text(p, num);

    char *close = "\n</div>";
    append(p, close);
}
void stories_shape(struct node **p, int num)
{
    char *content, *content2;
    char *open = "<figure class=\"story__shape\">\n";
    if (num == 1)
    {
        content = "<img src=\"./img/nat-8.jpg\" alt=\"story-image\" class=\"story__image\">\n";
        content2 = "<figcaption class=\"story__caption\">Mary Smith</figcaption>";
    }
    else if (num == 2)
    {
        content = "<img src=\"./img/nat-9.jpg\" alt=\"story-image\" class=\"story__image\">\n";
        content2 = "<figcaption class=\"story__caption\">jack Wilson</figcaption>";
    }
    char *close = "\n</figure>";
    append(p, open);
    append(p, content);
    append(p, content2);
    append(p, close);
}
void stories_text(struct node **p, int num)
{
    char *open = "<div class=\"story__text\">\n";
    append(p, open);

    stories_h3(p, num);
    stories_paragraph(p);

    char *close = "\n</div>";
    append(p, close);
}

void stories_h3(struct node **p, int num)
{
    char *content;
    char *open = "<h3 class=\"heading-tertiary u-margin-bottom-small\">\n";
    if (num == 1)
        content = "I had the best week ever with my family\n";
    else if (num == 2)
        content = "wow! my life is completely different now\n";
    char *close = "\n</h3>";
    append(p, open);
    append(p, content);
    append(p, close);
}
void stories_paragraph(struct node **p)
{
    char *open = "<p>\n";
    char *intext = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Cupiditate quis possimus in excepturi illo similique dignissimos dolorem. Hic, sit. Quibusdam adipisci odit omnis voluptates debitis praesentium animi reprehenderit natus suscipit!";
    char *close = "\n</p>";
    append(p, open);
    append(p, intext);
    append(p, close);
}
void stories_button(struct node **p)
{
    char *open = "<div class=\"u-center-text u-margin-top-big\">\n";
    char *content = "<a href=\"#\" class=\"btn-text\">";
    char *content2 = "Read all stories &rarr;";
    char *content3 = "</a>";
    char *close = "\n</div>";
    append(p, open);
    append(p, content);
    append(p, content2);
    append(p, content3);
    append(p, close);
}