#include "libmx.h"

char *mx_strdup(const char *str) {
    char *copy = mx_strnew(mx_strlen_safe(str));

    mx_strcpy(copy, str);
    return copy;
}

