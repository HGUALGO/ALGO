#include <stdio.h>
#include <string.h>
 
#define MAX_LINE_LENGTH 101

void mystrcpy(char *dst, const char *src) {
	while ((*dst++ = *src++))
		;
}

int main(void) {
    char buf[MAX_LINE_LENGTH] = "";
    char *p;
    const char *bug_string = "BUG";
    const int bug_str_len = 3;
     
    while (!feof(stdin)) {
        if (!gets(buf)) {
            break;
        }
        p = buf;
        while ((p = strstr(buf, bug_string)) != NULL) {
            mystrcpy(p, p+3);
        }
        printf("%s\n", buf);
    }
    return 0;
}