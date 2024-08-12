#include "../s21_string.h"

char *s21_strpbrk(const char *str1, const char *str2) {
  char *result = S21_NULL;

  if (str1 != S21_NULL && str2 != S21_NULL) {
    while (*str1 != '\0') {
      if (s21_strchr(str2, *str1) != S21_NULL) {
        result = (char *)str1;
        break;
      }
      str1++;
    }
  }
  return result;
}