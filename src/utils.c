#include "../include/utils.h"
#include <string.h>

StrArrayReturnCode str_array_contains(char *arr[], int length, char *target) {
  for (int i = 0; i < length; i++) {
    if (strcmp(arr[i], target)) {
      return STR_ARRAY_MATCH;
    }
  }

  return STR_ARRAY_NO_MATCH;
}
