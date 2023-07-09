#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>

int main()
{
    if (mkdir("/tmp/foo", DIR_PERM) < 0)
        err_sys("mkdir failed");
    if (chdir("/tmp/foo") < 0)
        err_sys("chdir failed");
    if (rmdir("/tmp/foo") < 0)
        err_sys("rmdir failed");
    return 0;
}