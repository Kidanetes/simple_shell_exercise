#include <stdio.h>
#include <unistd.h>
/**
 * main - ppid
 *
 * Return: 0
 */
int main(void)
{
        pid_t ppid;

        ppid = getppid();
        printf("%d\n", ppid);
        return (0);

}
