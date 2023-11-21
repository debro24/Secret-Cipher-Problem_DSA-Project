#include <stdio.h>

#define ALPHABET 26

void encrypt(char message[], int shift) {
    int i = 0;
    char ch;

    while (message[i]) {
        ch = message[i];

        if (ch >= 'A' && ch <= 'Z') {
            // Encryption logic for uppercase letters
            ch = ((ch - 'A' + shift) % ALPHABET) + 'A';
        } else if (ch >= 'a' && ch <= 'z') {
            // Encryption logic for lowercase letters
            ch = ((ch - 'a' + shift) % ALPHABET) + 'a';
        }
        printf("%c", ch);
        i++;
    }
}

void decrypt(char encrypted_message[], int shift) {
    // Decryption is achieved by shifting backwards by ALPHABET - shift
    encrypt(encrypted_message, ALPHABET - shift);
}

int main() {
    char message[] = "HELLO";
    int shift = 3; // You can change the shift value

    // Encrypt the message
    printf("Encrypted message: ");
    encrypt(message, shift);
    printf("\n");

    // Decrypt the message
    char encrypted_message[] = "KHOOR";
    printf("Decrypted message: ");
    decrypt(encrypted_message, shift);
    printf("\n");

    return 0;
}
