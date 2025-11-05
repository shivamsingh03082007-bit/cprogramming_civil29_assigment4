#include <stdio.h>

int main() {
    char books[3][50];
    char *ptr[3];
    int i;

    printf("Enter 3 book names:\n");
    for(i=0;i<3;i++) {
        scanf(" %[^\n]", books[i]);
        ptr[i] = books[i];
    }

    printf("\nYou entered:\n");
    for(i=0;i<3;i++)
        printf("%s\n", ptr[i]);

    return 0;
}
