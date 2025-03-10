// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mirs_msgs:srv/SimpleCommand.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__SRV__DETAIL__SIMPLE_COMMAND__STRUCT_HPP_
#define MIRS_MSGS__SRV__DETAIL__SIMPLE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mirs_msgs__srv__SimpleCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__mirs_msgs__srv__SimpleCommand_Request __declspec(deprecated)
#endif

namespace mirs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SimpleCommand_Request_
{
  using Type = SimpleCommand_Request_<ContainerAllocator>;

  explicit SimpleCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SimpleCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    mirs_msgs::srv::SimpleCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mirs_msgs::srv::SimpleCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mirs_msgs::srv::SimpleCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mirs_msgs::srv::SimpleCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::srv::SimpleCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::srv::SimpleCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::srv::SimpleCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::srv::SimpleCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mirs_msgs::srv::SimpleCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mirs_msgs::srv::SimpleCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mirs_msgs__srv__SimpleCommand_Request
    std::shared_ptr<mirs_msgs::srv::SimpleCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mirs_msgs__srv__SimpleCommand_Request
    std::shared_ptr<mirs_msgs::srv::SimpleCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleCommand_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleCommand_Request_

// alias to use template instance with default allocator
using SimpleCommand_Request =
  mirs_msgs::srv::SimpleCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mirs_msgs


#ifndef _WIN32
# define DEPRECATED__mirs_msgs__srv__SimpleCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__mirs_msgs__srv__SimpleCommand_Response __declspec(deprecated)
#endif

namespace mirs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SimpleCommand_Response_
{
  using Type = SimpleCommand_Response_<ContainerAllocator>;

  explicit SimpleCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SimpleCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mirs_msgs::srv::SimpleCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mirs_msgs::srv::SimpleCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mirs_msgs::srv::SimpleCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mirs_msgs::srv::SimpleCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::srv::SimpleCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::srv::SimpleCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::srv::SimpleCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::srv::SimpleCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mirs_msgs::srv::SimpleCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mirs_msgs::srv::SimpleCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mirs_msgs__srv__SimpleCommand_Response
    std::shared_ptr<mirs_msgs::srv::SimpleCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mirs_msgs__srv__SimpleCommand_Response
    std::shared_ptr<mirs_msgs::srv::SimpleCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimpleCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimpleCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimpleCommand_Response_

// alias to use template instance with default allocator
using SimpleCommand_Response =
  mirs_msgs::srv::SimpleCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mirs_msgs

namespace mirs_msgs
{

namespace srv
{

struct SimpleCommand
{
  using Request = mirs_msgs::srv::SimpleCommand_Request;
  using Response = mirs_msgs::srv::SimpleCommand_Response;
};

}  // namespace srv

}  // namespace mirs_msgs

#endif  // MIRS_MSGS__SRV__DETAIL__SIMPLE_COMMAND__STRUCT_HPP_
