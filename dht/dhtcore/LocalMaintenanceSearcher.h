#include <stdint.h>
#include <event2/event.h>

#include "dht/dhtcore/RouterModule.h"
#include "dht/dhtcore/NodeStore.h"
#include "memory/MemAllocator.h"

struct LocalMaintenanceSearcher;

struct LocalMaintenanceSearcher* LocalMaintenanceSearcher_new(uint64_t milliseconds,
                                                              struct RouterModule* routerModule,
                                                              struct NodeStore* nodeStore,
                                                              struct MemAllocator* allocator,
                                                              struct event_base* eventBase);
