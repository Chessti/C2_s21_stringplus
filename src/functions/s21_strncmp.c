#include "../s21_string.h"

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  int result = 0;

  if (str1 != S21_NULL && str2 != S21_NULL && n != 0) {
    for (s21_size_t i = 0; i < n; i++) {
      if (*str1 != *str2) {
        result = (unsigned char)*str1 - (unsigned char)*str2;
        break;
      }
      str1++;
      str2++;
    }
  }
  return result;
}