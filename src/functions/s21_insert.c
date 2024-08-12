#include "../s21_string.h"

void *s21_insert(const char *src, const char *str, s21_size_t start_index) {
  char *arr = S21_NULL;

  if (src != S21_NULL && str != S21_NULL) {
    s21_size_t src_len = s21_strlen(src);
    s21_size_t str_len = s21_strlen(str);

    if (src_len == 0 && start_index > 0) {
      return S21_NULL;
    }

    if (start_index <= src_len) {
      arr = (char *)malloc(sizeof(char) * (src_len + str_len + 1));
      if (arr) {
        s21_strncpy(arr, src, start_index);
        s21_strcpy(arr + start_index, str);
        s21_strcpy(arr + start_index + str_len, src + start_index);
      }
    } else if (src_len == 0 && str_len == 0) {
      arr = s21_strdup(src);
    }
  }
  return arr;
}