#include "../s21_string.h"

char *s21_strchr(const char *str, int c) {
  char *result = S21_NULL;

  if (str != S21_NULL) {
    while (*str != '\0') {
      if (*str == c) {
        result = (char *)str;
        break;
      }
      str++;
    }
    if (c == '\0') {
      result = (char *)str;
    }
  }
  return result;
}