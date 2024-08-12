#include "../s21_string.h"

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  void *result = S21_NULL;

  if (dest != S21_NULL && src != S21_NULL) {
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
    for (; n != 0; n--, d++, s++) {
      *d = *s;
    }
    result = dest;
  }
  return result;
}