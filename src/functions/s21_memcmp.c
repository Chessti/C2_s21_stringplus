#include "../s21_string.h"

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  int result = 0;

  if (str1 != S21_NULL && str2 != S21_NULL) {
    unsigned char *s1 = (unsigned char *)str1;
    unsigned char *s2 = (unsigned char *)str2;
    for (; n != 0; n--, s1++, s2++) {
      if (*s1 != *s2) {
        result = *s1 - *s2;
        break;
      }
    }
  }
  return result;
}