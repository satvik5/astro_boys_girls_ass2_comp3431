// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from comp3431_interfaces:action/MoveObjectToRoom.idl
// generated code does not contain a copyright notice

#ifndef COMP3431_INTERFACES__ACTION__DETAIL__MOVE_OBJECT_TO_ROOM__TRAITS_HPP_
#define COMP3431_INTERFACES__ACTION__DETAIL__MOVE_OBJECT_TO_ROOM__TRAITS_HPP_

#include "comp3431_interfaces/action/detail/move_object_to_room__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<comp3431_interfaces::action::MoveObjectToRoom_Goal>()
{
  return "comp3431_interfaces::action::MoveObjectToRoom_Goal";
}

template<>
inline const char * name<comp3431_interfaces::action::MoveObjectToRoom_Goal>()
{
  return "comp3431_interfaces/action/MoveObjectToRoom_Goal";
}

template<>
struct has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<comp3431_interfaces::action::MoveObjectToRoom_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<comp3431_interfaces::action::MoveObjectToRoom_Result>()
{
  return "comp3431_interfaces::action::MoveObjectToRoom_Result";
}

template<>
inline const char * name<comp3431_interfaces::action::MoveObjectToRoom_Result>()
{
  return "comp3431_interfaces/action/MoveObjectToRoom_Result";
}

template<>
struct has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<comp3431_interfaces::action::MoveObjectToRoom_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<comp3431_interfaces::action::MoveObjectToRoom_Feedback>()
{
  return "comp3431_interfaces::action::MoveObjectToRoom_Feedback";
}

template<>
inline const char * name<comp3431_interfaces::action::MoveObjectToRoom_Feedback>()
{
  return "comp3431_interfaces/action/MoveObjectToRoom_Feedback";
}

template<>
struct has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<comp3431_interfaces::action::MoveObjectToRoom_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "comp3431_interfaces/action/detail/move_object_to_room__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Request>()
{
  return "comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Request";
}

template<>
inline const char * name<comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Request>()
{
  return "comp3431_interfaces/action/MoveObjectToRoom_SendGoal_Request";
}

template<>
struct has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Response>()
{
  return "comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Response";
}

template<>
inline const char * name<comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Response>()
{
  return "comp3431_interfaces/action/MoveObjectToRoom_SendGoal_Response";
}

template<>
struct has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<comp3431_interfaces::action::MoveObjectToRoom_SendGoal>()
{
  return "comp3431_interfaces::action::MoveObjectToRoom_SendGoal";
}

template<>
inline const char * name<comp3431_interfaces::action::MoveObjectToRoom_SendGoal>()
{
  return "comp3431_interfaces/action/MoveObjectToRoom_SendGoal";
}

template<>
struct has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Request>::value &&
    has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Request>::value &&
    has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<comp3431_interfaces::action::MoveObjectToRoom_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<comp3431_interfaces::action::MoveObjectToRoom_GetResult_Request>()
{
  return "comp3431_interfaces::action::MoveObjectToRoom_GetResult_Request";
}

template<>
inline const char * name<comp3431_interfaces::action::MoveObjectToRoom_GetResult_Request>()
{
  return "comp3431_interfaces/action/MoveObjectToRoom_GetResult_Request";
}

template<>
struct has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<comp3431_interfaces::action::MoveObjectToRoom_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "comp3431_interfaces/action/detail/move_object_to_room__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<comp3431_interfaces::action::MoveObjectToRoom_GetResult_Response>()
{
  return "comp3431_interfaces::action::MoveObjectToRoom_GetResult_Response";
}

template<>
inline const char * name<comp3431_interfaces::action::MoveObjectToRoom_GetResult_Response>()
{
  return "comp3431_interfaces/action/MoveObjectToRoom_GetResult_Response";
}

template<>
struct has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_Result>::value> {};

template<>
struct has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_Result>::value> {};

template<>
struct is_message<comp3431_interfaces::action::MoveObjectToRoom_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<comp3431_interfaces::action::MoveObjectToRoom_GetResult>()
{
  return "comp3431_interfaces::action::MoveObjectToRoom_GetResult";
}

template<>
inline const char * name<comp3431_interfaces::action::MoveObjectToRoom_GetResult>()
{
  return "comp3431_interfaces/action/MoveObjectToRoom_GetResult";
}

template<>
struct has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_GetResult_Request>::value &&
    has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_GetResult_Request>::value &&
    has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_GetResult_Response>::value
  >
{
};

template<>
struct is_service<comp3431_interfaces::action::MoveObjectToRoom_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<comp3431_interfaces::action::MoveObjectToRoom_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<comp3431_interfaces::action::MoveObjectToRoom_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "comp3431_interfaces/action/detail/move_object_to_room__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<comp3431_interfaces::action::MoveObjectToRoom_FeedbackMessage>()
{
  return "comp3431_interfaces::action::MoveObjectToRoom_FeedbackMessage";
}

template<>
inline const char * name<comp3431_interfaces::action::MoveObjectToRoom_FeedbackMessage>()
{
  return "comp3431_interfaces/action/MoveObjectToRoom_FeedbackMessage";
}

template<>
struct has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<comp3431_interfaces::action::MoveObjectToRoom_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<comp3431_interfaces::action::MoveObjectToRoom_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<comp3431_interfaces::action::MoveObjectToRoom_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<comp3431_interfaces::action::MoveObjectToRoom>
  : std::true_type
{
};

template<>
struct is_action_goal<comp3431_interfaces::action::MoveObjectToRoom_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<comp3431_interfaces::action::MoveObjectToRoom_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<comp3431_interfaces::action::MoveObjectToRoom_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // COMP3431_INTERFACES__ACTION__DETAIL__MOVE_OBJECT_TO_ROOM__TRAITS_HPP_
