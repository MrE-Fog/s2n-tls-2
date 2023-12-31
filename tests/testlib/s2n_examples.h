/*
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#pragma once

#include "s2n.h"

int s2n_example_negotiate(struct s2n_connection *conn);
int s2n_example_recv(struct s2n_connection *conn, uint8_t *buffer, size_t buffer_size);
int s2n_example_recv_echo(struct s2n_connection *conn, uint8_t *buffer, size_t buffer_size);
int s2n_example_send(struct s2n_connection *conn, uint8_t *data, size_t data_size);
int s2n_example_sendv(struct s2n_connection *conn, uint8_t *data, size_t data_size);
