#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv) {
    int file_descriptor = open(argv[1], O_RDONLY);
    if (file_descriptor < 0) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    off_t file_size = lseek(file_descriptor, 0, SEEK_END);
    if (file_size < 0) {
        perror("lseek");
        exit(EXIT_FAILURE);
    }

    void *mapped_file = mmap(NULL, file_size, PROT_READ, MAP_PRIVATE, file_descriptor, 0);
    if (mapped_file == MAP_FAILED) {
        perror("mmap");
        exit(EXIT_FAILURE);
    }

    char *data = mapped_file;
    for (int i = 0; i < 5; i++) {
        printf("Data: %s\n", data);
        data += file_size;
    }

    if (munmap(mapped_file, file_size) < 0) {
        perror("munmap");
        exit(EXIT_FAILURE);
    }

    if (close(file_descriptor) < 0) {
        perror("close");
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;
}
