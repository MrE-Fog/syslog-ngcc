statsincludedir			= ${pkgincludedir}/stats

EXTRA_DIST += lib/stats/CMakeLists.txt

include lib/stats/aggregator/Makefile.am

statsinclude_HEADERS = \
	lib/stats/stats.h			\
	lib/stats/stats-compat.h \
	lib/stats/stats-control.h		\
	lib/stats/stats-counter.h		\
	lib/stats/stats-cluster.h		\
	lib/stats/stats-csv.h			\
	lib/stats/stats-log.h			\
	lib/stats/stats-prometheus.h	\
	lib/stats/stats-registry.h		\
	lib/stats/stats-query.h			\
	lib/stats/stats-query-commands.h \
	lib/stats/stats-cluster-logpipe.h \
	lib/stats/stats-cluster-single.h \
	lib/stats/stats-cluster-key-builder.h

stats_sources = \
	lib/stats/stats.c			\
	lib/stats/stats-control.c		\
	lib/stats/stats-cluster.c		\
	lib/stats/stats-csv.c			\
	lib/stats/stats-log.c			\
	lib/stats/stats-prometheus.c	\
	lib/stats/stats-registry.c		\
	lib/stats/stats-query.c			\
	lib/stats/stats-query-commands.c \
	lib/stats/stats-cluster-logpipe.c \
	lib/stats/stats-cluster-single.c \
	lib/stats/stats-cluster-key-builder.c \
	$(statsaggregator_sources)

include lib/stats/tests/Makefile.am
