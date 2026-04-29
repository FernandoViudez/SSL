#include <assert.h>

int length(char *str); // declaro la firma

int main(void) {
  int len = length("Hello, World!");
  int expected = 13;
  assert(len == expected);
}

int length(char *str) {
  if (str[0] == '\0') {
    return 0;
  }
  return 1 + length(str + 1);
}
