/**
 * A simple fopen test. Don't recall why I implemented this.
 */
#include <stdio.h>

int main(void)
{
    FILE *fh = fopen("/tmp/test.txt", "w");
    if (!fh) {
        perror("fopen");
        return -1;
    } else {
        printf("Writing to file\n");
        fprintf(fh, "test\n");
        fclose(fh);
    }
}
