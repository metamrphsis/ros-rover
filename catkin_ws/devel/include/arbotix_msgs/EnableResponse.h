// Generated by gencpp from file arbotix_msgs/EnableResponse.msg
// DO NOT EDIT!


#ifndef ARBOTIX_MSGS_MESSAGE_ENABLERESPONSE_H
#define ARBOTIX_MSGS_MESSAGE_ENABLERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace arbotix_msgs
{
template <class ContainerAllocator>
struct EnableResponse_
{
  typedef EnableResponse_<ContainerAllocator> Type;

  EnableResponse_()
    : state(false)  {
    }
  EnableResponse_(const ContainerAllocator& _alloc)
    : state(false)  {
  (void)_alloc;
    }



   typedef uint8_t _state_type;
  _state_type state;





  typedef boost::shared_ptr< ::arbotix_msgs::EnableResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arbotix_msgs::EnableResponse_<ContainerAllocator> const> ConstPtr;

}; // struct EnableResponse_

typedef ::arbotix_msgs::EnableResponse_<std::allocator<void> > EnableResponse;

typedef boost::shared_ptr< ::arbotix_msgs::EnableResponse > EnableResponsePtr;
typedef boost::shared_ptr< ::arbotix_msgs::EnableResponse const> EnableResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::arbotix_msgs::EnableResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::arbotix_msgs::EnableResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace arbotix_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'arbotix_msgs': ['/home/ubuntu/catkin_ws/src/arbotix_ros/arbotix_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::arbotix_msgs::EnableResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::arbotix_msgs::EnableResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arbotix_msgs::EnableResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arbotix_msgs::EnableResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arbotix_msgs::EnableResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arbotix_msgs::EnableResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::arbotix_msgs::EnableResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "001fde3cab9e313a150416ff09c08ee4";
  }

  static const char* value(const ::arbotix_msgs::EnableResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x001fde3cab9e313aULL;
  static const uint64_t static_value2 = 0x150416ff09c08ee4ULL;
};

template<class ContainerAllocator>
struct DataType< ::arbotix_msgs::EnableResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "arbotix_msgs/EnableResponse";
  }

  static const char* value(const ::arbotix_msgs::EnableResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::arbotix_msgs::EnableResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool state\n\
\n\
";
  }

  static const char* value(const ::arbotix_msgs::EnableResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::arbotix_msgs::EnableResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EnableResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arbotix_msgs::EnableResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::arbotix_msgs::EnableResponse_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARBOTIX_MSGS_MESSAGE_ENABLERESPONSE_H
