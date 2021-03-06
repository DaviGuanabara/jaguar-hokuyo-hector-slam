// Generated by gencpp from file drrobot_jaguarV2_player/MotorInfoArray.msg
// DO NOT EDIT!


#ifndef DRROBOT_JAGUARV2_PLAYER_MESSAGE_MOTORINFOARRAY_H
#define DRROBOT_JAGUARV2_PLAYER_MESSAGE_MOTORINFOARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <drrobot_jaguarV2_player/MotorInfo.h>

namespace drrobot_jaguarV2_player
{
template <class ContainerAllocator>
struct MotorInfoArray_
{
  typedef MotorInfoArray_<ContainerAllocator> Type;

  MotorInfoArray_()
    : motorInfos()  {
    }
  MotorInfoArray_(const ContainerAllocator& _alloc)
    : motorInfos(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::drrobot_jaguarV2_player::MotorInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::drrobot_jaguarV2_player::MotorInfo_<ContainerAllocator> >::other >  _motorInfos_type;
  _motorInfos_type motorInfos;





  typedef boost::shared_ptr< ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator> const> ConstPtr;

}; // struct MotorInfoArray_

typedef ::drrobot_jaguarV2_player::MotorInfoArray_<std::allocator<void> > MotorInfoArray;

typedef boost::shared_ptr< ::drrobot_jaguarV2_player::MotorInfoArray > MotorInfoArrayPtr;
typedef boost::shared_ptr< ::drrobot_jaguarV2_player::MotorInfoArray const> MotorInfoArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace drrobot_jaguarV2_player

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/lunar/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/lunar/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/lunar/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/lunar/share/sensor_msgs/cmake/../msg'], 'drrobot_jaguarV2_player': ['/mnt/c/Users/lucas/jaguar_V4/src/drrobotV2_player/msg'], 'geometry_msgs': ['/opt/ros/lunar/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "64d8eb9826ec2f78779f54df29bcc931";
  }

  static const char* value(const ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x64d8eb9826ec2f78ULL;
  static const uint64_t static_value2 = 0x779f54df29bcc931ULL;
};

template<class ContainerAllocator>
struct DataType< ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "drrobot_jaguarV2_player/MotorInfoArray";
  }

  static const char* value(const ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#this message will be used for motor sensor\n\
MotorInfo[] motorInfos\n\
\n\
================================================================================\n\
MSG: drrobot_jaguarV2_player/MotorInfo\n\
# motor sensor data message from DrRobot Robot.\n\
\n\
Header header    	# timestamp in the header is the time the driver\n\
		 	# returned the battery/power reading\n\
string robot_type	# robot type, I90 series, sentinel3 or Jaguar Power/Motion\n\
\n\
uint32 encoder_pos	# encoder positon count\n\
uint32 encoder_vel	# encoder velocity value\n\
uint32 encoder_dir	# encoder direction\n\
\n\
float32 motor_current	# motor current\n\
uint32 motor_pwm	# output PWM value, only for Jaguar series robot\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.motorInfos);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotorInfoArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::drrobot_jaguarV2_player::MotorInfoArray_<ContainerAllocator>& v)
  {
    s << indent << "motorInfos[]" << std::endl;
    for (size_t i = 0; i < v.motorInfos.size(); ++i)
    {
      s << indent << "  motorInfos[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::drrobot_jaguarV2_player::MotorInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.motorInfos[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRROBOT_JAGUARV2_PLAYER_MESSAGE_MOTORINFOARRAY_H
