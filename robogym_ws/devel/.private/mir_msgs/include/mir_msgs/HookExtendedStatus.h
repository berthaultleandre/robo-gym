// Generated by gencpp from file mir_msgs/HookExtendedStatus.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_HOOKEXTENDEDSTATUS_H
#define MIR_MSGS_MESSAGE_HOOKEXTENDEDSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <mir_msgs/BrakeState.h>
#include <mir_msgs/GripperState.h>
#include <mir_msgs/HeightState.h>

namespace mir_msgs
{
template <class ContainerAllocator>
struct HookExtendedStatus_
{
  typedef HookExtendedStatus_<ContainerAllocator> Type;

  HookExtendedStatus_()
    : available(false)
    , brake()
    , gripper()
    , height()
    , angle(0.0)
    , qr_marker_name()  {
    }
  HookExtendedStatus_(const ContainerAllocator& _alloc)
    : available(false)
    , brake(_alloc)
    , gripper(_alloc)
    , height(_alloc)
    , angle(0.0)
    , qr_marker_name(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _available_type;
  _available_type available;

   typedef  ::mir_msgs::BrakeState_<ContainerAllocator>  _brake_type;
  _brake_type brake;

   typedef  ::mir_msgs::GripperState_<ContainerAllocator>  _gripper_type;
  _gripper_type gripper;

   typedef  ::mir_msgs::HeightState_<ContainerAllocator>  _height_type;
  _height_type height;

   typedef float _angle_type;
  _angle_type angle;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _qr_marker_name_type;
  _qr_marker_name_type qr_marker_name;





  typedef boost::shared_ptr< ::mir_msgs::HookExtendedStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::HookExtendedStatus_<ContainerAllocator> const> ConstPtr;

}; // struct HookExtendedStatus_

typedef ::mir_msgs::HookExtendedStatus_<std::allocator<void> > HookExtendedStatus;

typedef boost::shared_ptr< ::mir_msgs::HookExtendedStatus > HookExtendedStatusPtr;
typedef boost::shared_ptr< ::mir_msgs::HookExtendedStatus const> HookExtendedStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::HookExtendedStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::HookExtendedStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::HookExtendedStatus_<ContainerAllocator1> & lhs, const ::mir_msgs::HookExtendedStatus_<ContainerAllocator2> & rhs)
{
  return lhs.available == rhs.available &&
    lhs.brake == rhs.brake &&
    lhs.gripper == rhs.gripper &&
    lhs.height == rhs.height &&
    lhs.angle == rhs.angle &&
    lhs.qr_marker_name == rhs.qr_marker_name;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::HookExtendedStatus_<ContainerAllocator1> & lhs, const ::mir_msgs::HookExtendedStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::HookExtendedStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::HookExtendedStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::HookExtendedStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::HookExtendedStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::HookExtendedStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::HookExtendedStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::HookExtendedStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c879cdfcaceab2b74790f2d69b0a637f";
  }

  static const char* value(const ::mir_msgs::HookExtendedStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc879cdfcaceab2b7ULL;
  static const uint64_t static_value2 = 0x4790f2d69b0a637fULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::HookExtendedStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/HookExtendedStatus";
  }

  static const char* value(const ::mir_msgs::HookExtendedStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::HookExtendedStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool available\n"
"\n"
"mir_msgs/BrakeState brake\n"
"\n"
"mir_msgs/GripperState gripper\n"
"\n"
"mir_msgs/HeightState height\n"
"\n"
"float32 angle\n"
"\n"
"string qr_marker_name\n"
"\n"
"================================================================================\n"
"MSG: mir_msgs/BrakeState\n"
"string state_string\n"
"uint8 state\n"
"bool braked\n"
"================================================================================\n"
"MSG: mir_msgs/GripperState\n"
"string state_string\n"
"uint8 state\n"
"bool closed\n"
"================================================================================\n"
"MSG: mir_msgs/HeightState\n"
"string state_string\n"
"uint8 state\n"
"float64 height\n"
;
  }

  static const char* value(const ::mir_msgs::HookExtendedStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::HookExtendedStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.available);
      stream.next(m.brake);
      stream.next(m.gripper);
      stream.next(m.height);
      stream.next(m.angle);
      stream.next(m.qr_marker_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HookExtendedStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::HookExtendedStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::HookExtendedStatus_<ContainerAllocator>& v)
  {
    s << indent << "available: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.available);
    s << indent << "brake: ";
    s << std::endl;
    Printer< ::mir_msgs::BrakeState_<ContainerAllocator> >::stream(s, indent + "  ", v.brake);
    s << indent << "gripper: ";
    s << std::endl;
    Printer< ::mir_msgs::GripperState_<ContainerAllocator> >::stream(s, indent + "  ", v.gripper);
    s << indent << "height: ";
    s << std::endl;
    Printer< ::mir_msgs::HeightState_<ContainerAllocator> >::stream(s, indent + "  ", v.height);
    s << indent << "angle: ";
    Printer<float>::stream(s, indent + "  ", v.angle);
    s << indent << "qr_marker_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.qr_marker_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_HOOKEXTENDEDSTATUS_H
