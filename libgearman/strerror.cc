/*  vim:expandtab:shiftwidth=2:tabstop=2:smarttab:
 * 
 *  Gearmand client and server library.
 *
 *  Copyright (C) 2010-2012 Data Differential, http://datadifferential.com/
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are
 *  met:
 *
 *      * Redistributions of source code must retain the above copyright
 *  notice, this list of conditions and the following disclaimer.
 *
 *      * Redistributions in binary form must reproduce the above
 *  copyright notice, this list of conditions and the following disclaimer
 *  in the documentation and/or other materials provided with the
 *  distribution.
 *
 *      * The names of its contributors may not be used to endorse or
 *  promote products derived from this software without specific prior
 *  written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */


/**
 * @file
 * @brief gearman_strerror()
 */

#include "gear_config.h"
#include <libgearman/common.h>

// Please see https://gearman.org/gearmand/libgearman/gearman_return_t/

const char *gearman_strerror(gearman_return_t rc)
{
  switch (rc)
  {
  case GEARMAN_SUCCESS: return "GEARMAN_SUCCESS";

  case GEARMAN_ARGUMENT_TOO_LARGE: return "GEARMAN_ARGUMENT_TOO_LARGE";
  case GEARMAN_COULD_NOT_CONNECT: return "GEARMAN_COULD_NOT_CONNECT";
  case GEARMAN_DATA_TOO_LARGE: return "GEARMAN_DATA_TOO_LARGE";
  case GEARMAN_ECHO_DATA_CORRUPTION: return "GEARMAN_ECHO_DATA_CORRUPTION";
  case GEARMAN_ERRNO: return "GEARMAN_ERRNO";
  case GEARMAN_EVENT: return "GEARMAN_EVENT";
  case GEARMAN_FLUSH_DATA: return "GEARMAN_FLUSH_DATA";
  case GEARMAN_GETADDRINFO: return "GEARMAN_GETADDRINFO";
  case GEARMAN_IGNORE_PACKET: return "GEARMAN_IGNORE_PACKET";
  case GEARMAN_INVALID_ARGUMENT: return "GEARMAN_INVALID_ARGUMENT";
  case GEARMAN_INVALID_COMMAND: return "GEARMAN_INVALID_COMMAND";
  case GEARMAN_INVALID_FUNCTION_NAME: return "GEARMAN_INVALID_FUNCTION_NAME";
  case GEARMAN_INVALID_MAGIC: return "GEARMAN_INVALID_MAGIC";
  case GEARMAN_INVALID_PACKET: return "GEARMAN_INVALID_PACKET";
  case GEARMAN_INVALID_WORKER_FUNCTION: return "GEARMAN_INVALID_WORKER_FUNCTION";
  case GEARMAN_IN_PROGRESS: return "GEARMAN_IN_PROGRESS";
  case GEARMAN_IO_WAIT: return "GEARMAN_IO_WAIT";
  case GEARMAN_JOB_EXISTS: return "GEARMAN_JOB_EXISTS";
  case GEARMAN_JOB_QUEUE_FULL: return "GEARMAN_JOB_QUEUE_FULL";
  case GEARMAN_LOST_CONNECTION: return "GEARMAN_LOST_CONNECTION";
  case GEARMAN_MEMORY_ALLOCATION_FAILURE: return "GEARMAN_MEMORY_ALLOCATION_FAILURE";
  case GEARMAN_NEED_WORKLOAD_FN: return "GEARMAN_NEED_WORKLOAD_FN";
  case GEARMAN_NOT_CONNECTED: return "GEARMAN_NOT_CONNECTED";
  case GEARMAN_NOT_FLUSHING: return "GEARMAN_NOT_FLUSHING";
  case GEARMAN_NO_ACTIVE_FDS: return "GEARMAN_NO_ACTIVE_FDS";
  case GEARMAN_NO_JOBS: return "GEARMAN_NO_JOBS";
  case GEARMAN_NO_REGISTERED_FUNCTION: return "GEARMAN_NO_REGISTERED_FUNCTION";
  case GEARMAN_NO_REGISTERED_FUNCTIONS: return "GEARMAN_NO_REGISTERED_FUNCTIONS";
  case GEARMAN_NO_SERVERS: return "GEARMAN_NO_SERVERS";
  case GEARMAN_PAUSE: return "GEARMAN_PAUSE";
  case GEARMAN_PIPE_EOF: return "GEARMAN_PIPE_EOF";
  case GEARMAN_PTHREAD: return "GEARMAN_PTHREAD";
  case GEARMAN_QUEUE_ERROR: return "GEARMAN_QUEUE_ERROR";
  case GEARMAN_RECV_IN_PROGRESS: return "GEARMAN_RECV_IN_PROGRESS";
  case GEARMAN_SEND_BUFFER_TOO_SMALL: return "GEARMAN_SEND_BUFFER_TOO_SMALL";
  case GEARMAN_SEND_IN_PROGRESS: return "GEARMAN_SEND_IN_PROGRESS";
  case GEARMAN_SERVER_ERROR: return "GEARMAN_SERVER_ERROR";
  case GEARMAN_SHUTDOWN: return "GEARMAN_SHUTDOWN";
  case GEARMAN_SHUTDOWN_GRACEFUL: return "GEARMAN_SHUTDOWN_GRACEFUL";
  case GEARMAN_TIMEOUT: return "GEARMAN_TIMEOUT";
  case GEARMAN_TOO_MANY_ARGS: return "GEARMAN_TOO_MANY_ARGS";
  case GEARMAN_UNEXPECTED_PACKET: return "GEARMAN_UNEXPECTED_PACKET";
  case GEARMAN_UNKNOWN_OPTION: return "GEARMAN_UNKNOWN_OPTION";
  case GEARMAN_UNKNOWN_STATE: return "GEARMAN_UNKNOWN_STATE";
  case GEARMAN_WORK_DATA: return "GEARMAN_WORK_DATA";
  case GEARMAN_WORK_ERROR: return "GEARMAN_WORK_ERROR";
  case GEARMAN_WORK_EXCEPTION: return "GEARMAN_WORK_EXCEPTION";
  case GEARMAN_WORK_FAIL: return "GEARMAN_WORK_FAIL";
  case GEARMAN_WORK_STATUS: return "GEARMAN_WORK_STATUS";
  case GEARMAN_WORK_WARNING: return "GEARMAN_WORK_WARNING";
  case GEARMAN_INVALID_SERVER_OPTION: return "GEARMAN_INVALID_SERVER_OPTION";
  case GEARMAN_JOB_NOT_FOUND: return "GEARMAN_JOB_NOT_FOUND";

  case GEARMAN_MAX_RETURN:
  default:
    return "GEARMAN_MAX_RETURN";
  }
}
