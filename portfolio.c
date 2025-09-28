// portfolio.c
#include <stdio.h>

int main(void) {
    const char *name = "Your Name";
    const char *role = "C Programmer";
    const char *projects[] = {
        "Simple Calculator - C, console",
        "File I/O Parser - C",
        "Portfolio Website - HTML/CSS"
    };
    int n = sizeof(projects) / sizeof(projects[0]);

    printf("=== %s — %s ===\n\n", name, role);
    printf("About me:\nI build small C programs and learn algorithms.\n\n");
    printf("Projects:\n");
    for (int i = 0; i < n; ++i) {
        printf(" %d. %s\n", i + 1, projects[i]);
    }
    printf("\nContact: your.email@example.com\n");
    return 0;
}


