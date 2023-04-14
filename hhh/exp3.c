#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    // Open the file
    int fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        perror("open");
        return 1;
    }

    // Get the size of the file
    off_t size = lseek(fd, 0, SEEK_END);
    if (size < 0) {
        perror("lseek");
        return 1;
    }

    // Map the file into memory
    void *addr = mmap(NULL, size, PROT_READ, MAP_PRIVATE, fd, 0);
    if (addr == MAP_FAILED) {
        perror("mmap");
        return 1;
    }

    // Read the file five times from memory
    for (int i = 0; i < 5; i++) {
        printf("Reading file data, round %d:\n", i+1);
        for (off_t offset = 0; offset < size; offset++) {
            putchar(*((char*)addr + offset));
        }
        printf("\n");
        sleep(1);
    }

    // Unmap the memory and close the file
    if (munmap(addr, size) < 0) {
        perror("munmap");
        return 1;
    }
    if (close(fd) < 0) {
        perror("close");
        return 1;
    }

    return 0;
}
3
