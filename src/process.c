#include "dispatchy.h"
#include <sys/time.h>

int dispatchy_process(struct dispatchy *dispatcher, size_t max_number_of_procedures, int64_t max_milliseconds_timeout_after_procedure)
{
    struct timeval tv_start;
    struct timeval tv_stop;
    struct timeval tv_diff;
    int64_t total_ms_elapsed;

    if (lvector_size(dispatcher->queue) == 0) {
        return 0;
    }
    if (max_milliseconds_timeout_after_procedure > 0 && gettimeofday(&tv_start, NULL) == -1) {
        return -1;
    }
    for (size_t i = 0; i < max_number_of_procedures; ++i) {
        av_call(lvector_front(dispatcher->queue)->alist);
        lvector_erase(dispatcher->queue, 0);
        if (lvector_size(dispatcher->queue) == 0) {
            break;
        }
        if (max_milliseconds_timeout_after_procedure > 0) {
            if (gettimeofday(&tv_stop, NULL) == -1) {
                return -1;
            }
            timersub(&tv_stop, &tv_start, &tv_diff);
            total_ms_elapsed = (tv_diff.tv_sec * (uint64_t)1000) + (tv_diff.tv_usec / 1000);
            if (total_ms_elapsed > max_milliseconds_timeout_after_procedure) {
                break;
            }
        }
    }
    return 0;
}