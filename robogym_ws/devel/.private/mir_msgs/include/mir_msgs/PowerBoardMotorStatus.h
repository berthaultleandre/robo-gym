// Generated by gencpp from file mir_msgs/PowerBoardMotorStatus.msg
// DO NOT EDIT!


#ifndef MIR_MSGS_MESSAGE_POWERBOARDMOTORSTATUS_H
#define MIR_MSGS_MESSAGE_POWERBOARDMOTORSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mir_msgs
{
template <class ContainerAllocator>
struct PowerBoardMotorStatus_
{
  typedef PowerBoardMotorStatus_<ContainerAllocator> Type;

  PowerBoardMotorStatus_()
    : LeftMotor_CtrlWord(0)
    , LeftMotor_Speed(0)
    , LeftMotor_Encoder(0)
    , LeftMotor_Status(0)
    , LeftMotor_Error(0)
    , LeftMotor_ErrorHist1(0)
    , LeftMotor_ErrorHist2(0)
    , LeftMotor_Current(0)
    , LeftMotor_I2t_Motor(0)
    , LeftMotor_I2t_Controller(0)
    , LeftMotor_Temperature(0)
    , RightMotor_CtrlWord(0)
    , RightMotor_Speed(0)
    , RightMotor_Encoder(0)
    , RightMotor_Status(0)
    , RightMotor_Error(0)
    , RightMotor_ErrorHist1(0)
    , RightMotor_ErrorHist2(0)
    , RightMotor_Current(0)
    , RightMotor_I2t_Motor(0)
    , RightMotor_I2t_Controller(0)
    , RightMotor_Temperature(0)
    , Brake_LeftStatus(0)
    , Brake_RightStatus(0)  {
    }
  PowerBoardMotorStatus_(const ContainerAllocator& _alloc)
    : LeftMotor_CtrlWord(0)
    , LeftMotor_Speed(0)
    , LeftMotor_Encoder(0)
    , LeftMotor_Status(0)
    , LeftMotor_Error(0)
    , LeftMotor_ErrorHist1(0)
    , LeftMotor_ErrorHist2(0)
    , LeftMotor_Current(0)
    , LeftMotor_I2t_Motor(0)
    , LeftMotor_I2t_Controller(0)
    , LeftMotor_Temperature(0)
    , RightMotor_CtrlWord(0)
    , RightMotor_Speed(0)
    , RightMotor_Encoder(0)
    , RightMotor_Status(0)
    , RightMotor_Error(0)
    , RightMotor_ErrorHist1(0)
    , RightMotor_ErrorHist2(0)
    , RightMotor_Current(0)
    , RightMotor_I2t_Motor(0)
    , RightMotor_I2t_Controller(0)
    , RightMotor_Temperature(0)
    , Brake_LeftStatus(0)
    , Brake_RightStatus(0)  {
  (void)_alloc;
    }



   typedef uint16_t _LeftMotor_CtrlWord_type;
  _LeftMotor_CtrlWord_type LeftMotor_CtrlWord;

   typedef int32_t _LeftMotor_Speed_type;
  _LeftMotor_Speed_type LeftMotor_Speed;

   typedef int32_t _LeftMotor_Encoder_type;
  _LeftMotor_Encoder_type LeftMotor_Encoder;

   typedef uint16_t _LeftMotor_Status_type;
  _LeftMotor_Status_type LeftMotor_Status;

   typedef uint8_t _LeftMotor_Error_type;
  _LeftMotor_Error_type LeftMotor_Error;

   typedef uint32_t _LeftMotor_ErrorHist1_type;
  _LeftMotor_ErrorHist1_type LeftMotor_ErrorHist1;

   typedef uint32_t _LeftMotor_ErrorHist2_type;
  _LeftMotor_ErrorHist2_type LeftMotor_ErrorHist2;

   typedef int32_t _LeftMotor_Current_type;
  _LeftMotor_Current_type LeftMotor_Current;

   typedef uint16_t _LeftMotor_I2t_Motor_type;
  _LeftMotor_I2t_Motor_type LeftMotor_I2t_Motor;

   typedef uint16_t _LeftMotor_I2t_Controller_type;
  _LeftMotor_I2t_Controller_type LeftMotor_I2t_Controller;

   typedef int16_t _LeftMotor_Temperature_type;
  _LeftMotor_Temperature_type LeftMotor_Temperature;

   typedef uint16_t _RightMotor_CtrlWord_type;
  _RightMotor_CtrlWord_type RightMotor_CtrlWord;

   typedef int32_t _RightMotor_Speed_type;
  _RightMotor_Speed_type RightMotor_Speed;

   typedef int32_t _RightMotor_Encoder_type;
  _RightMotor_Encoder_type RightMotor_Encoder;

   typedef uint16_t _RightMotor_Status_type;
  _RightMotor_Status_type RightMotor_Status;

   typedef uint8_t _RightMotor_Error_type;
  _RightMotor_Error_type RightMotor_Error;

   typedef uint32_t _RightMotor_ErrorHist1_type;
  _RightMotor_ErrorHist1_type RightMotor_ErrorHist1;

   typedef uint32_t _RightMotor_ErrorHist2_type;
  _RightMotor_ErrorHist2_type RightMotor_ErrorHist2;

   typedef int32_t _RightMotor_Current_type;
  _RightMotor_Current_type RightMotor_Current;

   typedef uint16_t _RightMotor_I2t_Motor_type;
  _RightMotor_I2t_Motor_type RightMotor_I2t_Motor;

   typedef uint16_t _RightMotor_I2t_Controller_type;
  _RightMotor_I2t_Controller_type RightMotor_I2t_Controller;

   typedef int16_t _RightMotor_Temperature_type;
  _RightMotor_Temperature_type RightMotor_Temperature;

   typedef uint8_t _Brake_LeftStatus_type;
  _Brake_LeftStatus_type Brake_LeftStatus;

   typedef uint8_t _Brake_RightStatus_type;
  _Brake_RightStatus_type Brake_RightStatus;





  typedef boost::shared_ptr< ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator> const> ConstPtr;

}; // struct PowerBoardMotorStatus_

typedef ::mir_msgs::PowerBoardMotorStatus_<std::allocator<void> > PowerBoardMotorStatus;

typedef boost::shared_ptr< ::mir_msgs::PowerBoardMotorStatus > PowerBoardMotorStatusPtr;
typedef boost::shared_ptr< ::mir_msgs::PowerBoardMotorStatus const> PowerBoardMotorStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator1> & lhs, const ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator2> & rhs)
{
  return lhs.LeftMotor_CtrlWord == rhs.LeftMotor_CtrlWord &&
    lhs.LeftMotor_Speed == rhs.LeftMotor_Speed &&
    lhs.LeftMotor_Encoder == rhs.LeftMotor_Encoder &&
    lhs.LeftMotor_Status == rhs.LeftMotor_Status &&
    lhs.LeftMotor_Error == rhs.LeftMotor_Error &&
    lhs.LeftMotor_ErrorHist1 == rhs.LeftMotor_ErrorHist1 &&
    lhs.LeftMotor_ErrorHist2 == rhs.LeftMotor_ErrorHist2 &&
    lhs.LeftMotor_Current == rhs.LeftMotor_Current &&
    lhs.LeftMotor_I2t_Motor == rhs.LeftMotor_I2t_Motor &&
    lhs.LeftMotor_I2t_Controller == rhs.LeftMotor_I2t_Controller &&
    lhs.LeftMotor_Temperature == rhs.LeftMotor_Temperature &&
    lhs.RightMotor_CtrlWord == rhs.RightMotor_CtrlWord &&
    lhs.RightMotor_Speed == rhs.RightMotor_Speed &&
    lhs.RightMotor_Encoder == rhs.RightMotor_Encoder &&
    lhs.RightMotor_Status == rhs.RightMotor_Status &&
    lhs.RightMotor_Error == rhs.RightMotor_Error &&
    lhs.RightMotor_ErrorHist1 == rhs.RightMotor_ErrorHist1 &&
    lhs.RightMotor_ErrorHist2 == rhs.RightMotor_ErrorHist2 &&
    lhs.RightMotor_Current == rhs.RightMotor_Current &&
    lhs.RightMotor_I2t_Motor == rhs.RightMotor_I2t_Motor &&
    lhs.RightMotor_I2t_Controller == rhs.RightMotor_I2t_Controller &&
    lhs.RightMotor_Temperature == rhs.RightMotor_Temperature &&
    lhs.Brake_LeftStatus == rhs.Brake_LeftStatus &&
    lhs.Brake_RightStatus == rhs.Brake_RightStatus;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator1> & lhs, const ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mir_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6fa84650aa5369a4240fff080dbf7c68";
  }

  static const char* value(const ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6fa84650aa5369a4ULL;
  static const uint64_t static_value2 = 0x240fff080dbf7c68ULL;
};

template<class ContainerAllocator>
struct DataType< ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mir_msgs/PowerBoardMotorStatus";
  }

  static const char* value(const ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16 LeftMotor_CtrlWord\n"
"int32 LeftMotor_Speed\n"
"int32 LeftMotor_Encoder\n"
"uint16 LeftMotor_Status\n"
"uint8 LeftMotor_Error\n"
"uint32 LeftMotor_ErrorHist1\n"
"uint32 LeftMotor_ErrorHist2\n"
"int32 LeftMotor_Current\n"
"uint16 LeftMotor_I2t_Motor\n"
"uint16 LeftMotor_I2t_Controller\n"
"int16 LeftMotor_Temperature\n"
"uint16 RightMotor_CtrlWord\n"
"int32 RightMotor_Speed\n"
"int32 RightMotor_Encoder\n"
"uint16 RightMotor_Status\n"
"uint8 RightMotor_Error\n"
"uint32 RightMotor_ErrorHist1\n"
"uint32 RightMotor_ErrorHist2\n"
"int32 RightMotor_Current\n"
"uint16 RightMotor_I2t_Motor\n"
"uint16 RightMotor_I2t_Controller\n"
"int16 RightMotor_Temperature\n"
"uint8 Brake_LeftStatus\n"
"uint8 Brake_RightStatus\n"
;
  }

  static const char* value(const ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.LeftMotor_CtrlWord);
      stream.next(m.LeftMotor_Speed);
      stream.next(m.LeftMotor_Encoder);
      stream.next(m.LeftMotor_Status);
      stream.next(m.LeftMotor_Error);
      stream.next(m.LeftMotor_ErrorHist1);
      stream.next(m.LeftMotor_ErrorHist2);
      stream.next(m.LeftMotor_Current);
      stream.next(m.LeftMotor_I2t_Motor);
      stream.next(m.LeftMotor_I2t_Controller);
      stream.next(m.LeftMotor_Temperature);
      stream.next(m.RightMotor_CtrlWord);
      stream.next(m.RightMotor_Speed);
      stream.next(m.RightMotor_Encoder);
      stream.next(m.RightMotor_Status);
      stream.next(m.RightMotor_Error);
      stream.next(m.RightMotor_ErrorHist1);
      stream.next(m.RightMotor_ErrorHist2);
      stream.next(m.RightMotor_Current);
      stream.next(m.RightMotor_I2t_Motor);
      stream.next(m.RightMotor_I2t_Controller);
      stream.next(m.RightMotor_Temperature);
      stream.next(m.Brake_LeftStatus);
      stream.next(m.Brake_RightStatus);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PowerBoardMotorStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mir_msgs::PowerBoardMotorStatus_<ContainerAllocator>& v)
  {
    s << indent << "LeftMotor_CtrlWord: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.LeftMotor_CtrlWord);
    s << indent << "LeftMotor_Speed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.LeftMotor_Speed);
    s << indent << "LeftMotor_Encoder: ";
    Printer<int32_t>::stream(s, indent + "  ", v.LeftMotor_Encoder);
    s << indent << "LeftMotor_Status: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.LeftMotor_Status);
    s << indent << "LeftMotor_Error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LeftMotor_Error);
    s << indent << "LeftMotor_ErrorHist1: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.LeftMotor_ErrorHist1);
    s << indent << "LeftMotor_ErrorHist2: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.LeftMotor_ErrorHist2);
    s << indent << "LeftMotor_Current: ";
    Printer<int32_t>::stream(s, indent + "  ", v.LeftMotor_Current);
    s << indent << "LeftMotor_I2t_Motor: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.LeftMotor_I2t_Motor);
    s << indent << "LeftMotor_I2t_Controller: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.LeftMotor_I2t_Controller);
    s << indent << "LeftMotor_Temperature: ";
    Printer<int16_t>::stream(s, indent + "  ", v.LeftMotor_Temperature);
    s << indent << "RightMotor_CtrlWord: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.RightMotor_CtrlWord);
    s << indent << "RightMotor_Speed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.RightMotor_Speed);
    s << indent << "RightMotor_Encoder: ";
    Printer<int32_t>::stream(s, indent + "  ", v.RightMotor_Encoder);
    s << indent << "RightMotor_Status: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.RightMotor_Status);
    s << indent << "RightMotor_Error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.RightMotor_Error);
    s << indent << "RightMotor_ErrorHist1: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.RightMotor_ErrorHist1);
    s << indent << "RightMotor_ErrorHist2: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.RightMotor_ErrorHist2);
    s << indent << "RightMotor_Current: ";
    Printer<int32_t>::stream(s, indent + "  ", v.RightMotor_Current);
    s << indent << "RightMotor_I2t_Motor: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.RightMotor_I2t_Motor);
    s << indent << "RightMotor_I2t_Controller: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.RightMotor_I2t_Controller);
    s << indent << "RightMotor_Temperature: ";
    Printer<int16_t>::stream(s, indent + "  ", v.RightMotor_Temperature);
    s << indent << "Brake_LeftStatus: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Brake_LeftStatus);
    s << indent << "Brake_RightStatus: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Brake_RightStatus);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIR_MSGS_MESSAGE_POWERBOARDMOTORSTATUS_H
