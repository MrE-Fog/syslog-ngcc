add_subdirectory(aggregator)

set(STATS_HEADERS
    stats/stats.h
    stats/stats-compat.h
    stats/stats-control.h
    stats/stats-counter.h
    stats/stats-cluster.h
    stats/stats-csv.h
    stats/stats-log.h
    stats/stats-prometheus.h
    stats/stats-registry.h
    stats/stats-query.h
    stats/stats-query-commands.h
    stats/stats-cluster-logpipe.h
    stats/stats-cluster-single.h
    stats/stats-cluster-key-builder.h
    ${STATS_AGGREGATOR_HEADERS}
    PARENT_SCOPE)

set(STATS_SOURCES
    stats/stats.c
    stats/stats-control.c
    stats/stats-cluster.c
    stats/stats-csv.c
    stats/stats-log.c
    stats/stats-prometheus.c
    stats/stats-registry.c
    stats/stats-query.c
    stats/stats-query-commands.c
    stats/stats-cluster-logpipe.c
    stats/stats-cluster-single.c
    stats/stats-cluster-key-builder.c
    ${STATS_AGGREGATOR_SOURCES}
    PARENT_SCOPE)

add_test_subdirectory(tests)
