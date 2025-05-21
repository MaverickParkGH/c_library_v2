#pragma once
// MESSAGE ONBOARD_VISION_SEMANTICS PACKING

#define MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS 13000


typedef struct __mavlink_onboard_vision_semantics_t {
 uint64_t time_utc; /*<  Current Time in UTC*/
 float pitch; /*<  Pitch Angle*/
 float yaw; /*<  Yaw Angle*/
 uint32_t frame_id; /*<  Capture Image Frame Id about Detection*/
 uint32_t n_object_entity; /*<  Number of Objects*/
 uint8_t object_entity_unit1[24]; /*<  Object Entity Unit*/
 uint8_t object_entity_unit2[24]; /*<  Object Entity Unit*/
 uint8_t object_entity_unit3[24]; /*<  Object Entity Unit*/
 uint8_t object_entity_unit4[24]; /*<  Object Entity Unit*/
 uint8_t object_entity_unit5[24]; /*<  Object Entity Unit*/
 uint8_t object_entity_unit6[24]; /*<  Object Entity Unit*/
 uint8_t object_entity_unit7[24]; /*<  Object Entity Unit*/
 uint8_t object_entity_unit8[24]; /*<  Object Entity Unit*/
 uint8_t object_entity_unit9[24]; /*<  Object Entity Unit*/
} mavlink_onboard_vision_semantics_t;

#define MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN 240
#define MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_MIN_LEN 240
#define MAVLINK_MSG_ID_13000_LEN 240
#define MAVLINK_MSG_ID_13000_MIN_LEN 240

#define MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_CRC 90
#define MAVLINK_MSG_ID_13000_CRC 90

#define MAVLINK_MSG_ONBOARD_VISION_SEMANTICS_FIELD_OBJECT_ENTITY_UNIT1_LEN 24
#define MAVLINK_MSG_ONBOARD_VISION_SEMANTICS_FIELD_OBJECT_ENTITY_UNIT2_LEN 24
#define MAVLINK_MSG_ONBOARD_VISION_SEMANTICS_FIELD_OBJECT_ENTITY_UNIT3_LEN 24
#define MAVLINK_MSG_ONBOARD_VISION_SEMANTICS_FIELD_OBJECT_ENTITY_UNIT4_LEN 24
#define MAVLINK_MSG_ONBOARD_VISION_SEMANTICS_FIELD_OBJECT_ENTITY_UNIT5_LEN 24
#define MAVLINK_MSG_ONBOARD_VISION_SEMANTICS_FIELD_OBJECT_ENTITY_UNIT6_LEN 24
#define MAVLINK_MSG_ONBOARD_VISION_SEMANTICS_FIELD_OBJECT_ENTITY_UNIT7_LEN 24
#define MAVLINK_MSG_ONBOARD_VISION_SEMANTICS_FIELD_OBJECT_ENTITY_UNIT8_LEN 24
#define MAVLINK_MSG_ONBOARD_VISION_SEMANTICS_FIELD_OBJECT_ENTITY_UNIT9_LEN 24

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ONBOARD_VISION_SEMANTICS { \
    13000, \
    "ONBOARD_VISION_SEMANTICS", \
    14, \
    {  { "time_utc", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_onboard_vision_semantics_t, time_utc) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_onboard_vision_semantics_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_onboard_vision_semantics_t, yaw) }, \
         { "frame_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_onboard_vision_semantics_t, frame_id) }, \
         { "n_object_entity", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_onboard_vision_semantics_t, n_object_entity) }, \
         { "object_entity_unit1", NULL, MAVLINK_TYPE_UINT8_T, 24, 24, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit1) }, \
         { "object_entity_unit2", NULL, MAVLINK_TYPE_UINT8_T, 24, 48, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit2) }, \
         { "object_entity_unit3", NULL, MAVLINK_TYPE_UINT8_T, 24, 72, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit3) }, \
         { "object_entity_unit4", NULL, MAVLINK_TYPE_UINT8_T, 24, 96, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit4) }, \
         { "object_entity_unit5", NULL, MAVLINK_TYPE_UINT8_T, 24, 120, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit5) }, \
         { "object_entity_unit6", NULL, MAVLINK_TYPE_UINT8_T, 24, 144, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit6) }, \
         { "object_entity_unit7", NULL, MAVLINK_TYPE_UINT8_T, 24, 168, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit7) }, \
         { "object_entity_unit8", NULL, MAVLINK_TYPE_UINT8_T, 24, 192, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit8) }, \
         { "object_entity_unit9", NULL, MAVLINK_TYPE_UINT8_T, 24, 216, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit9) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ONBOARD_VISION_SEMANTICS { \
    "ONBOARD_VISION_SEMANTICS", \
    14, \
    {  { "time_utc", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_onboard_vision_semantics_t, time_utc) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_onboard_vision_semantics_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_onboard_vision_semantics_t, yaw) }, \
         { "frame_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_onboard_vision_semantics_t, frame_id) }, \
         { "n_object_entity", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_onboard_vision_semantics_t, n_object_entity) }, \
         { "object_entity_unit1", NULL, MAVLINK_TYPE_UINT8_T, 24, 24, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit1) }, \
         { "object_entity_unit2", NULL, MAVLINK_TYPE_UINT8_T, 24, 48, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit2) }, \
         { "object_entity_unit3", NULL, MAVLINK_TYPE_UINT8_T, 24, 72, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit3) }, \
         { "object_entity_unit4", NULL, MAVLINK_TYPE_UINT8_T, 24, 96, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit4) }, \
         { "object_entity_unit5", NULL, MAVLINK_TYPE_UINT8_T, 24, 120, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit5) }, \
         { "object_entity_unit6", NULL, MAVLINK_TYPE_UINT8_T, 24, 144, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit6) }, \
         { "object_entity_unit7", NULL, MAVLINK_TYPE_UINT8_T, 24, 168, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit7) }, \
         { "object_entity_unit8", NULL, MAVLINK_TYPE_UINT8_T, 24, 192, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit8) }, \
         { "object_entity_unit9", NULL, MAVLINK_TYPE_UINT8_T, 24, 216, offsetof(mavlink_onboard_vision_semantics_t, object_entity_unit9) }, \
         } \
}
#endif

/**
 * @brief Pack a onboard_vision_semantics message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_utc  Current Time in UTC
 * @param pitch  Pitch Angle
 * @param yaw  Yaw Angle
 * @param frame_id  Capture Image Frame Id about Detection
 * @param n_object_entity  Number of Objects
 * @param object_entity_unit1  Object Entity Unit
 * @param object_entity_unit2  Object Entity Unit
 * @param object_entity_unit3  Object Entity Unit
 * @param object_entity_unit4  Object Entity Unit
 * @param object_entity_unit5  Object Entity Unit
 * @param object_entity_unit6  Object Entity Unit
 * @param object_entity_unit7  Object Entity Unit
 * @param object_entity_unit8  Object Entity Unit
 * @param object_entity_unit9  Object Entity Unit
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_vision_semantics_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_utc, float pitch, float yaw, uint32_t frame_id, uint32_t n_object_entity, const uint8_t *object_entity_unit1, const uint8_t *object_entity_unit2, const uint8_t *object_entity_unit3, const uint8_t *object_entity_unit4, const uint8_t *object_entity_unit5, const uint8_t *object_entity_unit6, const uint8_t *object_entity_unit7, const uint8_t *object_entity_unit8, const uint8_t *object_entity_unit9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN];
    _mav_put_uint64_t(buf, 0, time_utc);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_uint32_t(buf, 16, frame_id);
    _mav_put_uint32_t(buf, 20, n_object_entity);
    _mav_put_uint8_t_array(buf, 24, object_entity_unit1, 24);
    _mav_put_uint8_t_array(buf, 48, object_entity_unit2, 24);
    _mav_put_uint8_t_array(buf, 72, object_entity_unit3, 24);
    _mav_put_uint8_t_array(buf, 96, object_entity_unit4, 24);
    _mav_put_uint8_t_array(buf, 120, object_entity_unit5, 24);
    _mav_put_uint8_t_array(buf, 144, object_entity_unit6, 24);
    _mav_put_uint8_t_array(buf, 168, object_entity_unit7, 24);
    _mav_put_uint8_t_array(buf, 192, object_entity_unit8, 24);
    _mav_put_uint8_t_array(buf, 216, object_entity_unit9, 24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN);
#else
    mavlink_onboard_vision_semantics_t packet;
    packet.time_utc = time_utc;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.frame_id = frame_id;
    packet.n_object_entity = n_object_entity;
    mav_array_memcpy(packet.object_entity_unit1, object_entity_unit1, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit2, object_entity_unit2, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit3, object_entity_unit3, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit4, object_entity_unit4, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit5, object_entity_unit5, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit6, object_entity_unit6, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit7, object_entity_unit7, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit8, object_entity_unit8, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit9, object_entity_unit9, sizeof(uint8_t)*24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_CRC);
}

/**
 * @brief Pack a onboard_vision_semantics message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_utc  Current Time in UTC
 * @param pitch  Pitch Angle
 * @param yaw  Yaw Angle
 * @param frame_id  Capture Image Frame Id about Detection
 * @param n_object_entity  Number of Objects
 * @param object_entity_unit1  Object Entity Unit
 * @param object_entity_unit2  Object Entity Unit
 * @param object_entity_unit3  Object Entity Unit
 * @param object_entity_unit4  Object Entity Unit
 * @param object_entity_unit5  Object Entity Unit
 * @param object_entity_unit6  Object Entity Unit
 * @param object_entity_unit7  Object Entity Unit
 * @param object_entity_unit8  Object Entity Unit
 * @param object_entity_unit9  Object Entity Unit
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_vision_semantics_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_utc, float pitch, float yaw, uint32_t frame_id, uint32_t n_object_entity, const uint8_t *object_entity_unit1, const uint8_t *object_entity_unit2, const uint8_t *object_entity_unit3, const uint8_t *object_entity_unit4, const uint8_t *object_entity_unit5, const uint8_t *object_entity_unit6, const uint8_t *object_entity_unit7, const uint8_t *object_entity_unit8, const uint8_t *object_entity_unit9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN];
    _mav_put_uint64_t(buf, 0, time_utc);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_uint32_t(buf, 16, frame_id);
    _mav_put_uint32_t(buf, 20, n_object_entity);
    _mav_put_uint8_t_array(buf, 24, object_entity_unit1, 24);
    _mav_put_uint8_t_array(buf, 48, object_entity_unit2, 24);
    _mav_put_uint8_t_array(buf, 72, object_entity_unit3, 24);
    _mav_put_uint8_t_array(buf, 96, object_entity_unit4, 24);
    _mav_put_uint8_t_array(buf, 120, object_entity_unit5, 24);
    _mav_put_uint8_t_array(buf, 144, object_entity_unit6, 24);
    _mav_put_uint8_t_array(buf, 168, object_entity_unit7, 24);
    _mav_put_uint8_t_array(buf, 192, object_entity_unit8, 24);
    _mav_put_uint8_t_array(buf, 216, object_entity_unit9, 24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN);
#else
    mavlink_onboard_vision_semantics_t packet;
    packet.time_utc = time_utc;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.frame_id = frame_id;
    packet.n_object_entity = n_object_entity;
    mav_array_memcpy(packet.object_entity_unit1, object_entity_unit1, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit2, object_entity_unit2, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit3, object_entity_unit3, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit4, object_entity_unit4, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit5, object_entity_unit5, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit6, object_entity_unit6, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit7, object_entity_unit7, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit8, object_entity_unit8, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit9, object_entity_unit9, sizeof(uint8_t)*24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN);
#endif
}

/**
 * @brief Pack a onboard_vision_semantics message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_utc  Current Time in UTC
 * @param pitch  Pitch Angle
 * @param yaw  Yaw Angle
 * @param frame_id  Capture Image Frame Id about Detection
 * @param n_object_entity  Number of Objects
 * @param object_entity_unit1  Object Entity Unit
 * @param object_entity_unit2  Object Entity Unit
 * @param object_entity_unit3  Object Entity Unit
 * @param object_entity_unit4  Object Entity Unit
 * @param object_entity_unit5  Object Entity Unit
 * @param object_entity_unit6  Object Entity Unit
 * @param object_entity_unit7  Object Entity Unit
 * @param object_entity_unit8  Object Entity Unit
 * @param object_entity_unit9  Object Entity Unit
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_vision_semantics_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_utc,float pitch,float yaw,uint32_t frame_id,uint32_t n_object_entity,const uint8_t *object_entity_unit1,const uint8_t *object_entity_unit2,const uint8_t *object_entity_unit3,const uint8_t *object_entity_unit4,const uint8_t *object_entity_unit5,const uint8_t *object_entity_unit6,const uint8_t *object_entity_unit7,const uint8_t *object_entity_unit8,const uint8_t *object_entity_unit9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN];
    _mav_put_uint64_t(buf, 0, time_utc);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_uint32_t(buf, 16, frame_id);
    _mav_put_uint32_t(buf, 20, n_object_entity);
    _mav_put_uint8_t_array(buf, 24, object_entity_unit1, 24);
    _mav_put_uint8_t_array(buf, 48, object_entity_unit2, 24);
    _mav_put_uint8_t_array(buf, 72, object_entity_unit3, 24);
    _mav_put_uint8_t_array(buf, 96, object_entity_unit4, 24);
    _mav_put_uint8_t_array(buf, 120, object_entity_unit5, 24);
    _mav_put_uint8_t_array(buf, 144, object_entity_unit6, 24);
    _mav_put_uint8_t_array(buf, 168, object_entity_unit7, 24);
    _mav_put_uint8_t_array(buf, 192, object_entity_unit8, 24);
    _mav_put_uint8_t_array(buf, 216, object_entity_unit9, 24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN);
#else
    mavlink_onboard_vision_semantics_t packet;
    packet.time_utc = time_utc;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.frame_id = frame_id;
    packet.n_object_entity = n_object_entity;
    mav_array_memcpy(packet.object_entity_unit1, object_entity_unit1, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit2, object_entity_unit2, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit3, object_entity_unit3, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit4, object_entity_unit4, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit5, object_entity_unit5, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit6, object_entity_unit6, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit7, object_entity_unit7, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit8, object_entity_unit8, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit9, object_entity_unit9, sizeof(uint8_t)*24);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_CRC);
}

/**
 * @brief Encode a onboard_vision_semantics struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param onboard_vision_semantics C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_vision_semantics_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_onboard_vision_semantics_t* onboard_vision_semantics)
{
    return mavlink_msg_onboard_vision_semantics_pack(system_id, component_id, msg, onboard_vision_semantics->time_utc, onboard_vision_semantics->pitch, onboard_vision_semantics->yaw, onboard_vision_semantics->frame_id, onboard_vision_semantics->n_object_entity, onboard_vision_semantics->object_entity_unit1, onboard_vision_semantics->object_entity_unit2, onboard_vision_semantics->object_entity_unit3, onboard_vision_semantics->object_entity_unit4, onboard_vision_semantics->object_entity_unit5, onboard_vision_semantics->object_entity_unit6, onboard_vision_semantics->object_entity_unit7, onboard_vision_semantics->object_entity_unit8, onboard_vision_semantics->object_entity_unit9);
}

/**
 * @brief Encode a onboard_vision_semantics struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param onboard_vision_semantics C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_vision_semantics_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_onboard_vision_semantics_t* onboard_vision_semantics)
{
    return mavlink_msg_onboard_vision_semantics_pack_chan(system_id, component_id, chan, msg, onboard_vision_semantics->time_utc, onboard_vision_semantics->pitch, onboard_vision_semantics->yaw, onboard_vision_semantics->frame_id, onboard_vision_semantics->n_object_entity, onboard_vision_semantics->object_entity_unit1, onboard_vision_semantics->object_entity_unit2, onboard_vision_semantics->object_entity_unit3, onboard_vision_semantics->object_entity_unit4, onboard_vision_semantics->object_entity_unit5, onboard_vision_semantics->object_entity_unit6, onboard_vision_semantics->object_entity_unit7, onboard_vision_semantics->object_entity_unit8, onboard_vision_semantics->object_entity_unit9);
}

/**
 * @brief Encode a onboard_vision_semantics struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param onboard_vision_semantics C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_vision_semantics_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_onboard_vision_semantics_t* onboard_vision_semantics)
{
    return mavlink_msg_onboard_vision_semantics_pack_status(system_id, component_id, _status, msg,  onboard_vision_semantics->time_utc, onboard_vision_semantics->pitch, onboard_vision_semantics->yaw, onboard_vision_semantics->frame_id, onboard_vision_semantics->n_object_entity, onboard_vision_semantics->object_entity_unit1, onboard_vision_semantics->object_entity_unit2, onboard_vision_semantics->object_entity_unit3, onboard_vision_semantics->object_entity_unit4, onboard_vision_semantics->object_entity_unit5, onboard_vision_semantics->object_entity_unit6, onboard_vision_semantics->object_entity_unit7, onboard_vision_semantics->object_entity_unit8, onboard_vision_semantics->object_entity_unit9);
}

/**
 * @brief Send a onboard_vision_semantics message
 * @param chan MAVLink channel to send the message
 *
 * @param time_utc  Current Time in UTC
 * @param pitch  Pitch Angle
 * @param yaw  Yaw Angle
 * @param frame_id  Capture Image Frame Id about Detection
 * @param n_object_entity  Number of Objects
 * @param object_entity_unit1  Object Entity Unit
 * @param object_entity_unit2  Object Entity Unit
 * @param object_entity_unit3  Object Entity Unit
 * @param object_entity_unit4  Object Entity Unit
 * @param object_entity_unit5  Object Entity Unit
 * @param object_entity_unit6  Object Entity Unit
 * @param object_entity_unit7  Object Entity Unit
 * @param object_entity_unit8  Object Entity Unit
 * @param object_entity_unit9  Object Entity Unit
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_onboard_vision_semantics_send(mavlink_channel_t chan, uint64_t time_utc, float pitch, float yaw, uint32_t frame_id, uint32_t n_object_entity, const uint8_t *object_entity_unit1, const uint8_t *object_entity_unit2, const uint8_t *object_entity_unit3, const uint8_t *object_entity_unit4, const uint8_t *object_entity_unit5, const uint8_t *object_entity_unit6, const uint8_t *object_entity_unit7, const uint8_t *object_entity_unit8, const uint8_t *object_entity_unit9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN];
    _mav_put_uint64_t(buf, 0, time_utc);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_uint32_t(buf, 16, frame_id);
    _mav_put_uint32_t(buf, 20, n_object_entity);
    _mav_put_uint8_t_array(buf, 24, object_entity_unit1, 24);
    _mav_put_uint8_t_array(buf, 48, object_entity_unit2, 24);
    _mav_put_uint8_t_array(buf, 72, object_entity_unit3, 24);
    _mav_put_uint8_t_array(buf, 96, object_entity_unit4, 24);
    _mav_put_uint8_t_array(buf, 120, object_entity_unit5, 24);
    _mav_put_uint8_t_array(buf, 144, object_entity_unit6, 24);
    _mav_put_uint8_t_array(buf, 168, object_entity_unit7, 24);
    _mav_put_uint8_t_array(buf, 192, object_entity_unit8, 24);
    _mav_put_uint8_t_array(buf, 216, object_entity_unit9, 24);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS, buf, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_CRC);
#else
    mavlink_onboard_vision_semantics_t packet;
    packet.time_utc = time_utc;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.frame_id = frame_id;
    packet.n_object_entity = n_object_entity;
    mav_array_memcpy(packet.object_entity_unit1, object_entity_unit1, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit2, object_entity_unit2, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit3, object_entity_unit3, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit4, object_entity_unit4, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit5, object_entity_unit5, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit6, object_entity_unit6, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit7, object_entity_unit7, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit8, object_entity_unit8, sizeof(uint8_t)*24);
    mav_array_memcpy(packet.object_entity_unit9, object_entity_unit9, sizeof(uint8_t)*24);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS, (const char *)&packet, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_CRC);
#endif
}

/**
 * @brief Send a onboard_vision_semantics message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_onboard_vision_semantics_send_struct(mavlink_channel_t chan, const mavlink_onboard_vision_semantics_t* onboard_vision_semantics)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_onboard_vision_semantics_send(chan, onboard_vision_semantics->time_utc, onboard_vision_semantics->pitch, onboard_vision_semantics->yaw, onboard_vision_semantics->frame_id, onboard_vision_semantics->n_object_entity, onboard_vision_semantics->object_entity_unit1, onboard_vision_semantics->object_entity_unit2, onboard_vision_semantics->object_entity_unit3, onboard_vision_semantics->object_entity_unit4, onboard_vision_semantics->object_entity_unit5, onboard_vision_semantics->object_entity_unit6, onboard_vision_semantics->object_entity_unit7, onboard_vision_semantics->object_entity_unit8, onboard_vision_semantics->object_entity_unit9);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS, (const char *)onboard_vision_semantics, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_onboard_vision_semantics_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_utc, float pitch, float yaw, uint32_t frame_id, uint32_t n_object_entity, const uint8_t *object_entity_unit1, const uint8_t *object_entity_unit2, const uint8_t *object_entity_unit3, const uint8_t *object_entity_unit4, const uint8_t *object_entity_unit5, const uint8_t *object_entity_unit6, const uint8_t *object_entity_unit7, const uint8_t *object_entity_unit8, const uint8_t *object_entity_unit9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_utc);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yaw);
    _mav_put_uint32_t(buf, 16, frame_id);
    _mav_put_uint32_t(buf, 20, n_object_entity);
    _mav_put_uint8_t_array(buf, 24, object_entity_unit1, 24);
    _mav_put_uint8_t_array(buf, 48, object_entity_unit2, 24);
    _mav_put_uint8_t_array(buf, 72, object_entity_unit3, 24);
    _mav_put_uint8_t_array(buf, 96, object_entity_unit4, 24);
    _mav_put_uint8_t_array(buf, 120, object_entity_unit5, 24);
    _mav_put_uint8_t_array(buf, 144, object_entity_unit6, 24);
    _mav_put_uint8_t_array(buf, 168, object_entity_unit7, 24);
    _mav_put_uint8_t_array(buf, 192, object_entity_unit8, 24);
    _mav_put_uint8_t_array(buf, 216, object_entity_unit9, 24);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS, buf, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_CRC);
#else
    mavlink_onboard_vision_semantics_t *packet = (mavlink_onboard_vision_semantics_t *)msgbuf;
    packet->time_utc = time_utc;
    packet->pitch = pitch;
    packet->yaw = yaw;
    packet->frame_id = frame_id;
    packet->n_object_entity = n_object_entity;
    mav_array_memcpy(packet->object_entity_unit1, object_entity_unit1, sizeof(uint8_t)*24);
    mav_array_memcpy(packet->object_entity_unit2, object_entity_unit2, sizeof(uint8_t)*24);
    mav_array_memcpy(packet->object_entity_unit3, object_entity_unit3, sizeof(uint8_t)*24);
    mav_array_memcpy(packet->object_entity_unit4, object_entity_unit4, sizeof(uint8_t)*24);
    mav_array_memcpy(packet->object_entity_unit5, object_entity_unit5, sizeof(uint8_t)*24);
    mav_array_memcpy(packet->object_entity_unit6, object_entity_unit6, sizeof(uint8_t)*24);
    mav_array_memcpy(packet->object_entity_unit7, object_entity_unit7, sizeof(uint8_t)*24);
    mav_array_memcpy(packet->object_entity_unit8, object_entity_unit8, sizeof(uint8_t)*24);
    mav_array_memcpy(packet->object_entity_unit9, object_entity_unit9, sizeof(uint8_t)*24);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS, (const char *)packet, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_CRC);
#endif
}
#endif

#endif

// MESSAGE ONBOARD_VISION_SEMANTICS UNPACKING


/**
 * @brief Get field time_utc from onboard_vision_semantics message
 *
 * @return  Current Time in UTC
 */
static inline uint64_t mavlink_msg_onboard_vision_semantics_get_time_utc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field pitch from onboard_vision_semantics message
 *
 * @return  Pitch Angle
 */
static inline float mavlink_msg_onboard_vision_semantics_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field yaw from onboard_vision_semantics message
 *
 * @return  Yaw Angle
 */
static inline float mavlink_msg_onboard_vision_semantics_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field frame_id from onboard_vision_semantics message
 *
 * @return  Capture Image Frame Id about Detection
 */
static inline uint32_t mavlink_msg_onboard_vision_semantics_get_frame_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  16);
}

/**
 * @brief Get field n_object_entity from onboard_vision_semantics message
 *
 * @return  Number of Objects
 */
static inline uint32_t mavlink_msg_onboard_vision_semantics_get_n_object_entity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field object_entity_unit1 from onboard_vision_semantics message
 *
 * @return  Object Entity Unit
 */
static inline uint16_t mavlink_msg_onboard_vision_semantics_get_object_entity_unit1(const mavlink_message_t* msg, uint8_t *object_entity_unit1)
{
    return _MAV_RETURN_uint8_t_array(msg, object_entity_unit1, 24,  24);
}

/**
 * @brief Get field object_entity_unit2 from onboard_vision_semantics message
 *
 * @return  Object Entity Unit
 */
static inline uint16_t mavlink_msg_onboard_vision_semantics_get_object_entity_unit2(const mavlink_message_t* msg, uint8_t *object_entity_unit2)
{
    return _MAV_RETURN_uint8_t_array(msg, object_entity_unit2, 24,  48);
}

/**
 * @brief Get field object_entity_unit3 from onboard_vision_semantics message
 *
 * @return  Object Entity Unit
 */
static inline uint16_t mavlink_msg_onboard_vision_semantics_get_object_entity_unit3(const mavlink_message_t* msg, uint8_t *object_entity_unit3)
{
    return _MAV_RETURN_uint8_t_array(msg, object_entity_unit3, 24,  72);
}

/**
 * @brief Get field object_entity_unit4 from onboard_vision_semantics message
 *
 * @return  Object Entity Unit
 */
static inline uint16_t mavlink_msg_onboard_vision_semantics_get_object_entity_unit4(const mavlink_message_t* msg, uint8_t *object_entity_unit4)
{
    return _MAV_RETURN_uint8_t_array(msg, object_entity_unit4, 24,  96);
}

/**
 * @brief Get field object_entity_unit5 from onboard_vision_semantics message
 *
 * @return  Object Entity Unit
 */
static inline uint16_t mavlink_msg_onboard_vision_semantics_get_object_entity_unit5(const mavlink_message_t* msg, uint8_t *object_entity_unit5)
{
    return _MAV_RETURN_uint8_t_array(msg, object_entity_unit5, 24,  120);
}

/**
 * @brief Get field object_entity_unit6 from onboard_vision_semantics message
 *
 * @return  Object Entity Unit
 */
static inline uint16_t mavlink_msg_onboard_vision_semantics_get_object_entity_unit6(const mavlink_message_t* msg, uint8_t *object_entity_unit6)
{
    return _MAV_RETURN_uint8_t_array(msg, object_entity_unit6, 24,  144);
}

/**
 * @brief Get field object_entity_unit7 from onboard_vision_semantics message
 *
 * @return  Object Entity Unit
 */
static inline uint16_t mavlink_msg_onboard_vision_semantics_get_object_entity_unit7(const mavlink_message_t* msg, uint8_t *object_entity_unit7)
{
    return _MAV_RETURN_uint8_t_array(msg, object_entity_unit7, 24,  168);
}

/**
 * @brief Get field object_entity_unit8 from onboard_vision_semantics message
 *
 * @return  Object Entity Unit
 */
static inline uint16_t mavlink_msg_onboard_vision_semantics_get_object_entity_unit8(const mavlink_message_t* msg, uint8_t *object_entity_unit8)
{
    return _MAV_RETURN_uint8_t_array(msg, object_entity_unit8, 24,  192);
}

/**
 * @brief Get field object_entity_unit9 from onboard_vision_semantics message
 *
 * @return  Object Entity Unit
 */
static inline uint16_t mavlink_msg_onboard_vision_semantics_get_object_entity_unit9(const mavlink_message_t* msg, uint8_t *object_entity_unit9)
{
    return _MAV_RETURN_uint8_t_array(msg, object_entity_unit9, 24,  216);
}

/**
 * @brief Decode a onboard_vision_semantics message into a struct
 *
 * @param msg The message to decode
 * @param onboard_vision_semantics C-struct to decode the message contents into
 */
static inline void mavlink_msg_onboard_vision_semantics_decode(const mavlink_message_t* msg, mavlink_onboard_vision_semantics_t* onboard_vision_semantics)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    onboard_vision_semantics->time_utc = mavlink_msg_onboard_vision_semantics_get_time_utc(msg);
    onboard_vision_semantics->pitch = mavlink_msg_onboard_vision_semantics_get_pitch(msg);
    onboard_vision_semantics->yaw = mavlink_msg_onboard_vision_semantics_get_yaw(msg);
    onboard_vision_semantics->frame_id = mavlink_msg_onboard_vision_semantics_get_frame_id(msg);
    onboard_vision_semantics->n_object_entity = mavlink_msg_onboard_vision_semantics_get_n_object_entity(msg);
    mavlink_msg_onboard_vision_semantics_get_object_entity_unit1(msg, onboard_vision_semantics->object_entity_unit1);
    mavlink_msg_onboard_vision_semantics_get_object_entity_unit2(msg, onboard_vision_semantics->object_entity_unit2);
    mavlink_msg_onboard_vision_semantics_get_object_entity_unit3(msg, onboard_vision_semantics->object_entity_unit3);
    mavlink_msg_onboard_vision_semantics_get_object_entity_unit4(msg, onboard_vision_semantics->object_entity_unit4);
    mavlink_msg_onboard_vision_semantics_get_object_entity_unit5(msg, onboard_vision_semantics->object_entity_unit5);
    mavlink_msg_onboard_vision_semantics_get_object_entity_unit6(msg, onboard_vision_semantics->object_entity_unit6);
    mavlink_msg_onboard_vision_semantics_get_object_entity_unit7(msg, onboard_vision_semantics->object_entity_unit7);
    mavlink_msg_onboard_vision_semantics_get_object_entity_unit8(msg, onboard_vision_semantics->object_entity_unit8);
    mavlink_msg_onboard_vision_semantics_get_object_entity_unit9(msg, onboard_vision_semantics->object_entity_unit9);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN? msg->len : MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN;
        memset(onboard_vision_semantics, 0, MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_LEN);
    memcpy(onboard_vision_semantics, _MAV_PAYLOAD(msg), len);
#endif
}
