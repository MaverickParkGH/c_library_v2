/** @file
 *    @brief MAVLink comm protocol testsuite generated from vision_semantics.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef VISION_SEMANTICS_TESTSUITE_H
#define VISION_SEMANTICS_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_vision_semantics(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_vision_semantics(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_onboard_vision_semantics(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_onboard_vision_semantics_t packet_in = {
        93372036854775807ULL,73.0,101.0,963498296,963498504,{ 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100 },{ 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172 },{ 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244 },{ 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60 },{ 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132 },{ 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204 },{ 253, 254, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 },{ 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92 },{ 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164 }
    };
    mavlink_onboard_vision_semantics_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_utc = packet_in.time_utc;
        packet1.pitch = packet_in.pitch;
        packet1.yaw = packet_in.yaw;
        packet1.frame_id = packet_in.frame_id;
        packet1.n_object_entity = packet_in.n_object_entity;
        
        mav_array_memcpy(packet1.object_entity_unit1, packet_in.object_entity_unit1, sizeof(uint8_t)*24);
        mav_array_memcpy(packet1.object_entity_unit2, packet_in.object_entity_unit2, sizeof(uint8_t)*24);
        mav_array_memcpy(packet1.object_entity_unit3, packet_in.object_entity_unit3, sizeof(uint8_t)*24);
        mav_array_memcpy(packet1.object_entity_unit4, packet_in.object_entity_unit4, sizeof(uint8_t)*24);
        mav_array_memcpy(packet1.object_entity_unit5, packet_in.object_entity_unit5, sizeof(uint8_t)*24);
        mav_array_memcpy(packet1.object_entity_unit6, packet_in.object_entity_unit6, sizeof(uint8_t)*24);
        mav_array_memcpy(packet1.object_entity_unit7, packet_in.object_entity_unit7, sizeof(uint8_t)*24);
        mav_array_memcpy(packet1.object_entity_unit8, packet_in.object_entity_unit8, sizeof(uint8_t)*24);
        mav_array_memcpy(packet1.object_entity_unit9, packet_in.object_entity_unit9, sizeof(uint8_t)*24);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_vision_semantics_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_onboard_vision_semantics_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_vision_semantics_pack(system_id, component_id, &msg , packet1.time_utc , packet1.pitch , packet1.yaw , packet1.frame_id , packet1.n_object_entity , packet1.object_entity_unit1 , packet1.object_entity_unit2 , packet1.object_entity_unit3 , packet1.object_entity_unit4 , packet1.object_entity_unit5 , packet1.object_entity_unit6 , packet1.object_entity_unit7 , packet1.object_entity_unit8 , packet1.object_entity_unit9 );
    mavlink_msg_onboard_vision_semantics_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_vision_semantics_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_utc , packet1.pitch , packet1.yaw , packet1.frame_id , packet1.n_object_entity , packet1.object_entity_unit1 , packet1.object_entity_unit2 , packet1.object_entity_unit3 , packet1.object_entity_unit4 , packet1.object_entity_unit5 , packet1.object_entity_unit6 , packet1.object_entity_unit7 , packet1.object_entity_unit8 , packet1.object_entity_unit9 );
    mavlink_msg_onboard_vision_semantics_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_onboard_vision_semantics_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_vision_semantics_send(MAVLINK_COMM_1 , packet1.time_utc , packet1.pitch , packet1.yaw , packet1.frame_id , packet1.n_object_entity , packet1.object_entity_unit1 , packet1.object_entity_unit2 , packet1.object_entity_unit3 , packet1.object_entity_unit4 , packet1.object_entity_unit5 , packet1.object_entity_unit6 , packet1.object_entity_unit7 , packet1.object_entity_unit8 , packet1.object_entity_unit9 );
    mavlink_msg_onboard_vision_semantics_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ONBOARD_VISION_SEMANTICS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ONBOARD_VISION_SEMANTICS) != NULL);
#endif
}

static void mavlink_test_onboard_mission_video_uri(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_onboard_mission_video_uri_t packet_in = {
        93372036854775807ULL,"IJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM",237
    };
    mavlink_onboard_mission_video_uri_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.mission_uid = packet_in.mission_uid;
        packet1.is_encrypted = packet_in.is_encrypted;
        
        mav_array_memcpy(packet1.video_uri, packet_in.video_uri, sizeof(char)*240);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_mission_video_uri_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_onboard_mission_video_uri_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_mission_video_uri_pack(system_id, component_id, &msg , packet1.mission_uid , packet1.video_uri , packet1.is_encrypted );
    mavlink_msg_onboard_mission_video_uri_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_mission_video_uri_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mission_uid , packet1.video_uri , packet1.is_encrypted );
    mavlink_msg_onboard_mission_video_uri_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_onboard_mission_video_uri_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_onboard_mission_video_uri_send(MAVLINK_COMM_1 , packet1.mission_uid , packet1.video_uri , packet1.is_encrypted );
    mavlink_msg_onboard_mission_video_uri_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ONBOARD_MISSION_VIDEO_URI") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ONBOARD_MISSION_VIDEO_URI) != NULL);
#endif
}

static void mavlink_test_mission_video_download_result(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_mission_video_download_result_t packet_in = {
        93372036854775807ULL,29
    };
    mavlink_mission_video_download_result_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.mission_uid = packet_in.mission_uid;
        packet1.result = packet_in.result;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mission_video_download_result_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_mission_video_download_result_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mission_video_download_result_pack(system_id, component_id, &msg , packet1.mission_uid , packet1.result );
    mavlink_msg_mission_video_download_result_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mission_video_download_result_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mission_uid , packet1.result );
    mavlink_msg_mission_video_download_result_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_mission_video_download_result_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mission_video_download_result_send(MAVLINK_COMM_1 , packet1.mission_uid , packet1.result );
    mavlink_msg_mission_video_download_result_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("MISSION_VIDEO_DOWNLOAD_RESULT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_MISSION_VIDEO_DOWNLOAD_RESULT) != NULL);
#endif
}

static void mavlink_test_vision_semantics(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_onboard_vision_semantics(system_id, component_id, last_msg);
    mavlink_test_onboard_mission_video_uri(system_id, component_id, last_msg);
    mavlink_test_mission_video_download_result(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // VISION_SEMANTICS_TESTSUITE_H
