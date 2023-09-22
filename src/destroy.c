#include "dispatchy.h"

void dispatchy_destroy(struct dispatchy *dispatcher)
{
    lvector_destroy(dispatcher->queue);
}