/* Gearman server and library
 * Copyright (C) 2008 Brian Aker, Eric Day
 * All rights reserved.
 *
 * Use and distribution licensed under the BSD license.  See
 * the COPYING file in the parent directory for full text.
 */

/**
 * @file
 * @brief Server connection declarations
 */

#ifndef __GEARMAN_SERVER_CON_H__
#define __GEARMAN_SERVER_CON_H__

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup gearman_server_con Server Connection Handling
 * @ingroup gearman_server
 * This is a low level interface for gearman server connections. This is used
 * internally by the server interface, so you probably want to look there first.
 * @{
 */

/**
 * Add a connection to a server thread. This goes into a list of connections
 * that is used later with server_thread_run, no socket I/O happens here.
 * @param thread Thread structure previously initialized with
 *        gearman_server_thread_create.
 * @param server_con Caller allocated server connection structure, or NULL to
          allocate one.
 * @param fd File descriptor for a newly accepted connection.
 * @param data Application data pointer.
 * @return Gearman server connection pointer.
 */
gearman_server_con_st *gearman_server_con_add(gearman_server_thread_st *thread,
                                              int fd, const char *host,
                                              void *data);

/**
 * Initialize a server connection structure.
 */
gearman_server_con_st *
gearman_server_con_create(gearman_server_thread_st *thread);

/**
 * Free a server connection structure.
 */
void gearman_server_con_free(gearman_server_con_st *server_con);

/**
 * Get application data pointer.
 */
void *gearman_server_con_data(gearman_server_con_st *server_con);

/**
 * Set application data pointer.
 */
void gearman_server_con_set_data(gearman_server_con_st *server_con, void *data);

/**
 * Get client addr.
 */
const char *gearman_server_con_addr(gearman_server_con_st *server_con);

/**
 * Set client addr.
 */
void gearman_server_con_set_addr(gearman_server_con_st *server_con,
                                 const char *addr);

/**
 * Get client id.
 */
const char *gearman_server_con_id(gearman_server_con_st *server_con);

/**
 * Set client id.
 */
void gearman_server_con_set_id(gearman_server_con_st *server_con, char *id,
                               size_t size);

/**
 * Add a server packet structure to a connection.
 */
gearman_return_t
gearman_server_con_packet_add(gearman_server_con_st *server_con,
                              gearman_magic_t magic, gearman_command_t command,
                              const void *arg, ...);

/**
 * Remove the first server packet structure from a connection.
 */
void gearman_server_con_packet_remove(gearman_server_con_st *server_con);

/**
 * Free server worker struction with name for a server connection.
 */
void gearman_server_con_free_worker(gearman_server_con_st *server_con,
                                    char *function_name,
                                    size_t function_name_size);

/**
 * Free all server worker structures for a server connection.
 */
void gearman_server_con_free_workers(gearman_server_con_st *server_con);

/**
 * Add connection to the io thread list.
 */
void gearman_server_con_io_add(gearman_server_con_st *server_con);

/**
 * Remove connection from the io thread list.
 */
void gearman_server_con_io_remove(gearman_server_con_st *server_con);

/**
 * Get next connection from the io thread list.
 */
gearman_server_con_st *
gearman_server_con_io_next(gearman_server_thread_st *thread);

/**
 * Add connection to the proc thread list.
 */
void gearman_server_con_proc_add(gearman_server_con_st *server_con);

/**
 * Remove connection from the proc thread list.
 */
void gearman_server_con_proc_remove(gearman_server_con_st *server_con);

/**
 * Get next connection from the proc thread list.
 */
gearman_server_con_st *
gearman_server_con_proc_next(gearman_server_thread_st *thread);

/** @} */

#ifdef __cplusplus
}
#endif

#endif /* __GEARMAN_SERVER_CON_H__ */
