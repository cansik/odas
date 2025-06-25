#ifndef __ODAS_PORTAUDIO_HELPER
#define __ODAS_PORTAUDIO_HELPER

#ifdef ODAS_USE_PORTAUDIO
#include <portaudio.h>
void odas_portaudio_init(void);
void odas_portaudio_terminate(void);
#else
static inline void odas_portaudio_init(void) {}
static inline void odas_portaudio_terminate(void) {}
#endif

#endif
