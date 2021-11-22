// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from comp3431_interfaces:srv/MapInfo.idl
// generated code does not contain a copyright notice

#ifndef COMP3431_INTERFACES__SRV__DETAIL__MAP_INFO__FUNCTIONS_H_
#define COMP3431_INTERFACES__SRV__DETAIL__MAP_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "comp3431_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "comp3431_interfaces/srv/detail/map_info__struct.h"

/// Initialize srv/MapInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * comp3431_interfaces__srv__MapInfo_Request
 * )) before or use
 * comp3431_interfaces__srv__MapInfo_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__srv__MapInfo_Request__init(comp3431_interfaces__srv__MapInfo_Request * msg);

/// Finalize srv/MapInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__srv__MapInfo_Request__fini(comp3431_interfaces__srv__MapInfo_Request * msg);

/// Create srv/MapInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * comp3431_interfaces__srv__MapInfo_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__srv__MapInfo_Request *
comp3431_interfaces__srv__MapInfo_Request__create();

/// Destroy srv/MapInfo message.
/**
 * It calls
 * comp3431_interfaces__srv__MapInfo_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__srv__MapInfo_Request__destroy(comp3431_interfaces__srv__MapInfo_Request * msg);


/// Initialize array of srv/MapInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * comp3431_interfaces__srv__MapInfo_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__srv__MapInfo_Request__Sequence__init(comp3431_interfaces__srv__MapInfo_Request__Sequence * array, size_t size);

/// Finalize array of srv/MapInfo messages.
/**
 * It calls
 * comp3431_interfaces__srv__MapInfo_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__srv__MapInfo_Request__Sequence__fini(comp3431_interfaces__srv__MapInfo_Request__Sequence * array);

/// Create array of srv/MapInfo messages.
/**
 * It allocates the memory for the array and calls
 * comp3431_interfaces__srv__MapInfo_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__srv__MapInfo_Request__Sequence *
comp3431_interfaces__srv__MapInfo_Request__Sequence__create(size_t size);

/// Destroy array of srv/MapInfo messages.
/**
 * It calls
 * comp3431_interfaces__srv__MapInfo_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__srv__MapInfo_Request__Sequence__destroy(comp3431_interfaces__srv__MapInfo_Request__Sequence * array);

/// Initialize srv/MapInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * comp3431_interfaces__srv__MapInfo_Response
 * )) before or use
 * comp3431_interfaces__srv__MapInfo_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__srv__MapInfo_Response__init(comp3431_interfaces__srv__MapInfo_Response * msg);

/// Finalize srv/MapInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__srv__MapInfo_Response__fini(comp3431_interfaces__srv__MapInfo_Response * msg);

/// Create srv/MapInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * comp3431_interfaces__srv__MapInfo_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__srv__MapInfo_Response *
comp3431_interfaces__srv__MapInfo_Response__create();

/// Destroy srv/MapInfo message.
/**
 * It calls
 * comp3431_interfaces__srv__MapInfo_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__srv__MapInfo_Response__destroy(comp3431_interfaces__srv__MapInfo_Response * msg);


/// Initialize array of srv/MapInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * comp3431_interfaces__srv__MapInfo_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__srv__MapInfo_Response__Sequence__init(comp3431_interfaces__srv__MapInfo_Response__Sequence * array, size_t size);

/// Finalize array of srv/MapInfo messages.
/**
 * It calls
 * comp3431_interfaces__srv__MapInfo_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__srv__MapInfo_Response__Sequence__fini(comp3431_interfaces__srv__MapInfo_Response__Sequence * array);

/// Create array of srv/MapInfo messages.
/**
 * It allocates the memory for the array and calls
 * comp3431_interfaces__srv__MapInfo_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__srv__MapInfo_Response__Sequence *
comp3431_interfaces__srv__MapInfo_Response__Sequence__create(size_t size);

/// Destroy array of srv/MapInfo messages.
/**
 * It calls
 * comp3431_interfaces__srv__MapInfo_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__srv__MapInfo_Response__Sequence__destroy(comp3431_interfaces__srv__MapInfo_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // COMP3431_INTERFACES__SRV__DETAIL__MAP_INFO__FUNCTIONS_H_
