#ifndef COLD_CORE_H
#define COLD_CORE_H

#include <3ds.h>
#include <stdbool.h>

typedef struct {
    bool running;
} ColdCore;

void coldInit(ColdCore *core);
void coldUpdate(ColdCore *core);
void coldExit(ColdCore *core);
bool coldIsRunning(ColdCore *core);

#endif
