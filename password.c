#include <stdio.h>
#include <string.h>

int main() {
    char *password = "ThisIsMyPassword\n";
    char input[151];

    puts("Please enter the password:");
    fgets(input, 149, stdin);

    if (strcmp(input, password) == 0) {
        puts("Success!");
    } else {
        puts("Fail!");
    }

    return(0);
}
