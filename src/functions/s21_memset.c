#include "../s21_string.h"

void *s21_memset(void *str, int c, s21_size_t n) {
  if (str != S21_NULL) {
    unsigned char *s = (unsigned char *)str;
    for (; n != 0; n--, s++) {
      *s = (unsigned char)c;
    }
  }
  return str;
}