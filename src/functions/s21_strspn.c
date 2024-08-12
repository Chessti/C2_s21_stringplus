#include "../s21_string.h"

s21_size_t s21_strspn(const char *str1, const char *str2) {
  s21_size_t result = 0;

  for (const char *s = str1; *s != '\0'; s++) {
    if (s21_strchr(str2, *s) == S21_NULL) {
      break;
    }
    result++;
  }
  return result;
}