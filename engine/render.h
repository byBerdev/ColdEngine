#ifndef COLD_RENDER_H
#define COLD_RENDER_H

#include <citro2d.h>

typedef struct {
    C3D_RenderTarget *top;
    C3D_RenderTarget *bottom;
} ColdRenderer;

void coldRenderInit(ColdRenderer *r);
void coldRenderBeginTop(void);
void coldRenderBeginBottom(void);
void coldRenderEnd(void);

void coldClear(u32 color);

#endif
