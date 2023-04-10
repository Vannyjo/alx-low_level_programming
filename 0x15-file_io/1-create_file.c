#include "main.h"
/**
 * create_file -creates an array of chars, and initializes
 *
 * @text_content: is a NULL terminated string to write to the file
 * @filename: is the name of the file to create
 *
 * Return: 1 on success, -1 on failure
 */


int create_file(const char *filename, char *text_content) {
    if (filename == NULL) {
        return -1;
    }
    int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1) {
        return -1;
    }
    if (text_content != NULL) {
        ssize_t len = strlen(text_content);
        ssize_t written = write(fd, text_content, len);
        if (written != len) {
            close(fd);
            return -1;
        }
    }
    close(fd);
    return 1;
}
