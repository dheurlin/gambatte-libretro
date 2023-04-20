#ifndef LIBRETRO_EXT_H__
#define LIBRETRO_EXT_H__

#define BREAKPOINT_HIT -2

#ifdef __cplusplus
extern "C" {
#endif

void ext_setPCBreakpoint(unsigned short offset);
void ext_clearPCBreakpoints();

#ifdef __cplusplus
}
#endif

#endif
