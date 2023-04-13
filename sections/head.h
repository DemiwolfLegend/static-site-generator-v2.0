#include "../header_file.h"

//////////////////////////////////////////////////////////////

void head(struct node **);
void link_meta(struct node **);
void link_font(struct node **);
void link_css(struct node **);
void link_icon(struct node **);
void title(struct node **);

//////////////////////////////////////////////////////////////

void head(struct node **p)
{
    append(p, "<head>\n");
    link_meta(p);
    link_css(p);
    link_font(p);
    link_icon(p);
    title(p);
    append(p, "\n</head>");
}

void link_meta(struct node **p)
{
    append(p, "\n<meta charset=\"UTF-8\">");
    append(p, "\n<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">");
    append(p, "\n<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">");
}

void link_font(struct node **p)
{
    append(p, "\n<link rel=\"stylesheet\" href=\"https://fonts.googleapis.com/css?family=Lato:100,300,400,700,900\">");
}
void link_css(struct node **p)
{
    append(p, "\n<link rel=\"stylesheet\" href=\"./css/style.css\">");
    append(p, "\n<link rel=\"stylesheet\" href=\"./css/icon-font.css\">");
}
void link_icon(struct node **p)
{
    append(p, "\n<link rel=\"shortcut icon\" href=\"./img/favicon.png\" type=\"image/x-icon\">");
}
void title(struct node **p)
{
    append(p, "\n<title>");
    append(p, "Natours | Exiting tours for adventourous people");
    append(p, "</title>");
}