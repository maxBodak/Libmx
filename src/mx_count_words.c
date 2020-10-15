#include "libmx.h"

int mx_count_words(const char *str, char c) {
    int result = 1;
    int flag = 0;

    if (str == NULL)
        return -1;
    while (*str) {
        if (*str == c && flag) {
            result++;
            flag = 0;
        }
        else if (*str != c)
            flag = 1;        
        str++;
    }
    if (*(str-1) == c)
        result --;
    return result;
}
