#pragma once
// MESSAGE MISSION_VIDEO_DOWNLOAD_RESULT PACKING

#define MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT 13002


typedef struct __mavlink_mission_video_download_result_t {
 uint64_t mission_uid; /*<  Same mission identifier received earlier*/
 uint8_t result; /*<  Result: 0 = success, 1 = failed, 2 = cancelled*/
} mavlink_mission_video_download_result_t;

#define MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN 9
#define MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_MIN_LEN 9
#define MAVLINK_MSG_ID_13002_LEN 9
#define MAVLINK_MSG_ID_13002_MIN_LEN 9

#define MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_CRC 19
#define MAVLINK_MSG_ID_13002_CRC 19



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MISSION_VIDEO_DOWNLOAD_RESULT { \
    13002, \
    "MISSION_VIDEO_DOWNLOAD_RESULT", \
    2, \
    {  { "mission_uid", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_mission_video_download_result_t, mission_uid) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_mission_video_download_result_t, result) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MISSION_VIDEO_DOWNLOAD_RESULT { \
    "MISSION_VIDEO_DOWNLOAD_RESULT", \
    2, \
    {  { "mission_uid", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_mission_video_download_result_t, mission_uid) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_mission_video_download_result_t, result) }, \
         } \
}
#endif

/**
 * @brief Pack a mission_video_download_result message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_uid  Same mission identifier received earlier
 * @param result  Result: 0 = success, 1 = failed, 2 = cancelled
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mission_video_download_result_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t mission_uid, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN];
    _mav_put_uint64_t(buf, 0, mission_uid);
    _mav_put_uint8_t(buf, 8, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN);
#else
    mavlink_mission_video_download_result_t packet;
    packet.mission_uid = mission_uid;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_MIN_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_CRC);
}

/**
 * @brief Pack a mission_video_download_result message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_uid  Same mission identifier received earlier
 * @param result  Result: 0 = success, 1 = failed, 2 = cancelled
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mission_video_download_result_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t mission_uid, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN];
    _mav_put_uint64_t(buf, 0, mission_uid);
    _mav_put_uint8_t(buf, 8, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN);
#else
    mavlink_mission_video_download_result_t packet;
    packet.mission_uid = mission_uid;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_MIN_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_MIN_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN);
#endif
}

/**
 * @brief Pack a mission_video_download_result message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mission_uid  Same mission identifier received earlier
 * @param result  Result: 0 = success, 1 = failed, 2 = cancelled
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mission_video_download_result_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t mission_uid,uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN];
    _mav_put_uint64_t(buf, 0, mission_uid);
    _mav_put_uint8_t(buf, 8, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN);
#else
    mavlink_mission_video_download_result_t packet;
    packet.mission_uid = mission_uid;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_MIN_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_CRC);
}

/**
 * @brief Encode a mission_video_download_result struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mission_video_download_result C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mission_video_download_result_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mission_video_download_result_t* mission_video_download_result)
{
    return mavlink_msg_mission_video_download_result_pack(system_id, component_id, msg, mission_video_download_result->mission_uid, mission_video_download_result->result);
}

/**
 * @brief Encode a mission_video_download_result struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mission_video_download_result C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mission_video_download_result_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mission_video_download_result_t* mission_video_download_result)
{
    return mavlink_msg_mission_video_download_result_pack_chan(system_id, component_id, chan, msg, mission_video_download_result->mission_uid, mission_video_download_result->result);
}

/**
 * @brief Encode a mission_video_download_result struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param mission_video_download_result C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mission_video_download_result_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_mission_video_download_result_t* mission_video_download_result)
{
    return mavlink_msg_mission_video_download_result_pack_status(system_id, component_id, _status, msg,  mission_video_download_result->mission_uid, mission_video_download_result->result);
}

/**
 * @brief Send a mission_video_download_result message
 * @param chan MAVLink channel to send the message
 *
 * @param mission_uid  Same mission identifier received earlier
 * @param result  Result: 0 = success, 1 = failed, 2 = cancelled
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mission_video_download_result_send(mavlink_channel_t chan, uint64_t mission_uid, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN];
    _mav_put_uint64_t(buf, 0, mission_uid);
    _mav_put_uint8_t(buf, 8, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT, buf, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_MIN_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_CRC);
#else
    mavlink_mission_video_download_result_t packet;
    packet.mission_uid = mission_uid;
    packet.result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT, (const char *)&packet, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_MIN_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_CRC);
#endif
}

/**
 * @brief Send a mission_video_download_result message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mission_video_download_result_send_struct(mavlink_channel_t chan, const mavlink_mission_video_download_result_t* mission_video_download_result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mission_video_download_result_send(chan, mission_video_download_result->mission_uid, mission_video_download_result->result);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT, (const char *)mission_video_download_result, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_MIN_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_CRC);
#endif
}

#if MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mission_video_download_result_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t mission_uid, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, mission_uid);
    _mav_put_uint8_t(buf, 8, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT, buf, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_MIN_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_CRC);
#else
    mavlink_mission_video_download_result_t *packet = (mavlink_mission_video_download_result_t *)msgbuf;
    packet->mission_uid = mission_uid;
    packet->result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT, (const char *)packet, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_MIN_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_CRC);
#endif
}
#endif

#endif

// MESSAGE MISSION_VIDEO_DOWNLOAD_RESULT UNPACKING


/**
 * @brief Get field mission_uid from mission_video_download_result message
 *
 * @return  Same mission identifier received earlier
 */
static inline uint64_t mavlink_msg_mission_video_download_result_get_mission_uid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field result from mission_video_download_result message
 *
 * @return  Result: 0 = success, 1 = failed, 2 = cancelled
 */
static inline uint8_t mavlink_msg_mission_video_download_result_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Decode a mission_video_download_result message into a struct
 *
 * @param msg The message to decode
 * @param mission_video_download_result C-struct to decode the message contents into
 */
static inline void mavlink_msg_mission_video_download_result_decode(const mavlink_message_t* msg, mavlink_mission_video_download_result_t* mission_video_download_result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mission_video_download_result->mission_uid = mavlink_msg_mission_video_download_result_get_mission_uid(msg);
    mission_video_download_result->result = mavlink_msg_mission_video_download_result_get_result(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN? msg->len : MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN;
        memset(mission_video_download_result, 0, MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_LEN);
    memcpy(mission_video_download_result, _MAV_PAYLOAD(msg), len);
#endif
}
