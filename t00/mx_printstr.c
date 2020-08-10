#include <unistd.h>

int mx_strlen(char *s);

void mx_printstr(const char *s) {
   write(1, s, mx_strlen(s));
}
