/*practice8-5*/

#include <stdio.h>

enum season { Spring,
              Summer,
              Autumn,
              Winter,
              Invalid };

void spring(void) {
    puts("sakura");
}
void summer(void) {
    puts("sea");
}
void autumn(void) {
    puts("food");
}
void winter(void) {
    puts("snow");
}

enum season select(void) {
    int tmp;

    do {
        puts("0///spring 1///summer 2///autumn 3///winter 4///end");
        scanf("%d", &tmp);
    } while (tmp < spring || tmp > Invalid);
    return tmp;
}

int main(void) {
    enum season selected;

    do {
        switch (selected = select()) {
        case Spring:
            spring();
            break;
        case Summer:
            summer();
            break;
        case Autumn:
            autumn();
            break;
        case Winter:
            winter();
            break;
        }
    } while (selected != Invalid);

    return 0;
}