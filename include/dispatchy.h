#ifndef __DISPATCHY_H_
#define __DISPATCHY_H_

#include <avcall.h>
#include <dispatchy_internal.h>
#include <lvector.h>
#include <stdint.h>
/**
 * Forward declaration
 */
struct dispatchy;

struct dispatchy_dynamic_procedure {
    av_alist alist;
};

struct dispatchy {
    lvector(struct dispatchy_dynamic_procedure) queue;
};

int dispatchy_create(struct dispatchy *dispatcher) __nonnull((1));
void dispatchy_destroy(struct dispatchy *dispatcher) __nonnull((1));
int dispatchy_process(struct dispatchy *dispatcher, size_t max_number_of_procedures, int64_t max_milliseconds_timeout_after_procedure);

#define dispatchy_enqueue(dispatcher, function, ...)                                                                  \
    ({                                                                                                                \
        int __dispatchy_enqueue_ret = 0;                                                                              \
        __dispatchy_enqueue_ret = lvector_reserve((dispatcher)->queue, (dispatcher)->queue.len + 1);                  \
        if (__dispatchy_enqueue_ret == 0) {                                                                           \
            (dispatcher)->queue.len += 1;                                                                             \
            struct dispatchy_dynamic_procedure *__dispatchy_enqueue_back_element = lvector_back((dispatcher)->queue); \
            av_start_void(__dispatchy_enqueue_back_element->alist, function);                                         \
            __DISPATCHY_FOR_EACH(__DISPATCHY_INSERT_ARGUMENT, __VA_ARGS__);                                           \
        }                                                                                                             \
        __dispatchy_enqueue_ret;                                                                                      \
    })

#endif /* !__DISPATCHY_H_ */