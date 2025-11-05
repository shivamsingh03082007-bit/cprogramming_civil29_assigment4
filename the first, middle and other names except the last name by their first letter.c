
#include <stdio.h>
#include <string.h>

int main() {
    char name[100], *words[10], *p;
    int count = 0, i;

    printf("Enter full name:\n");
    fgets(name, sizeof(name), stdin); 

 
    name[strcspn(name, "\n")] = '\0';

    p = strtok(name, " ");
    while(p != NULL) {
        words[count++] = p;
        p = strtok(NULL, " ");
    }

    for(i = 0; i < count - 1; i++)
        printf("%c. ", words[i][0]);

    printf("%s\n", words[count - 1]);

    return 0;
}
