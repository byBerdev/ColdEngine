#include "render.h"

void coldRenderInit(ColdRenderer *r)
{
    C3D_Init(C3D_DEFAULT_CMDBUF_SIZE);
    C2D_Init(C2D_DEFAULT_MAX_OBJECTS);

    r->top = C2D_CreateScreenTarget(GFX_TOP, GFX_LEFT);
    r->bottom = C2D_CreateScreenTarget(GFX_BOTTOM, GFX_LEFT);
}

void coldRenderBeginTop(void)
{
    C2D_TargetClear(C2D_GetScreenTarget(GFX_TOP, GFX_LEFT), 0x000000FF);
    C2D_SceneBegin(C2D_GetScreenTarget(GFX_TOP, GFX_LEFT));
}

void coldRenderBeginBottom(void)
{
    C2D_TargetClear(C2D_GetScreenTarget(GFX_BOTTOM, GFX_LEFT), 0x000000FF);
    C2D_SceneBegin(C2D_GetScreenTarget(GFX_BOTTOM, GFX_LEFT));
}

void coldRenderEnd(void)
{
    C3D_FrameEnd(0);
}

void coldClear(u32 color)
{
    (void)color;
}
