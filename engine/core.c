#include "core.h"

void coldInit(ColdCore *core)
{
    gfxInitDefault();
    hidInit();

    core->running = true;
}

void coldUpdate(ColdCore *core)
{
    hidScanInput();

    u32 kDown = hidKeysDown();

    if (kDown & KEY_START)
        core->running = false;

    gfxFlushBuffers();
    gfxSwapBuffers();
    gspWaitForVBlank();
}

void coldExit(ColdCore *core)
{
    hidExit();
    gfxExit();
}

bool coldIsRunning(ColdCore *core)
{
    return core->running;
}
