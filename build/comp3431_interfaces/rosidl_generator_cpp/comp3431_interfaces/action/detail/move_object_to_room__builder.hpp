// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from comp3431_interfaces:action/MoveObjectToRoom.idl
// generated code does not contain a copyright notice

#ifndef COMP3431_INTERFACES__ACTION__DETAIL__MOVE_OBJECT_TO_ROOM__BUILDER_HPP_
#define COMP3431_INTERFACES__ACTION__DETAIL__MOVE_OBJECT_TO_ROOM__BUILDER_HPP_

#include "comp3431_interfaces/action/detail/move_object_to_room__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace comp3431_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveObjectToRoom_Goal_room
{
public:
  explicit Init_MoveObjectToRoom_Goal_room(::comp3431_interfaces::action::MoveObjectToRoom_Goal & msg)
  : msg_(msg)
  {}
  ::comp3431_interfaces::action::MoveObjectToRoom_Goal room(::comp3431_interfaces::action::MoveObjectToRoom_Goal::_room_type arg)
  {
    msg_.room = std::move(arg);
    return std::move(msg_);
  }

private:
  ::comp3431_interfaces::action::MoveObjectToRoom_Goal msg_;
};

class Init_MoveObjectToRoom_Goal_object
{
public:
  Init_MoveObjectToRoom_Goal_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveObjectToRoom_Goal_room object(::comp3431_interfaces::action::MoveObjectToRoom_Goal::_object_type arg)
  {
    msg_.object = std::move(arg);
    return Init_MoveObjectToRoom_Goal_room(msg_);
  }

private:
  ::comp3431_interfaces::action::MoveObjectToRoom_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::comp3431_interfaces::action::MoveObjectToRoom_Goal>()
{
  return comp3431_interfaces::action::builder::Init_MoveObjectToRoom_Goal_object();
}

}  // namespace comp3431_interfaces


namespace comp3431_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::comp3431_interfaces::action::MoveObjectToRoom_Result>()
{
  return ::comp3431_interfaces::action::MoveObjectToRoom_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace comp3431_interfaces


namespace comp3431_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::comp3431_interfaces::action::MoveObjectToRoom_Feedback>()
{
  return ::comp3431_interfaces::action::MoveObjectToRoom_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace comp3431_interfaces


namespace comp3431_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveObjectToRoom_SendGoal_Request_goal
{
public:
  explicit Init_MoveObjectToRoom_SendGoal_Request_goal(::comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Request goal(::comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Request msg_;
};

class Init_MoveObjectToRoom_SendGoal_Request_goal_id
{
public:
  Init_MoveObjectToRoom_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveObjectToRoom_SendGoal_Request_goal goal_id(::comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveObjectToRoom_SendGoal_Request_goal(msg_);
  }

private:
  ::comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Request>()
{
  return comp3431_interfaces::action::builder::Init_MoveObjectToRoom_SendGoal_Request_goal_id();
}

}  // namespace comp3431_interfaces


namespace comp3431_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveObjectToRoom_SendGoal_Response_stamp
{
public:
  explicit Init_MoveObjectToRoom_SendGoal_Response_stamp(::comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Response stamp(::comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Response msg_;
};

class Init_MoveObjectToRoom_SendGoal_Response_accepted
{
public:
  Init_MoveObjectToRoom_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveObjectToRoom_SendGoal_Response_stamp accepted(::comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveObjectToRoom_SendGoal_Response_stamp(msg_);
  }

private:
  ::comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::comp3431_interfaces::action::MoveObjectToRoom_SendGoal_Response>()
{
  return comp3431_interfaces::action::builder::Init_MoveObjectToRoom_SendGoal_Response_accepted();
}

}  // namespace comp3431_interfaces


namespace comp3431_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveObjectToRoom_GetResult_Request_goal_id
{
public:
  Init_MoveObjectToRoom_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::comp3431_interfaces::action::MoveObjectToRoom_GetResult_Request goal_id(::comp3431_interfaces::action::MoveObjectToRoom_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::comp3431_interfaces::action::MoveObjectToRoom_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::comp3431_interfaces::action::MoveObjectToRoom_GetResult_Request>()
{
  return comp3431_interfaces::action::builder::Init_MoveObjectToRoom_GetResult_Request_goal_id();
}

}  // namespace comp3431_interfaces


namespace comp3431_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveObjectToRoom_GetResult_Response_result
{
public:
  explicit Init_MoveObjectToRoom_GetResult_Response_result(::comp3431_interfaces::action::MoveObjectToRoom_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::comp3431_interfaces::action::MoveObjectToRoom_GetResult_Response result(::comp3431_interfaces::action::MoveObjectToRoom_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::comp3431_interfaces::action::MoveObjectToRoom_GetResult_Response msg_;
};

class Init_MoveObjectToRoom_GetResult_Response_status
{
public:
  Init_MoveObjectToRoom_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveObjectToRoom_GetResult_Response_result status(::comp3431_interfaces::action::MoveObjectToRoom_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveObjectToRoom_GetResult_Response_result(msg_);
  }

private:
  ::comp3431_interfaces::action::MoveObjectToRoom_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::comp3431_interfaces::action::MoveObjectToRoom_GetResult_Response>()
{
  return comp3431_interfaces::action::builder::Init_MoveObjectToRoom_GetResult_Response_status();
}

}  // namespace comp3431_interfaces


namespace comp3431_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveObjectToRoom_FeedbackMessage_feedback
{
public:
  explicit Init_MoveObjectToRoom_FeedbackMessage_feedback(::comp3431_interfaces::action::MoveObjectToRoom_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::comp3431_interfaces::action::MoveObjectToRoom_FeedbackMessage feedback(::comp3431_interfaces::action::MoveObjectToRoom_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::comp3431_interfaces::action::MoveObjectToRoom_FeedbackMessage msg_;
};

class Init_MoveObjectToRoom_FeedbackMessage_goal_id
{
public:
  Init_MoveObjectToRoom_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveObjectToRoom_FeedbackMessage_feedback goal_id(::comp3431_interfaces::action::MoveObjectToRoom_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveObjectToRoom_FeedbackMessage_feedback(msg_);
  }

private:
  ::comp3431_interfaces::action::MoveObjectToRoom_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::comp3431_interfaces::action::MoveObjectToRoom_FeedbackMessage>()
{
  return comp3431_interfaces::action::builder::Init_MoveObjectToRoom_FeedbackMessage_goal_id();
}

}  // namespace comp3431_interfaces

#endif  // COMP3431_INTERFACES__ACTION__DETAIL__MOVE_OBJECT_TO_ROOM__BUILDER_HPP_
