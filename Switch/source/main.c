#include <switch.h>

int main(int argc, char* argv[])
{
    consoleInit(NULL);

    printf("SwitchStream MVP\n");
    printf("================\n\n");
    printf("Waiting for phone connection...\n");
    printf("Port: 9000\n\n");
    printf("Press PLUS to exit.\n");

    while (appletMainLoop())
    {
        hidScanInput();

        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);

        if (kDown & KEY_PLUS)
            break;

        consoleUpdate(NULL);
    }

    consoleExit(NULL);
    return 0;
}
