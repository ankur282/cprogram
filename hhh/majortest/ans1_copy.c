#include <stdio.h>

int main() {
    FILE *source, *dest;
    char source_file[100], dest_file[100];
    char ch;

    printf("Enter the path of the source file: ");
    scanf("%s", source_file);

    printf("Enter the path of the destination file: ");
    scanf("%s", dest_file);
    source = fopen(source_file, "r");
    if (source == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    dest = fopen(dest_file, "w");
    if (dest == NULL) {
        printf("Unable to open destination file.\n");
        fclose(source);
        return 1;
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }
    printf("File copied successfully.\n");
    fclose(source);
    fclose(dest);
    return 0;
}
