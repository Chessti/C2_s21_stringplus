#include "../s21_string.h"

char *s21_strdup(const char *str) {
  char *arr = S21_NULL;

  if (str) {
    s21_size_t len = s21_strlen(str);
    arr = (char *)malloc(len + 1);
    if (arr) {
      s21_strcpy(arr, str);
    }
  }
  return arr;
}
