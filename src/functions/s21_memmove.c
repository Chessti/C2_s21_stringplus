#include "../s21_string.h"

void *s21_memmove(void *dest, const void *src, s21_size_t n) {
  unsigned char *d = (unsigned char *)dest;
  const unsigned char *s = (const unsigned char *)src;

  if (d != S21_NULL && s != S21_NULL) {
    if (d < s) {
      for (; n != 0; n--, d++, s++) {
        *d = *s;
      }
    } else {
      d += n;
      s += n;
      for (; n != 0; n--) {
        *--d = *--s;
      }
    }
  }
  return dest;
}