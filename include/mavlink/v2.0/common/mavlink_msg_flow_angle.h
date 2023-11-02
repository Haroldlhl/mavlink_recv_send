#pragma once
// MESSAGE FLOW_ANGLE PACKING

#define MAVLINK_MSG_ID_FLOW_ANGLE 414


typedef struct __mavlink_flow_angle_t {
 uint64_t timestamp; /*< [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.*/
 int32_t angle_attack; /*< [degE7]  angle of attack*/
 int32_t angle_sideslip; /*< [degE7]  angle of sideslip*/
} mavlink_flow_angle_t;

#define MAVLINK_MSG_ID_FLOW_ANGLE_LEN 16
#define MAVLINK_MSG_ID_FLOW_ANGLE_MIN_LEN 16
#define MAVLINK_MSG_ID_414_LEN 16
#define MAVLINK_MSG_ID_414_MIN_LEN 16

#define MAVLINK_MSG_ID_FLOW_ANGLE_CRC 24
#define MAVLINK_MSG_ID_414_CRC 24



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FLOW_ANGLE { \
    414, \
    "FLOW_ANGLE", \
    3, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_flow_angle_t, timestamp) }, \
         { "angle_attack", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_flow_angle_t, angle_attack) }, \
         { "angle_sideslip", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_flow_angle_t, angle_sideslip) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FLOW_ANGLE { \
    "FLOW_ANGLE", \
    3, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_flow_angle_t, timestamp) }, \
         { "angle_attack", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_flow_angle_t, angle_attack) }, \
         { "angle_sideslip", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_flow_angle_t, angle_sideslip) }, \
         } \
}
#endif

/**
 * @brief Pack a flow_angle message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param angle_attack [degE7]  angle of attack
 * @param angle_sideslip [degE7]  angle of sideslip
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flow_angle_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, int32_t angle_attack, int32_t angle_sideslip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLOW_ANGLE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_int32_t(buf, 8, angle_attack);
    _mav_put_int32_t(buf, 12, angle_sideslip);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLOW_ANGLE_LEN);
#else
    mavlink_flow_angle_t packet;
    packet.timestamp = timestamp;
    packet.angle_attack = angle_attack;
    packet.angle_sideslip = angle_sideslip;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLOW_ANGLE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLOW_ANGLE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FLOW_ANGLE_MIN_LEN, MAVLINK_MSG_ID_FLOW_ANGLE_LEN, MAVLINK_MSG_ID_FLOW_ANGLE_CRC);
}

/**
 * @brief Pack a flow_angle message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param angle_attack [degE7]  angle of attack
 * @param angle_sideslip [degE7]  angle of sideslip
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flow_angle_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,int32_t angle_attack,int32_t angle_sideslip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLOW_ANGLE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_int32_t(buf, 8, angle_attack);
    _mav_put_int32_t(buf, 12, angle_sideslip);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLOW_ANGLE_LEN);
#else
    mavlink_flow_angle_t packet;
    packet.timestamp = timestamp;
    packet.angle_attack = angle_attack;
    packet.angle_sideslip = angle_sideslip;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLOW_ANGLE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLOW_ANGLE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FLOW_ANGLE_MIN_LEN, MAVLINK_MSG_ID_FLOW_ANGLE_LEN, MAVLINK_MSG_ID_FLOW_ANGLE_CRC);
}

/**
 * @brief Encode a flow_angle struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param flow_angle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flow_angle_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_flow_angle_t* flow_angle)
{
    return mavlink_msg_flow_angle_pack(system_id, component_id, msg, flow_angle->timestamp, flow_angle->angle_attack, flow_angle->angle_sideslip);
}

/**
 * @brief Encode a flow_angle struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param flow_angle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flow_angle_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_flow_angle_t* flow_angle)
{
    return mavlink_msg_flow_angle_pack_chan(system_id, component_id, chan, msg, flow_angle->timestamp, flow_angle->angle_attack, flow_angle->angle_sideslip);
}

/**
 * @brief Send a flow_angle message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 * @param angle_attack [degE7]  angle of attack
 * @param angle_sideslip [degE7]  angle of sideslip
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_flow_angle_send(mavlink_channel_t chan, uint64_t timestamp, int32_t angle_attack, int32_t angle_sideslip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLOW_ANGLE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_int32_t(buf, 8, angle_attack);
    _mav_put_int32_t(buf, 12, angle_sideslip);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLOW_ANGLE, buf, MAVLINK_MSG_ID_FLOW_ANGLE_MIN_LEN, MAVLINK_MSG_ID_FLOW_ANGLE_LEN, MAVLINK_MSG_ID_FLOW_ANGLE_CRC);
#else
    mavlink_flow_angle_t packet;
    packet.timestamp = timestamp;
    packet.angle_attack = angle_attack;
    packet.angle_sideslip = angle_sideslip;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLOW_ANGLE, (const char *)&packet, MAVLINK_MSG_ID_FLOW_ANGLE_MIN_LEN, MAVLINK_MSG_ID_FLOW_ANGLE_LEN, MAVLINK_MSG_ID_FLOW_ANGLE_CRC);
#endif
}

/**
 * @brief Send a flow_angle message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_flow_angle_send_struct(mavlink_channel_t chan, const mavlink_flow_angle_t* flow_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_flow_angle_send(chan, flow_angle->timestamp, flow_angle->angle_attack, flow_angle->angle_sideslip);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLOW_ANGLE, (const char *)flow_angle, MAVLINK_MSG_ID_FLOW_ANGLE_MIN_LEN, MAVLINK_MSG_ID_FLOW_ANGLE_LEN, MAVLINK_MSG_ID_FLOW_ANGLE_CRC);
#endif
}

#if MAVLINK_MSG_ID_FLOW_ANGLE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_flow_angle_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, int32_t angle_attack, int32_t angle_sideslip)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_int32_t(buf, 8, angle_attack);
    _mav_put_int32_t(buf, 12, angle_sideslip);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLOW_ANGLE, buf, MAVLINK_MSG_ID_FLOW_ANGLE_MIN_LEN, MAVLINK_MSG_ID_FLOW_ANGLE_LEN, MAVLINK_MSG_ID_FLOW_ANGLE_CRC);
#else
    mavlink_flow_angle_t *packet = (mavlink_flow_angle_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->angle_attack = angle_attack;
    packet->angle_sideslip = angle_sideslip;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLOW_ANGLE, (const char *)packet, MAVLINK_MSG_ID_FLOW_ANGLE_MIN_LEN, MAVLINK_MSG_ID_FLOW_ANGLE_LEN, MAVLINK_MSG_ID_FLOW_ANGLE_CRC);
#endif
}
#endif

#endif

// MESSAGE FLOW_ANGLE UNPACKING


/**
 * @brief Get field timestamp from flow_angle message
 *
 * @return [us] Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
 */
static inline uint64_t mavlink_msg_flow_angle_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field angle_attack from flow_angle message
 *
 * @return [degE7]  angle of attack
 */
static inline int32_t mavlink_msg_flow_angle_get_angle_attack(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field angle_sideslip from flow_angle message
 *
 * @return [degE7]  angle of sideslip
 */
static inline int32_t mavlink_msg_flow_angle_get_angle_sideslip(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Decode a flow_angle message into a struct
 *
 * @param msg The message to decode
 * @param flow_angle C-struct to decode the message contents into
 */
static inline void mavlink_msg_flow_angle_decode(const mavlink_message_t* msg, mavlink_flow_angle_t* flow_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    flow_angle->timestamp = mavlink_msg_flow_angle_get_timestamp(msg);
    flow_angle->angle_attack = mavlink_msg_flow_angle_get_angle_attack(msg);
    flow_angle->angle_sideslip = mavlink_msg_flow_angle_get_angle_sideslip(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FLOW_ANGLE_LEN? msg->len : MAVLINK_MSG_ID_FLOW_ANGLE_LEN;
        memset(flow_angle, 0, MAVLINK_MSG_ID_FLOW_ANGLE_LEN);
    memcpy(flow_angle, _MAV_PAYLOAD(msg), len);
#endif
}
