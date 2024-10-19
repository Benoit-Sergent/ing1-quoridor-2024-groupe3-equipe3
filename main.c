#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "Menu.h"

int main() {
    bool execution = 1;
    while(execution){
        execution = menu();
        system("cls");
    }
    return 0;
}
