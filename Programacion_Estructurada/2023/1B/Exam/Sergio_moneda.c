#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int resultado(void) {
    return rand() % 2;
}

int main() {
    int i, cara = 0, cruz = 0;
    srand(time(NULL));
    for (i = 1; i <= 100; i++) {
        if (resultado() == 0) {
            printf("cara=0\n");
            cara++;
        }else {
            printf("cruz=1\n");
            cruz++;
        }
    }
    printf("cara: %d\ncruz: %d\n", cara, cruz);

}