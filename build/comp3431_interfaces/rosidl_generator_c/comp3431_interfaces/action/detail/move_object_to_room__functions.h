// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from comp3431_interfaces:action/MoveObjectToRoom.idl
// generated code does not contain a copyright notice

#ifndef COMP3431_INTERFACES__ACTION__DETAIL__MOVE_OBJECT_TO_ROOM__FUNCTIONS_H_
#define COMP3431_INTERFACES__ACTION__DETAIL__MOVE_OBJECT_TO_ROOM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "comp3431_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "comp3431_interfaces/action/detail/move_object_to_room__struct.h"

/// Initialize action/MoveObjectToRoom message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * comp3431_interfaces__action__MoveObjectToRoom_Goal
 * )) before or use
 * comp3431_interfaces__action__MoveObjectToRoom_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__action__MoveObjectToRoom_Goal__init(comp3431_interfaces__action__MoveObjectToRoom_Goal * msg);

/// Finalize action/MoveObjectToRoom message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_Goal__fini(comp3431_interfaces__action__MoveObjectToRoom_Goal * msg);

/// Create action/MoveObjectToRoom message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * comp3431_interfaces__action__MoveObjectToRoom_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__action__MoveObjectToRoom_Goal *
comp3431_interfaces__action__MoveObjectToRoom_Goal__create();

/// Destroy action/MoveObjectToRoom message.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_Goal__destroy(comp3431_interfaces__action__MoveObjectToRoom_Goal * msg);


/// Initialize array of action/MoveObjectToRoom messages.
/**
 * It allocates the memory for the number of elements and calls
 * comp3431_interfaces__action__MoveObjectToRoom_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence__init(comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveObjectToRoom messages.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence__fini(comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence * array);

/// Create array of action/MoveObjectToRoom messages.
/**
 * It allocates the memory for the array and calls
 * comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence *
comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveObjectToRoom messages.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence__destroy(comp3431_interfaces__action__MoveObjectToRoom_Goal__Sequence * array);

/// Initialize action/MoveObjectToRoom message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * comp3431_interfaces__action__MoveObjectToRoom_Result
 * )) before or use
 * comp3431_interfaces__action__MoveObjectToRoom_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__action__MoveObjectToRoom_Result__init(comp3431_interfaces__action__MoveObjectToRoom_Result * msg);

/// Finalize action/MoveObjectToRoom message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_Result__fini(comp3431_interfaces__action__MoveObjectToRoom_Result * msg);

/// Create action/MoveObjectToRoom message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * comp3431_interfaces__action__MoveObjectToRoom_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__action__MoveObjectToRoom_Result *
comp3431_interfaces__action__MoveObjectToRoom_Result__create();

/// Destroy action/MoveObjectToRoom message.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_Result__destroy(comp3431_interfaces__action__MoveObjectToRoom_Result * msg);


/// Initialize array of action/MoveObjectToRoom messages.
/**
 * It allocates the memory for the number of elements and calls
 * comp3431_interfaces__action__MoveObjectToRoom_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence__init(comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveObjectToRoom messages.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence__fini(comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence * array);

/// Create array of action/MoveObjectToRoom messages.
/**
 * It allocates the memory for the array and calls
 * comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence *
comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveObjectToRoom messages.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence__destroy(comp3431_interfaces__action__MoveObjectToRoom_Result__Sequence * array);

/// Initialize action/MoveObjectToRoom message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * comp3431_interfaces__action__MoveObjectToRoom_Feedback
 * )) before or use
 * comp3431_interfaces__action__MoveObjectToRoom_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__action__MoveObjectToRoom_Feedback__init(comp3431_interfaces__action__MoveObjectToRoom_Feedback * msg);

/// Finalize action/MoveObjectToRoom message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_Feedback__fini(comp3431_interfaces__action__MoveObjectToRoom_Feedback * msg);

/// Create action/MoveObjectToRoom message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * comp3431_interfaces__action__MoveObjectToRoom_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__action__MoveObjectToRoom_Feedback *
comp3431_interfaces__action__MoveObjectToRoom_Feedback__create();

/// Destroy action/MoveObjectToRoom message.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_Feedback__destroy(comp3431_interfaces__action__MoveObjectToRoom_Feedback * msg);


/// Initialize array of action/MoveObjectToRoom messages.
/**
 * It allocates the memory for the number of elements and calls
 * comp3431_interfaces__action__MoveObjectToRoom_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence__init(comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveObjectToRoom messages.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence__fini(comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence * array);

/// Create array of action/MoveObjectToRoom messages.
/**
 * It allocates the memory for the array and calls
 * comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence *
comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveObjectToRoom messages.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence__destroy(comp3431_interfaces__action__MoveObjectToRoom_Feedback__Sequence * array);

/// Initialize action/MoveObjectToRoom message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request
 * )) before or use
 * comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__init(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request * msg);

/// Finalize action/MoveObjectToRoom message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__fini(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request * msg);

/// Create action/MoveObjectToRoom message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request *
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__create();

/// Destroy action/MoveObjectToRoom message.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__destroy(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request * msg);


/// Initialize array of action/MoveObjectToRoom messages.
/**
 * It allocates the memory for the number of elements and calls
 * comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence__init(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveObjectToRoom messages.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence__fini(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence * array);

/// Create array of action/MoveObjectToRoom messages.
/**
 * It allocates the memory for the array and calls
 * comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence *
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveObjectToRoom messages.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence__destroy(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Request__Sequence * array);

/// Initialize action/MoveObjectToRoom message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response
 * )) before or use
 * comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__init(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response * msg);

/// Finalize action/MoveObjectToRoom message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__fini(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response * msg);

/// Create action/MoveObjectToRoom message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response *
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__create();

/// Destroy action/MoveObjectToRoom message.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__destroy(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response * msg);


/// Initialize array of action/MoveObjectToRoom messages.
/**
 * It allocates the memory for the number of elements and calls
 * comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence__init(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveObjectToRoom messages.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence__fini(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence * array);

/// Create array of action/MoveObjectToRoom messages.
/**
 * It allocates the memory for the array and calls
 * comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence *
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveObjectToRoom messages.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence__destroy(comp3431_interfaces__action__MoveObjectToRoom_SendGoal_Response__Sequence * array);

/// Initialize action/MoveObjectToRoom message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request
 * )) before or use
 * comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__init(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request * msg);

/// Finalize action/MoveObjectToRoom message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__fini(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request * msg);

/// Create action/MoveObjectToRoom message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request *
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__create();

/// Destroy action/MoveObjectToRoom message.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__destroy(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request * msg);


/// Initialize array of action/MoveObjectToRoom messages.
/**
 * It allocates the memory for the number of elements and calls
 * comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence__init(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveObjectToRoom messages.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence__fini(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence * array);

/// Create array of action/MoveObjectToRoom messages.
/**
 * It allocates the memory for the array and calls
 * comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence *
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveObjectToRoom messages.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence__destroy(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Request__Sequence * array);

/// Initialize action/MoveObjectToRoom message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response
 * )) before or use
 * comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__init(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response * msg);

/// Finalize action/MoveObjectToRoom message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__fini(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response * msg);

/// Create action/MoveObjectToRoom message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response *
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__create();

/// Destroy action/MoveObjectToRoom message.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__destroy(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response * msg);


/// Initialize array of action/MoveObjectToRoom messages.
/**
 * It allocates the memory for the number of elements and calls
 * comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence__init(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveObjectToRoom messages.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence__fini(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence * array);

/// Create array of action/MoveObjectToRoom messages.
/**
 * It allocates the memory for the array and calls
 * comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence *
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveObjectToRoom messages.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence__destroy(comp3431_interfaces__action__MoveObjectToRoom_GetResult_Response__Sequence * array);

/// Initialize action/MoveObjectToRoom message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage
 * )) before or use
 * comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__init(comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage * msg);

/// Finalize action/MoveObjectToRoom message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__fini(comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage * msg);

/// Create action/MoveObjectToRoom message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage *
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__create();

/// Destroy action/MoveObjectToRoom message.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__destroy(comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage * msg);


/// Initialize array of action/MoveObjectToRoom messages.
/**
 * It allocates the memory for the number of elements and calls
 * comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
bool
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence__init(comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveObjectToRoom messages.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence__fini(comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence * array);

/// Create array of action/MoveObjectToRoom messages.
/**
 * It allocates the memory for the array and calls
 * comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence *
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveObjectToRoom messages.
/**
 * It calls
 * comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_comp3431_interfaces
void
comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence__destroy(comp3431_interfaces__action__MoveObjectToRoom_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // COMP3431_INTERFACES__ACTION__DETAIL__MOVE_OBJECT_TO_ROOM__FUNCTIONS_H_
