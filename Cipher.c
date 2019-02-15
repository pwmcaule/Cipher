#include <stdio.h>

void encrypt() {
  char str[100];
  int key;

  printf("Enter a word to be encrypted (message must be between 0-100 ");
  printf("characters): \n");
  scanf("%s", str);
  printf("Enter a cipher key: \n");
  scanf("%d", &key);

  for(int i = 0; str[i] != '\0'; ++i) {
    char c = str[i];

    if('a' <= c && c <= 'z') {
      c = (c - 'a' + key) % 26 + 'a';
    } else if ('A' <= c && c <= 'Z') {
      c = (c - 'A' + key) % 26 + 'A';
    }

    str[i] = c;
  }

  printf("Your encrypted message is %s.\n", str);
}


void decrypt() {
  char str[100];
  int key;

  printf("Enter a word to be decrypted (message must be between 0-100 ");
  printf("characters): \n");
  scanf("%s", str);
  printf("Enter a cipher key: \n");
  scanf("%d", &key);

  for(int i = 0; str[i] != '\0'; ++i) {
    char c = str[i];

    if('a' <= c && c <= 'z') {
      c = (c - 'a' - key + 26) % 26 + 'a';
    } else if ('A' <= c && c <= 'Z') {
      c = (c - 'A' - key + 26) % 26 + 'A';
    }

    str[i] = c;
  }

  printf("Your decrypted message is %s.\n", str);
}


int main() {
  char c = '\0';

  printf("Type \"e\" to encrypt or \"d\" to decrypt.\n");
  scanf("%c", &c);
  if (c == 'e') {
    encrypt();
  } else if (c == 'd') {
    decrypt();
  } else {
    printf("Error. Please type \"e\" or \"d\".\n");
  }

  return 0;
}
