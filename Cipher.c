#include <stdio.h>
#include <Encrypt.c>
#include <Decrypt.c>

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
