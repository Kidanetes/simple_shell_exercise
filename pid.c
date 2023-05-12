#include <unistd.h>
#include <stdio.h>
/**
 * main - PID
 *
 * Return: 0
 */
int main(void)
{
        pid_t pid;

        pid = getpid();
        printf("%d\n", pid);
        return (0);
}
