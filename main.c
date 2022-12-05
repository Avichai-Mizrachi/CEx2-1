#include <stdio.h>
#include "my_mat.h"

int main() {
    char letter ='E';
    while (letter != 'D'){
        scanf("%c", &letter);
        switch (letter) {
            case 'A':
                func1();
                break;
            case 'B':
                func2();
                break;
            case 'C':
                func3();
                break;
            case 'D':
                letter = 'D';
                break;
        }
    }
    return 0;
}