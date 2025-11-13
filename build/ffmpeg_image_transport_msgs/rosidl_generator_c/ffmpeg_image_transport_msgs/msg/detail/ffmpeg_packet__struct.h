// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ffmpeg_image_transport_msgs:msg/FFMPEGPacket.idl
// generated code does not contain a copyright notice

#ifndef FFMPEG_IMAGE_TRANSPORT_MSGS__MSG__DETAIL__FFMPEG_PACKET__STRUCT_H_
#define FFMPEG_IMAGE_TRANSPORT_MSGS__MSG__DETAIL__FFMPEG_PACKET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'encoding'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/FFMPEGPacket in the package ffmpeg_image_transport_msgs.
typedef struct ffmpeg_image_transport_msgs__msg__FFMPEGPacket
{
  std_msgs__msg__Header header;
  /// original image width
  int32_t width;
  /// original image height
  int32_t height;
  /// The "encoding" message field is a string with semicolon-separated tokens that
  /// indicate the codec (first token) and the image formats used at various stages of the
  /// encoding process: "codec;av_source_pixel_format;cv_bridge_target_format;ros_encoding".
  /// - "ros_encoding" is the pixel format used by the original ROS message that was passed to
  ///   the "ffmpeg_encoder_decoder" module, e.g. "bgr8". This token allows the decoder later to restore
  ///   the original message format if desired.
  /// - "cv_bridge_target_format" is the pixel format that the cv_bridge converts
  ///   the "ros_encoding" into, e.g. . This is typically a format that is more suited for ffmpeg compression.
  /// - "av_source_pixel_format" is the pixel format that libswscale converts the "cv_bridge_target_format"
  ///   into. This token uses libav convention (e.g. "yuv420p"), and denotes the pixel format
  ///   that is fed into the libav encoder.
  /// - "codec" is the codec used for ultimately encoding the packet, e.g. "h264", "hevc" etc.
  ///   Follows libav convention.
  /// See the ffmpeg_encoder_decoder package for more details
  /// encoding used, see above
  rosidl_runtime_c__String encoding;
  /// packet pts
  uint64_t pts;
  /// packet flags
  uint8_t flags;
  /// true if machine stores in big endian format
  bool is_bigendian;
  /// ffmpeg compressed payload
  rosidl_runtime_c__uint8__Sequence data;
} ffmpeg_image_transport_msgs__msg__FFMPEGPacket;

// Struct for a sequence of ffmpeg_image_transport_msgs__msg__FFMPEGPacket.
typedef struct ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence
{
  ffmpeg_image_transport_msgs__msg__FFMPEGPacket * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ffmpeg_image_transport_msgs__msg__FFMPEGPacket__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FFMPEG_IMAGE_TRANSPORT_MSGS__MSG__DETAIL__FFMPEG_PACKET__STRUCT_H_
