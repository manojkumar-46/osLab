#include <stdio.h>
#include <sys/stat.h>
int main() {
    chmod("sample.txt", 0777);
    printf("Permissions changed successfully.\n");
    return 0;
}