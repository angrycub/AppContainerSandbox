#include <windows.h>
#include <stdio.h>
#include "ContainerCreate.h"
#include "ContainerTest.h"

int main(int argc, char *argv[])
{
    if(!IsInAppContainer())
    {
        RunExecutableInContainer(argv[0]);
    }else{
        RunContainerTests();
    }
    printf("Press the enter key to continue...\n");
    int a = getchar(); // assign to a variable to quiet a linter whine

    return 0;
}
