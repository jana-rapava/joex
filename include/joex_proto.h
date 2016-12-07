/*  =========================================================================
    joex_proto - Set the header field, transferring ownership from caller

Set the data field, transferring ownership from caller

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of CZMQ, the high-level C binding for 0MQ:       
    http://czmq.zeromq.org.                                            
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           
    =========================================================================
*/

#ifndef JOEX_PROTO_H_INCLUDED
#define JOEX_PROTO_H_INCLUDED

#include <joex.h>

#ifdef __cplusplus
extern "C" {
#endif

//  @warning THE FOLLOWING @INTERFACE BLOCK IS AUTO-GENERATED BY ZPROJECT
//  @warning Please edit the model at "api/joex_proto.api" to make changes.
//  @interface
//  This is a stable class, and may not change except for emergencies. It
//  is provided in stable builds.
#define JOEX_PROTO_HELLO 1                  // 
#define JOEX_PROTO_PING 2                   // 
#define JOEX_PROTO_PONG 3                   // 
#define JOEX_PROTO_UPLOAD 4                 // 
#define JOEX_PROTO_CHUNK 5                  // 
#define JOEX_PROTO_UPLOAD_FINISHED 6        // 
#define JOEX_PROTO_CLOSE 7                  // 
#define JOEX_PROTO_OK 8                     // 
#define JOEX_PROTO_ERROR 9                  // 

//  Create a new empty joex_proto
JOEX_EXPORT joex_proto_t *
    joex_proto_new (void);

//  Destroy a joex_proto instance
JOEX_EXPORT void
    joex_proto_destroy (joex_proto_t **self_p);

//  Receive a joex_proto from the socket. Returns 0 if OK, -1 if
//  there was an error. Blocks if there is no message waiting.  
JOEX_EXPORT int
    joex_proto_recv (joex_proto_t *self, zsock_t *input);

//  Send the joex_proto to the output socket, does not destroy it
JOEX_EXPORT int
    joex_proto_send (joex_proto_t *self, zsock_t *output);

//  Print contents of message to stdout
JOEX_EXPORT void
    joex_proto_print (joex_proto_t *self);

//  Get the message routing id, as a frame
JOEX_EXPORT zframe_t *
    joex_proto_routing_id (joex_proto_t *self);

//  Set the message routing id from a frame
JOEX_EXPORT void
    joex_proto_set_routing_id (joex_proto_t *self, zframe_t *routing_id);

//  Get the joex_proto message id
JOEX_EXPORT int
    joex_proto_id (joex_proto_t *self);

//  Set the joex_proto message id
JOEX_EXPORT void
    joex_proto_set_id (joex_proto_t *self, int id);

//  Get the joex_proto message id as printable text
JOEX_EXPORT const char *
    joex_proto_command (joex_proto_t *self);

//  Get the name field
JOEX_EXPORT const char *
    joex_proto_name (joex_proto_t *self);

//  Set the name field
JOEX_EXPORT void
    joex_proto_set_name (joex_proto_t *self, const char *name);

//  Get a copy of the header field
JOEX_EXPORT zhash_t *
    joex_proto_header (joex_proto_t *self);

//  Get the header field and transfer ownership to caller
JOEX_EXPORT zhash_t *
    joex_proto_get_header (joex_proto_t *self);

//  
JOEX_EXPORT void
    joex_proto_set_header (joex_proto_t *self, zhash_t **header_p);

//  Get the filename field
JOEX_EXPORT const char *
    joex_proto_filename (joex_proto_t *self);

//  Set the filename field
JOEX_EXPORT void
    joex_proto_set_filename (joex_proto_t *self, const char *filename);

//  Get a copy of the data field
JOEX_EXPORT zchunk_t *
    joex_proto_data (joex_proto_t *self);

//  Get the data field and transfer ownership to caller
JOEX_EXPORT zchunk_t *
    joex_proto_get_data (joex_proto_t *self);

//  
JOEX_EXPORT void
    joex_proto_set_data (joex_proto_t *self, zchunk_t **data_p);

//  Get the size field
JOEX_EXPORT uint64_t
    joex_proto_size (joex_proto_t *self);

//  Set the size field
JOEX_EXPORT void
    joex_proto_set_size (joex_proto_t *self, uint64_t size);

//  Get the offset field
JOEX_EXPORT uint64_t
    joex_proto_offset (joex_proto_t *self);

//  Set the offset field
JOEX_EXPORT void
    joex_proto_set_offset (joex_proto_t *self, uint64_t offset);

//  Get the checksum field
JOEX_EXPORT uint64_t
    joex_proto_checksum (joex_proto_t *self);

//  Set the checksum field
JOEX_EXPORT void
    joex_proto_set_checksum (joex_proto_t *self, uint64_t checksum);

//  Get the reason field
JOEX_EXPORT const char *
    joex_proto_reason (joex_proto_t *self);

//  Set the reason field
JOEX_EXPORT void
    joex_proto_set_reason (joex_proto_t *self, const char *reason);

//  Self test of this class.
JOEX_EXPORT void
    joex_proto_test (bool verbose);

//  @end

#ifdef __cplusplus
}
#endif

#endif
