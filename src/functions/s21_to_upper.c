#include "../s21_string.h"

void *s21_to_upper(const char *str) {
  char *arr = S21_NULL;

  if (str != S21_NULL) {
    s21_size_t len = s21_strlen(str);
    arr = (char *)malloc(sizeof(char) * (len + 1));
    if (arr) {
      for (s21_size_t i = 0; i <= len; i++) {
        arr[i] =
            (str[i] >= 'a' && str[i] <= 'z') ? str[i] - ('a' - 'A') : str[i];
      }
      arr[len] = '\0';
    }
  }
  return arr;
}