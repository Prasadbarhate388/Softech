#include <stdio.h>
#include <string.h>

int main() {
    char input_string[100];
    int length = 0;
    int i;

    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);

   
    for (i = 0; input_string[i] != '\0'; i++) {
        length++;
    }
    length-=1;

    printf("Length of the string: %d\n", length);

    printf("rev string: ");
    
    for (i = length - 1; i >= 0; i--) {
        printf("%c", input_string[i]);
    }
    printf("\n");

    return 0;
}