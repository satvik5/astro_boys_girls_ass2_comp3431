// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from comp3431_interfaces:msg/QRCodeBlock.idl
// generated code does not contain a copyright notice

#ifndef COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__FUNCTIONS_H_
#define COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "comp3431_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "comp3431_interfaces/msg/detail/qr_code_block__struct.h"

/// Initialize msg/QRCodeBlock message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * comp3431_interfaces__msg__QRCodeBlock
 * )) before or use
 * comp3431_interfaces__msg__QRCodeBlock__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__msg__QRCodeBlock__init(comp3431_interfaces__msg__QRCodeBlock * msg);

/// Finalize msg/QRCodeBlock message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__msg__QRCodeBlock__fini(comp3431_interfaces__msg__QRCodeBlock * msg);

/// Create msg/QRCodeBlock message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * comp3431_interfaces__msg__QRCodeBlock__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__msg__QRCodeBlock *
comp3431_interfaces__msg__QRCodeBlock__create();

/// Destroy msg/QRCodeBlock message.
/**
 * It calls
 * comp3431_interfaces__msg__QRCodeBlock__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__msg__QRCodeBlock__destroy(comp3431_interfaces__msg__QRCodeBlock * msg);


/// Initialize array of msg/QRCodeBlock messages.
/**
 * It allocates the memory for the number of elements and calls
 * comp3431_interfaces__msg__QRCodeBlock__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__msg__QRCodeBlock__Sequence__init(comp3431_interfaces__msg__QRCodeBlock__Sequence * array, size_t size);

/// Finalize array of msg/QRCodeBlock messages.
/**
 * It calls
 * comp3431_interfaces__msg__QRCodeBlock__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__msg__QRCodeBlock__Sequence__fini(comp3431_interfaces__msg__QRCodeBlock__Sequence * array);

/// Create array of msg/QRCodeBlock messages.
/**
 * It allocates the memory for the array and calls
 * comp3431_interfaces__msg__QRCodeBlock__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__msg__QRCodeBlock__Sequence *
comp3431_interfaces__msg__QRCodeBlock__Sequence__create(size_t size);

/// Destroy array of msg/QRCodeBlock messages.
/**
 * It calls
 * comp3431_interfaces__msg__QRCodeBlock__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__msg__QRCodeBlock__Sequence__destroy(comp3431_interfaces__msg__QRCodeBlock__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // COMP3431_INTERFACES__MSG__DETAIL__QR_CODE_BLOCK__FUNCTIONS_H_
