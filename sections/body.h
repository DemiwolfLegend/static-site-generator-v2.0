#include "../header_file.h"
#include "./header.h"
#include "./navigation.h"
#include "./section_about.h"
#include "./section_features.h"
#include "./section_tours.h"
#include "./section_stories.h"
#include "./section_book.h"
#include "./footer.h"
#include "./popup.h"

//////////////////////////////////////////////////////////////

void body(struct node **);

//////////////////////////////////////////////////////////////

void body(struct node **p)
{
    append(p, "<body>\n");
    navigation(p);
    header(p);
    append(p, "\n<main>\n");
    section_about(p);
    section_features(p);
    section_tours(p);
    section_stories(p);
    section_book(p);
    append(p, "\n</main>");
    footer(p);
    popup(p);
    append(p, "\n</body>");
}