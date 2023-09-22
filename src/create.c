#include "dispatchy.h"

int dispatchy_create(struct dispatchy *dispatcher)
{
    return lvector_create(dispatcher->queue, 0, NULL);
}