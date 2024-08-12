#include "../s21_string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
  unsigned char *result = S21_NULL;

  if (str != S21_NULL) {
    unsigned char *s = (unsigned char *)str;
    for (; n != 0; n--, s++) {
      if (*s == (unsigned char)c) {
        result = s;
        break;
      }
    }
  }
  return result;
}