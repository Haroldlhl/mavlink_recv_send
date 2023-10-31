#pragma once
// MESSAGE SDG_INFO PACKING

#define MAVLINK_MSG_ID_SDG_INFO 204


typedef struct __mavlink_sdg_info_t {
 uint32_t seq; /*<  sequence number*/
 float vangle; /*< [deg] Target vertical line of sight angle*/
 float hangle; /*< [deg] Target horizontal line of sight angel*/
} mavlink_sdg_info_t;

#define MAVLINK_MSG_ID_SDG_INFO_LEN 12
#define MAVLINK_MSG_ID_SDG_INFO_MIN_LEN 12
#define MAVLINK_MSG_ID_204_LEN 12
#define MAVLINK_MSG_ID_204_MIN_LEN 12

#define MAVLINK_MSG_ID_SDG_INFO_CRC 190
#define MAVLINK_MSG_ID_204_CRC 190



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SDG_INFO { \
    204, \
    "SDG_INFO", \
    3, \
    {  { "seq", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_sdg_info_t, seq) }, \
         { "vangle", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_sdg_info_t, vangle) }, \
         { "hangle", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_sdg_info_t, hangle) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SDG_INFO { \
    "SDG_INFO", \
    3, \
    {  { "seq", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_sdg_info_t, seq) }, \
         { "vangle", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_sdg_info_t, vangle) }, \
         { "hangle", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_sdg_info_t, hangle) }, \
         } \
}
#endif

/**
 * @brief Pack a sdg_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param seq  sequence number
 * @param vangle [deg] Target vertical line of sight angle
 * @param hangle [deg] Target horizontal line of sight angel
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sdg_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t seq, float vangle, float hangle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SDG_INFO_LEN];
    _mav_put_uint32_t(buf, 0, seq);
    _mav_put_float(buf, 4, vangle);
    _mav_put_float(buf, 8, hangle);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SDG_INFO_LEN);
#else
    mavlink_sdg_info_t packet;
    packet.seq = seq;
    packet.vangle = vangle;
    packet.hangle = hangle;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SDG_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SDG_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SDG_INFO_MIN_LEN, MAVLINK_MSG_ID_SDG_INFO_LEN, MAVLINK_MSG_ID_SDG_INFO_CRC);
}

/**
 * @brief Pack a sdg_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param seq  sequence number
 * @param vangle [deg] Target vertical line of sight angle
 * @param hangle [deg] Target horizontal line of sight angel
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sdg_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t seq,float vangle,float hangle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SDG_INFO_LEN];
    _mav_put_uint32_t(buf, 0, seq);
    _mav_put_float(buf, 4, vangle);
    _mav_put_float(buf, 8, hangle);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SDG_INFO_LEN);
#else
    mavlink_sdg_info_t packet;
    packet.seq = seq;
    packet.vangle = vangle;
    packet.hangle = hangle;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SDG_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SDG_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SDG_INFO_MIN_LEN, MAVLINK_MSG_ID_SDG_INFO_LEN, MAVLINK_MSG_ID_SDG_INFO_CRC);
}

/**
 * @brief Encode a sdg_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sdg_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sdg_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sdg_info_t* sdg_info)
{
    return mavlink_msg_sdg_info_pack(system_id, component_id, msg, sdg_info->seq, sdg_info->vangle, sdg_info->hangle);
}

/**
 * @brief Encode a sdg_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sdg_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sdg_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sdg_info_t* sdg_info)
{
    return mavlink_msg_sdg_info_pack_chan(system_id, component_id, chan, msg, sdg_info->seq, sdg_info->vangle, sdg_info->hangle);
}

/**
 * @brief Send a sdg_info message
 * @param chan MAVLink channel to send the message
 *
 * @param seq  sequence number
 * @param vangle [deg] Target vertical line of sight angle
 * @param hangle [deg] Target horizontal line of sight angel
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sdg_info_send(mavlink_channel_t chan, uint32_t seq, float vangle, float hangle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SDG_INFO_LEN];
    _mav_put_uint32_t(buf, 0, seq);
    _mav_put_float(buf, 4, vangle);
    _mav_put_float(buf, 8, hangle);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SDG_INFO, buf, MAVLINK_MSG_ID_SDG_INFO_MIN_LEN, MAVLINK_MSG_ID_SDG_INFO_LEN, MAVLINK_MSG_ID_SDG_INFO_CRC);
#else
    mavlink_sdg_info_t packet;
    packet.seq = seq;
    packet.vangle = vangle;
    packet.hangle = hangle;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SDG_INFO, (const char *)&packet, MAVLINK_MSG_ID_SDG_INFO_MIN_LEN, MAVLINK_MSG_ID_SDG_INFO_LEN, MAVLINK_MSG_ID_SDG_INFO_CRC);
#endif
}

/**
 * @brief Send a sdg_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sdg_info_send_struct(mavlink_channel_t chan, const mavlink_sdg_info_t* sdg_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sdg_info_send(chan, sdg_info->seq, sdg_info->vangle, sdg_info->hangle);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SDG_INFO, (const char *)sdg_info, MAVLINK_MSG_ID_SDG_INFO_MIN_LEN, MAVLINK_MSG_ID_SDG_INFO_LEN, MAVLINK_MSG_ID_SDG_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_SDG_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sdg_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t seq, float vangle, float hangle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, seq);
    _mav_put_float(buf, 4, vangle);
    _mav_put_float(buf, 8, hangle);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SDG_INFO, buf, MAVLINK_MSG_ID_SDG_INFO_MIN_LEN, MAVLINK_MSG_ID_SDG_INFO_LEN, MAVLINK_MSG_ID_SDG_INFO_CRC);
#else
    mavlink_sdg_info_t *packet = (mavlink_sdg_info_t *)msgbuf;
    packet->seq = seq;
    packet->vangle = vangle;
    packet->hangle = hangle;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SDG_INFO, (const char *)packet, MAVLINK_MSG_ID_SDG_INFO_MIN_LEN, MAVLINK_MSG_ID_SDG_INFO_LEN, MAVLINK_MSG_ID_SDG_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE SDG_INFO UNPACKING


/**
 * @brief Get field seq from sdg_info message
 *
 * @return  sequence number
 */
static inline uint32_t mavlink_msg_sdg_info_get_seq(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field vangle from sdg_info message
 *
 * @return [deg] Target vertical line of sight angle
 */
static inline float mavlink_msg_sdg_info_get_vangle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field hangle from sdg_info message
 *
 * @return [deg] Target horizontal line of sight angel
 */
static inline float mavlink_msg_sdg_info_get_hangle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a sdg_info message into a struct
 *
 * @param msg The message to decode
 * @param sdg_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_sdg_info_decode(const mavlink_message_t* msg, mavlink_sdg_info_t* sdg_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    sdg_info->seq = mavlink_msg_sdg_info_get_seq(msg);
    sdg_info->vangle = mavlink_msg_sdg_info_get_vangle(msg);
    sdg_info->hangle = mavlink_msg_sdg_info_get_hangle(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SDG_INFO_LEN? msg->len : MAVLINK_MSG_ID_SDG_INFO_LEN;
        memset(sdg_info, 0, MAVLINK_MSG_ID_SDG_INFO_LEN);
    memcpy(sdg_info, _MAV_PAYLOAD(msg), len);
#endif
}
