#include <stdio.h>

int main() {
    int i, n, opt;
    char str[100];

    printf("Enter something: ");
    scanf("%99s", str);

    printf("Enter the password: ");
    scanf("%d", &n);

    printf("Choose an option:\n");
    printf("1. Encrypt the data\n");
    printf("2. Decrypt the data\n");
    scanf("%d", &opt);

    switch (opt) {
        case 1:
            for (i = 0; str[i] != '\0'; i++) {
                str[i] = (str[i] + n) % 256;
            }
            printf("The encrypted data is: %s\n", str);
            break;
        case 2:
            for (i = 0; str[i] != '\0'; i++) {
                str[i] = (str[i] - n + 256) % 256;
            }
            printf("The decrypted data is: %s\n", str);
            break;
        default:
            printf("Error: Invalid option\n");
    }

    return 0;
}
