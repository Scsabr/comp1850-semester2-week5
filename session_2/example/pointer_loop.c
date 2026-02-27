#include <stdio.h>
#include <string.h>

int main()
{
    char message[50];
    printf("Enter your message: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';
    char *ptr = message;

    while (*ptr != '\0')
    {
        printf("%c\n", *ptr);
        // move to the next character
        ptr++;
    }
}