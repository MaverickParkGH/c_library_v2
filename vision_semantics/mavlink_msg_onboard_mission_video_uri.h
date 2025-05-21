#pragma once
// MESSAGE ONBOARD_MISSION_VIDEO_URI PACKING

#define MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI 13001


typedef struct __mavlink_onboard_mission_video_uri_t {
 uint64_t mission_uid; /*<  Unique mission identifier (timestamp or serial)*/
 char video_uri[240]; /*<  SFTP URI for video folder (ex: sftp://192.168.1.165:/mnt/data/...)*/
 uint8_t is_encrypted; /*<  Indicates whether the video files in the folder are encrypted*/
} mavlink_onboard_mission_video_uri_t;

#define MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN 249
#define MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_MIN_LEN 249
#define MAVLINK_MSG_ID_13001_LEN 249
#define MAVLINK_MSG_ID_13001_MIN_LEN 249

#define MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_CRC 170
#define MAVLINK_MSG_ID_13001_CRC 170

#define MAVLINK_MSG_ONBOARD_MISSION_VIDEO_URI_FIELD_VIDEO_URI_LEN 240

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ONBOARD_MISSION_VIDEO_URI { \
    13001, \
    "ONBOARD_MISSION_VIDEO_URI", \
    3, \
    {  { "mission_uid", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_onboard_mission_video_uri_t, mission_uid) }, \
         { "video_uri", NULL, MAVLINK_TYPE_CHAR, 240, 8, offsetof(mavlink_onboard_mission_video_uri_t, video_uri) }, \
         { "is_encrypted", NULL, MAVLINK_TYPE_UINT8_T, 0, 248, offsetof(mavlink_onboard_mission_video_uri_t, is_encrypted) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ONBOARD_MISSION_VIDEO_URI { \
    "ONBOARD_MISSION_VIDEO_URI", \
    3, \
    {  { "mission_uid", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_onboard_mission_video_uri_t, mission_uid) }, \
         { "video_uri", NULL, MAVLINK_TYPE_CHAR, 240, 8, offsetof(mavlink_onboard_mission_video_uri_t, video_uri) }, \
         { "is_encrypted", NULL, MAVLINK_TYPE_UINT8_T, 0, 248, offsetof(mavlink_onboard_mission_video_uri_t, is_encrypted) }, \
         } \
}
#endif

/**
 * @brief Pack a onboard_mission_video_uri message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_uid  Unique mission identifier (timestamp or serial)
 * @param video_uri  SFTP URI for video folder (ex: sftp://192.168.1.165:/mnt/data/...)
 * @param is_encrypted  Indicates whether the video files in the folder are encrypted
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_mission_video_uri_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t mission_uid, const char *video_uri, uint8_t is_encrypted)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN];
    _mav_put_uint64_t(buf, 0, mission_uid);
    _mav_put_uint8_t(buf, 248, is_encrypted);
    _mav_put_char_array(buf, 8, video_uri, 240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN);
#else
    mavlink_onboard_mission_video_uri_t packet;
    packet.mission_uid = mission_uid;
    packet.is_encrypted = is_encrypted;
    mav_array_memcpy(packet.video_uri, video_uri, sizeof(char)*240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_CRC);
}

/**
 * @brief Pack a onboard_mission_video_uri message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_uid  Unique mission identifier (timestamp or serial)
 * @param video_uri  SFTP URI for video folder (ex: sftp://192.168.1.165:/mnt/data/...)
 * @param is_encrypted  Indicates whether the video files in the folder are encrypted
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_mission_video_uri_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t mission_uid, const char *video_uri, uint8_t is_encrypted)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN];
    _mav_put_uint64_t(buf, 0, mission_uid);
    _mav_put_uint8_t(buf, 248, is_encrypted);
    _mav_put_char_array(buf, 8, video_uri, 240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN);
#else
    mavlink_onboard_mission_video_uri_t packet;
    packet.mission_uid = mission_uid;
    packet.is_encrypted = is_encrypted;
    mav_array_memcpy(packet.video_uri, video_uri, sizeof(char)*240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN);
#endif
}

/**
 * @brief Pack a onboard_mission_video_uri message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mission_uid  Unique mission identifier (timestamp or serial)
 * @param video_uri  SFTP URI for video folder (ex: sftp://192.168.1.165:/mnt/data/...)
 * @param is_encrypted  Indicates whether the video files in the folder are encrypted
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_mission_video_uri_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t mission_uid,const char *video_uri,uint8_t is_encrypted)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN];
    _mav_put_uint64_t(buf, 0, mission_uid);
    _mav_put_uint8_t(buf, 248, is_encrypted);
    _mav_put_char_array(buf, 8, video_uri, 240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN);
#else
    mavlink_onboard_mission_video_uri_t packet;
    packet.mission_uid = mission_uid;
    packet.is_encrypted = is_encrypted;
    mav_array_memcpy(packet.video_uri, video_uri, sizeof(char)*240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_CRC);
}

/**
 * @brief Encode a onboard_mission_video_uri struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param onboard_mission_video_uri C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_mission_video_uri_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_onboard_mission_video_uri_t* onboard_mission_video_uri)
{
    return mavlink_msg_onboard_mission_video_uri_pack(system_id, component_id, msg, onboard_mission_video_uri->mission_uid, onboard_mission_video_uri->video_uri, onboard_mission_video_uri->is_encrypted);
}

/**
 * @brief Encode a onboard_mission_video_uri struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param onboard_mission_video_uri C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_mission_video_uri_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_onboard_mission_video_uri_t* onboard_mission_video_uri)
{
    return mavlink_msg_onboard_mission_video_uri_pack_chan(system_id, component_id, chan, msg, onboard_mission_video_uri->mission_uid, onboard_mission_video_uri->video_uri, onboard_mission_video_uri->is_encrypted);
}

/**
 * @brief Encode a onboard_mission_video_uri struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param onboard_mission_video_uri C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_mission_video_uri_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_onboard_mission_video_uri_t* onboard_mission_video_uri)
{
    return mavlink_msg_onboard_mission_video_uri_pack_status(system_id, component_id, _status, msg,  onboard_mission_video_uri->mission_uid, onboard_mission_video_uri->video_uri, onboard_mission_video_uri->is_encrypted);
}

/**
 * @brief Send a onboard_mission_video_uri message
 * @param chan MAVLink channel to send the message
 *
 * @param mission_uid  Unique mission identifier (timestamp or serial)
 * @param video_uri  SFTP URI for video folder (ex: sftp://192.168.1.165:/mnt/data/...)
 * @param is_encrypted  Indicates whether the video files in the folder are encrypted
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_onboard_mission_video_uri_send(mavlink_channel_t chan, uint64_t mission_uid, const char *video_uri, uint8_t is_encrypted)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN];
    _mav_put_uint64_t(buf, 0, mission_uid);
    _mav_put_uint8_t(buf, 248, is_encrypted);
    _mav_put_char_array(buf, 8, video_uri, 240);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI, buf, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_CRC);
#else
    mavlink_onboard_mission_video_uri_t packet;
    packet.mission_uid = mission_uid;
    packet.is_encrypted = is_encrypted;
    mav_array_memcpy(packet.video_uri, video_uri, sizeof(char)*240);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI, (const char *)&packet, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_CRC);
#endif
}

/**
 * @brief Send a onboard_mission_video_uri message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_onboard_mission_video_uri_send_struct(mavlink_channel_t chan, const mavlink_onboard_mission_video_uri_t* onboard_mission_video_uri)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_onboard_mission_video_uri_send(chan, onboard_mission_video_uri->mission_uid, onboard_mission_video_uri->video_uri, onboard_mission_video_uri->is_encrypted);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI, (const char *)onboard_mission_video_uri, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_CRC);
#endif
}

#if MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_onboard_mission_video_uri_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t mission_uid, const char *video_uri, uint8_t is_encrypted)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, mission_uid);
    _mav_put_uint8_t(buf, 248, is_encrypted);
    _mav_put_char_array(buf, 8, video_uri, 240);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI, buf, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_CRC);
#else
    mavlink_onboard_mission_video_uri_t *packet = (mavlink_onboard_mission_video_uri_t *)msgbuf;
    packet->mission_uid = mission_uid;
    packet->is_encrypted = is_encrypted;
    mav_array_memcpy(packet->video_uri, video_uri, sizeof(char)*240);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI, (const char *)packet, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_CRC);
#endif
}
#endif

#endif

// MESSAGE ONBOARD_MISSION_VIDEO_URI UNPACKING


/**
 * @brief Get field mission_uid from onboard_mission_video_uri message
 *
 * @return  Unique mission identifier (timestamp or serial)
 */
static inline uint64_t mavlink_msg_onboard_mission_video_uri_get_mission_uid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field video_uri from onboard_mission_video_uri message
 *
 * @return  SFTP URI for video folder (ex: sftp://192.168.1.165:/mnt/data/...)
 */
static inline uint16_t mavlink_msg_onboard_mission_video_uri_get_video_uri(const mavlink_message_t* msg, char *video_uri)
{
    return _MAV_RETURN_char_array(msg, video_uri, 240,  8);
}

/**
 * @brief Get field is_encrypted from onboard_mission_video_uri message
 *
 * @return  Indicates whether the video files in the folder are encrypted
 */
static inline uint8_t mavlink_msg_onboard_mission_video_uri_get_is_encrypted(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  248);
}

/**
 * @brief Decode a onboard_mission_video_uri message into a struct
 *
 * @param msg The message to decode
 * @param onboard_mission_video_uri C-struct to decode the message contents into
 */
static inline void mavlink_msg_onboard_mission_video_uri_decode(const mavlink_message_t* msg, mavlink_onboard_mission_video_uri_t* onboard_mission_video_uri)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    onboard_mission_video_uri->mission_uid = mavlink_msg_onboard_mission_video_uri_get_mission_uid(msg);
    mavlink_msg_onboard_mission_video_uri_get_video_uri(msg, onboard_mission_video_uri->video_uri);
    onboard_mission_video_uri->is_encrypted = mavlink_msg_onboard_mission_video_uri_get_is_encrypted(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN? msg->len : MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN;
        memset(onboard_mission_video_uri, 0, MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_LEN);
    memcpy(onboard_mission_video_uri, _MAV_PAYLOAD(msg), len);
#endif
}
