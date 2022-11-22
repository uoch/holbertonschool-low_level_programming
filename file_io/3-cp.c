#include "main.h"
/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
int main(int argc, char *argv[])
{
    int from, to, r, w, ok1, ok2;
    char *buffer;

    buffer = malloc(sizeof(char) * 1024);
    if (buffer == NULL)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    from = open(argv[1], O_RDONLY);
    r = read(from, buffer, 1024);
    to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (from == -1 || r == -1)
    {
        dprintf(STDERR_FILENO,
                "Error: Can't read from file %s\n", argv[1]);
        free(buffer);
        exit(98);
    }
    while (r > 0)
    {
        w = write(to, buffer, r);
        if (to == -1 || w == -1)
        {
            dprintf(STDERR_FILENO,
                    "Error: Can't write to %s\n", argv[2]);
            free(buffer);
            exit(99);
        }
        r = read(from, buffer, 1024);
        to = open(argv[2], O_WRONLY | O_APPEND);
    }
    free(buffer);
    ok1 = close(from);
    if (ok1 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
        exit(100);
    }
    ok2 = close(to);
    if (ok2 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
        exit(100);
    }
}
