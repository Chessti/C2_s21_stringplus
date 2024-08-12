#include "../s21_string.h"

char *s21_strcpy(char *dest, const char *src) {
  char *dest_start = dest;

  if (dest != S21_NULL || src != S21_NULL) {
    while (*src) {
      *dest++ = *src++;
    }
    *dest = '\0';
  }
  return dest_start;
}