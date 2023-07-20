/*List8-6
Display selected animal sounds*/

#include <stdio.h>

enum animal { Dog,
              Cat,
              Monkey,
              Invalid };

//---dog barking---//
void dog(void)
{
    puts("Bow-wow");
}

//---Meow of a cat---//
void cat(void){
    puts("meow");
}

//---monkey cry---//
void monkey(void)
{
    puts("eek eek");
}

//---choose an animal ---//
enum animal select(void){
    int tmp;

    do{
        printf("0///dog 1///cat 2///monkey 3///end");
        scanf("%d", &tmp);
    } while (tmp < Dog || tmp > Invalid);
    return tmp;
}

int main(void)
{
    enum animal selected;
    do{
        switch (selected = select()){
            case Dog :
                dog();
                break;
            case Cat:
                cat();
                break;
            case Monkey:
                monkey();
                break;
        }
    } while (selected != Invalid);

    return 0;
}