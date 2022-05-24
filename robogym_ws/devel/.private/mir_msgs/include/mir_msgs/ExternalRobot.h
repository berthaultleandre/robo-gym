// Generated by gencpp from file mir_msgs/ExternalRobot.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_EXTERNALROBOT_H
#define MIR_MSGS_MESSAGE_EXTERNALROBOT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>

namespace mir_msgs
{
template <class ContainerAllocator>
struct ExternalRobot_
{
  typedef ExternalRobot_<ContainerAllocator> Type;

  ExternalRobot_()
    : header()
    , id(0)
    , name()
    , footprint()
    , ip()
    , map_id(0)
    , priority(0)
    , pose()
    , extrapolated_pose()
    , twist()  {
    }
  ExternalRobot_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(0)
    , name(_alloc)
    , footprint(_alloc)
    , ip(_alloc)
    , map_id(0)
    , priority(0)
    , pose(_alloc)
    , extrapolated_pose(_alloc)
    , twist(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _footprint_type;
  _footprint_type footprint;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _ip_type;
  _ip_type ip;

   typedef uint32_t _map_id_type;
  _map_id_type map_id;

   typedef int32_t _priority_type;
  _priority_type priority;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _extrapolated_pose_type;
  _extrapolated_pose_type extrapolated_pose;

   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _twist_type;
  _twist_type twist;





  typedef boost::shared_ptr< ::mir_msgs::ExternalRobot_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::ExternalRobot_<ContainerAllocator> const> ConstPtr;

}; // struct ExternalRobot_

typedef ::mir_msgs::ExternalRobot_<std::allocator<void> > ExternalRobot;

typedef boost::shared_ptr< ::mir_msgs::ExternalRobot > ExternalRobotPtr;
typedef boost::shared_ptr< ::mir_msgs::ExternalRobot const> ExternalRobotConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::ExternalRobot_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::ExternalRobot_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::ExternalRobot_<ContainerAllocator1> & lhs, const ::mir_msgs::ExternalRobot_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.id == rhs.id &&
    lhs.name == rhs.name &&
    lhs.footprint == rhs.footprint &&
    lhs.ip == rhs.ip &&
    lhs.map_id == rhs.map_id &&
    lhs.priority == rhs.priority &&
    lhs.pose == rhs.pose &&
    lhs.extrapolated_pose == rhs.extrapolated_pose &&
    lhs.twist == rhs.twist;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::ExternalRobot_<ContainerAllocator1> & lhs, const ::mir_msgs::ExternalRobot_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::ExternalRobot_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::ExternalRobot_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::ExternalRobot_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::ExternalRobot_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::ExternalRobot_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::ExternalRobot_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::ExternalRobot_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2aaed3d73affd5b1b43392a37ae9a69c";
  }

  static const char* value(const ::mir_msgs::ExternalRobot_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2aaed3d73affd5b1ULL;
  static const uint64_t static_value2 = 0xb43392a37ae9a69cULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::ExternalRobot_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/ExternalRobot";
  }

  static const char* value(const ::mir_msgs::ExternalRobot_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::ExternalRobot_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"uint32 id\n"
"string name\n"
"string footprint\n"
"string ip\n"
"uint32 map_id\n"
"int32 priority\n"
"geometry_msgs/Pose pose\n"
"geometry_msgs/Pose extrapolated_pose\n"
"geometry_msgs/Twist twist\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::mir_msgs::ExternalRobot_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::ExternalRobot_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.name);
      stream.next(m.footprint);
      stream.next(m.ip);
      stream.next(m.map_id);
      stream.next(m.priority);
      stream.next(m.pose);
      stream.next(m.extrapolated_pose);
      stream.next(m.twist);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ExternalRobot_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::ExternalRobot_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::ExternalRobot_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "footprint: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.footprint);
    s << indent << "ip: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.ip);
    s << indent << "map_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.map_id);
    s << indent << "priority: ";
    Printer<int32_t>::stream(s, indent + "  ", v.priority);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "extrapolated_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.extrapolated_pose);
    s << indent << "twist: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.twist);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_EXTERNALROBOT_H
