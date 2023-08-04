#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b) {

  if (b == NULL) {
    return 0;
  }
  unsigned int result = 0;
  for (int i = 0; b[i] != '\0'; i++) {
    result += (unsigned int)b[i] - '0';
  }
  return result;
}
