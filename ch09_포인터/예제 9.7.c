#include <stdio.h>

int main() {

    int ar[5] = {1,2,3,4,5};

    int i;
    int *p=ar;

    for (i=0; i<5; i++) {
        printf("ar[%d] = %d\n", i, *p++);
    }

    return 0;
}

