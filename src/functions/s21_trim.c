#include "../s21_string.h"

void *s21_trim(const char *src, const char *trim_chars) {
  char *res = S21_NULL;

  if (src) {
    if (trim_chars && *trim_chars) {
      s21_size_t len = s21_strlen(src);
      s21_size_t chars_len = s21_strlen(trim_chars);
      s21_trim_left(&src, trim_chars, &len, chars_len);
      if (len) {
        s21_trim_right(&src, trim_chars, &len, chars_len);
      }

      res = (char *)malloc(sizeof(char) * (len + 1));

      if (res) {
        for (s21_size_t i = 0; i < len + 1; i++) {
          if (i < len) {
            res[i] = src[i];
          } else {
            res[i] = '\0';
          }
        }
      }
    } else {
      res = s21_trim(src, " \t\n");
    }
  }
  return res;
}

void s21_trim_left(const char **src, const char *trim_chars,
                   s21_size_t *src_len, const s21_size_t trim_chars_len) {
  s21_size_t i = 0;

  while (src && i != trim_chars_len) {
    if ((**src) == trim_chars[i]) {
      (*src)++;
      (*src_len)--;
      i = 0;
      continue;
    }
    i++;
  }
}

void s21_trim_right(const char **src, const char *trim_chars,
                    s21_size_t *src_len, const s21_size_t trim_chars_len) {
  s21_size_t i = 0;
  s21_size_t j = (*src_len) - 1;

  while (src && i != trim_chars_len) {
    if ((*src)[j] == trim_chars[i]) {
      j--;
      (*src_len)--;
      i = 0;
      continue;
    }
    i++;
  }
}
