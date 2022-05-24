// Generated by gencpp from file mir_msgs/PlanSegments.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_PLANSEGMENTS_H
#define MIR_MSGS_MESSAGE_PLANSEGMENTS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <mir_msgs/PlanSegment.h>

namespace mir_msgs
{
template <class ContainerAllocator>
struct PlanSegments_
{
  typedef PlanSegments_<ContainerAllocator> Type;

  PlanSegments_()
    : p_segments()  {
    }
  PlanSegments_(const ContainerAllocator& _alloc)
    : p_segments(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::mir_msgs::PlanSegment_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::mir_msgs::PlanSegment_<ContainerAllocator> >::other >  _p_segments_type;
  _p_segments_type p_segments;





  typedef boost::shared_ptr< ::mir_msgs::PlanSegments_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::PlanSegments_<ContainerAllocator> const> ConstPtr;

}; // struct PlanSegments_

typedef ::mir_msgs::PlanSegments_<std::allocator<void> > PlanSegments;

typedef boost::shared_ptr< ::mir_msgs::PlanSegments > PlanSegmentsPtr;
typedef boost::shared_ptr< ::mir_msgs::PlanSegments const> PlanSegmentsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::PlanSegments_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::PlanSegments_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::PlanSegments_<ContainerAllocator1> & lhs, const ::mir_msgs::PlanSegments_<ContainerAllocator2> & rhs)
{
  return lhs.p_segments == rhs.p_segments;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::PlanSegments_<ContainerAllocator1> & lhs, const ::mir_msgs::PlanSegments_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::PlanSegments_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::PlanSegments_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::PlanSegments_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::PlanSegments_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::PlanSegments_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::PlanSegments_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::PlanSegments_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9176305685849eadfd34548fd6b41d90";
  }

  static const char* value(const ::mir_msgs::PlanSegments_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9176305685849eadULL;
  static const uint64_t static_value2 = 0xfd34548fd6b41d90ULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::PlanSegments_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/PlanSegments";
  }

  static const char* value(const ::mir_msgs::PlanSegments_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::PlanSegments_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/PlanSegment[] p_segments\n"
"================================================================================\n"
"MSG: mir_msgs/PlanSegment\n"
"bool forward_motion\n"
"int32 start_idx\n"
"float64 length\n"
"float64 remaining_length\n"
"geometry_msgs/PoseStamped[] path\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
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
;
  }

  static const char* value(const ::mir_msgs::PlanSegments_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::PlanSegments_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.p_segments);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanSegments_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::PlanSegments_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::PlanSegments_<ContainerAllocator>& v)
  {
    s << indent << "p_segments[]" << std::endl;
    for (size_t i = 0; i < v.p_segments.size(); ++i)
    {
      s << indent << "  p_segments[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::mir_msgs::PlanSegment_<ContainerAllocator> >::stream(s, indent + "    ", v.p_segments[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_PLANSEGMENTS_H
