#include "../s21_string.h"

wchar_t* s21_wcscpy(wchar_t* dest, const wchar_t* src) {
  wchar_t* ptr = dest;
  while (*src != L'\0') {
    *dest = *src;
    dest++;
    src++;
  }
  *dest = L'\0';
  return ptr;
}