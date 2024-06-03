#ifndef UTILS_H
#define UTILS_H

typedef enum {
  STR_ARRAY_MATCH,
  STR_ARRAY_NO_MATCH,
} StrArrayReturnCode;

StrArrayReturnCode str_array_contains(char *arr[], int length, char *target);

#endif // !UTILS_H
