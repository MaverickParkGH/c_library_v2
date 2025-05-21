/** @file
 *  @brief MAVLink comm protocol generated from vision_semantics.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_VISION_SEMANTICS_H
#define MAVLINK_VISION_SEMANTICS_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_VISION_SEMANTICS.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_VISION_SEMANTICS_XML_HASH -631992664270212493

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{13000, 90, 240, 240, 0, 0, 0}, {13001, 170, 249, 249, 0, 0, 0}, {13002, 19, 9, 9, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_VISION_SEMANTICS

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_onboard_vision_semantics.h"
#include "./mavlink_msg_onboard_mission_video_uri.h"
#include "./mavlink_msg_mission_video_download_result.h"

// base include



#if MAVLINK_VISION_SEMANTICS_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_ONBOARD_VISION_SEMANTICS, MAVLINK_MESSAGE_INFO_ONBOARD_MISSION_VIDEO_URI, MAVLINK_MESSAGE_INFO_MISSION_VIDEO_DOWNLOAD_RESULT}
# define MAVLINK_MESSAGE_NAMES {{ "MISSION_VIDEO_DOWNLOAD_RESULT", 13002 }, { "ONBOARD_MISSION_VIDEO_URI", 13001 }, { "ONBOARD_VISION_SEMANTICS", 13000 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_VISION_SEMANTICS_H
