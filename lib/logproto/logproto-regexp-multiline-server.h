/*
 * Copyright (c) 2013 Balabit
 * Copyright (c) 2013 Balazs Scheidler <bazsi@balabit.hu>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As an additional exemption you are allowed to compile & link against the
 * OpenSSL libraries as published by the OpenSSL project. See the file
 * COPYING for details.
 *
 */
#ifndef LOGPROTO_REGEXP_MULTILINE_SERVER_INCLUDED
#define LOGPROTO_REGEXP_MULTILINE_SERVER_INCLUDED

#include "logproto-text-server.h"
#include "multi-line/regexp-multi-line.h"

typedef struct _LogProtoREMultiLineServer LogProtoREMultiLineServer;

/* LogProtoREMultiLineServer
 *
 * This class processes indented multiline text files/streams.  Each
 * record consists of one line that starts with non-whitespace, with
 * zero or more lines starting with whitespace. A record is terminated
 * when we reach a line that starts with non-whitespace, or EOF.
 */
LogProtoServer *log_proto_prefix_garbage_multiline_server_new(LogTransport *transport,
    const LogProtoServerOptions *options,
    MultiLinePattern *prefix,
    MultiLinePattern *garbage);

LogProtoServer *log_proto_prefix_suffix_multiline_server_new(LogTransport *transport,
    const LogProtoServerOptions *options,
    MultiLinePattern *prefix,
    MultiLinePattern *suffix);

#endif
