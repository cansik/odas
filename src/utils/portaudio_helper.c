#ifdef ODAS_USE_PORTAUDIO
#include <utils/portaudio_helper.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

static pthread_mutex_t pa_mutex = PTHREAD_MUTEX_INITIALIZER;
static int pa_initialized = 0;

void odas_portaudio_init(void) {
    pthread_mutex_lock(&pa_mutex);
    if (!pa_initialized) {
        PaError err = Pa_Initialize();
        if (err != paNoError) {
            printf("PortAudio initialization failed: %s\n", Pa_GetErrorText(err));
            exit(EXIT_FAILURE);
        }
        pa_initialized = 1;
    }
    pthread_mutex_unlock(&pa_mutex);
}

void odas_portaudio_terminate(void) {
    pthread_mutex_lock(&pa_mutex);
    if (pa_initialized) {
        Pa_Terminate();
        pa_initialized = 0;
    }
    pthread_mutex_unlock(&pa_mutex);
}
#endif
