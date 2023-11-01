#pragma once
// MESSAGE ARM_INDICATE PACKING

#define MAVLINK_MSG_ID_ARM_INDICATE 212


typedef struct __mavlink_arm_indicate_t {
 uint64_t time_usec; /*< [us] Timestamp (micros since boot or Unix epoch)*/
 uint64_t time_utc_diff; /*< [ms]  utc - timestamp*/
 int32_t arm_requirement; /*<  arm requirement set mode*/
 uint8_t sys_id; /*<  Mavsys_id*/
 uint8_t arm_condition; /*<  arm circumstance*/
} mavlink_arm_indicate_t;

#define MAVLINK_MSG_ID_ARM_INDICATE_LEN 22
#define MAVLINK_MSG_ID_ARM_INDICATE_MIN_LEN 22
#define MAVLINK_MSG_ID_212_LEN 22
#define MAVLINK_MSG_ID_212_MIN_LEN 22

#define MAVLINK_MSG_ID_ARM_INDICATE_CRC 122
#define MAVLINK_MSG_ID_212_CRC 122



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ARM_INDICATE { \
    212, \
    "ARM_INDICATE", \
    5, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_arm_indicate_t, time_usec) }, \
         { "time_utc_diff", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_arm_indicate_t, time_utc_diff) }, \
         { "sys_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_arm_indicate_t, sys_id) }, \
         { "arm_requirement", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_arm_indicate_t, arm_requirement) }, \
         { "arm_condition", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_arm_indicate_t, arm_condition) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ARM_INDICATE { \
    "ARM_INDICATE", \
    5, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_arm_indicate_t, time_usec) }, \
         { "time_utc_diff", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_arm_indicate_t, time_utc_diff) }, \
         { "sys_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_arm_indicate_t, sys_id) }, \
         { "arm_requirement", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_arm_indicate_t, arm_requirement) }, \
         { "arm_condition", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_arm_indicate_t, arm_condition) }, \
         } \
}
#endif

/**
 * @brief Pack a arm_indicate message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (micros since boot or Unix epoch)
 * @param time_utc_diff [ms]  utc - timestamp
 * @param sys_id  Mavsys_id
 * @param arm_requirement  arm requirement set mode
 * @param arm_condition  arm circumstance
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_arm_indicate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint64_t time_utc_diff, uint8_t sys_id, int32_t arm_requirement, uint8_t arm_condition)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARM_INDICATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_utc_diff);
    _mav_put_int32_t(buf, 16, arm_requirement);
    _mav_put_uint8_t(buf, 20, sys_id);
    _mav_put_uint8_t(buf, 21, arm_condition);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ARM_INDICATE_LEN);
#else
    mavlink_arm_indicate_t packet;
    packet.time_usec = time_usec;
    packet.time_utc_diff = time_utc_diff;
    packet.arm_requirement = arm_requirement;
    packet.sys_id = sys_id;
    packet.arm_condition = arm_condition;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ARM_INDICATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ARM_INDICATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ARM_INDICATE_MIN_LEN, MAVLINK_MSG_ID_ARM_INDICATE_LEN, MAVLINK_MSG_ID_ARM_INDICATE_CRC);
}

/**
 * @brief Pack a arm_indicate message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (micros since boot or Unix epoch)
 * @param time_utc_diff [ms]  utc - timestamp
 * @param sys_id  Mavsys_id
 * @param arm_requirement  arm requirement set mode
 * @param arm_condition  arm circumstance
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_arm_indicate_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint64_t time_utc_diff,uint8_t sys_id,int32_t arm_requirement,uint8_t arm_condition)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARM_INDICATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_utc_diff);
    _mav_put_int32_t(buf, 16, arm_requirement);
    _mav_put_uint8_t(buf, 20, sys_id);
    _mav_put_uint8_t(buf, 21, arm_condition);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ARM_INDICATE_LEN);
#else
    mavlink_arm_indicate_t packet;
    packet.time_usec = time_usec;
    packet.time_utc_diff = time_utc_diff;
    packet.arm_requirement = arm_requirement;
    packet.sys_id = sys_id;
    packet.arm_condition = arm_condition;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ARM_INDICATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ARM_INDICATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ARM_INDICATE_MIN_LEN, MAVLINK_MSG_ID_ARM_INDICATE_LEN, MAVLINK_MSG_ID_ARM_INDICATE_CRC);
}

/**
 * @brief Encode a arm_indicate struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param arm_indicate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_arm_indicate_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_arm_indicate_t* arm_indicate)
{
    return mavlink_msg_arm_indicate_pack(system_id, component_id, msg, arm_indicate->time_usec, arm_indicate->time_utc_diff, arm_indicate->sys_id, arm_indicate->arm_requirement, arm_indicate->arm_condition);
}

/**
 * @brief Encode a arm_indicate struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param arm_indicate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_arm_indicate_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_arm_indicate_t* arm_indicate)
{
    return mavlink_msg_arm_indicate_pack_chan(system_id, component_id, chan, msg, arm_indicate->time_usec, arm_indicate->time_utc_diff, arm_indicate->sys_id, arm_indicate->arm_requirement, arm_indicate->arm_condition);
}

/**
 * @brief Send a arm_indicate message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (micros since boot or Unix epoch)
 * @param time_utc_diff [ms]  utc - timestamp
 * @param sys_id  Mavsys_id
 * @param arm_requirement  arm requirement set mode
 * @param arm_condition  arm circumstance
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_arm_indicate_send(mavlink_channel_t chan, uint64_t time_usec, uint64_t time_utc_diff, uint8_t sys_id, int32_t arm_requirement, uint8_t arm_condition)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARM_INDICATE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_utc_diff);
    _mav_put_int32_t(buf, 16, arm_requirement);
    _mav_put_uint8_t(buf, 20, sys_id);
    _mav_put_uint8_t(buf, 21, arm_condition);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARM_INDICATE, buf, MAVLINK_MSG_ID_ARM_INDICATE_MIN_LEN, MAVLINK_MSG_ID_ARM_INDICATE_LEN, MAVLINK_MSG_ID_ARM_INDICATE_CRC);
#else
    mavlink_arm_indicate_t packet;
    packet.time_usec = time_usec;
    packet.time_utc_diff = time_utc_diff;
    packet.arm_requirement = arm_requirement;
    packet.sys_id = sys_id;
    packet.arm_condition = arm_condition;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARM_INDICATE, (const char *)&packet, MAVLINK_MSG_ID_ARM_INDICATE_MIN_LEN, MAVLINK_MSG_ID_ARM_INDICATE_LEN, MAVLINK_MSG_ID_ARM_INDICATE_CRC);
#endif
}

/**
 * @brief Send a arm_indicate message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_arm_indicate_send_struct(mavlink_channel_t chan, const mavlink_arm_indicate_t* arm_indicate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_arm_indicate_send(chan, arm_indicate->time_usec, arm_indicate->time_utc_diff, arm_indicate->sys_id, arm_indicate->arm_requirement, arm_indicate->arm_condition);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARM_INDICATE, (const char *)arm_indicate, MAVLINK_MSG_ID_ARM_INDICATE_MIN_LEN, MAVLINK_MSG_ID_ARM_INDICATE_LEN, MAVLINK_MSG_ID_ARM_INDICATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_ARM_INDICATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_arm_indicate_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint64_t time_utc_diff, uint8_t sys_id, int32_t arm_requirement, uint8_t arm_condition)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_utc_diff);
    _mav_put_int32_t(buf, 16, arm_requirement);
    _mav_put_uint8_t(buf, 20, sys_id);
    _mav_put_uint8_t(buf, 21, arm_condition);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARM_INDICATE, buf, MAVLINK_MSG_ID_ARM_INDICATE_MIN_LEN, MAVLINK_MSG_ID_ARM_INDICATE_LEN, MAVLINK_MSG_ID_ARM_INDICATE_CRC);
#else
    mavlink_arm_indicate_t *packet = (mavlink_arm_indicate_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->time_utc_diff = time_utc_diff;
    packet->arm_requirement = arm_requirement;
    packet->sys_id = sys_id;
    packet->arm_condition = arm_condition;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARM_INDICATE, (const char *)packet, MAVLINK_MSG_ID_ARM_INDICATE_MIN_LEN, MAVLINK_MSG_ID_ARM_INDICATE_LEN, MAVLINK_MSG_ID_ARM_INDICATE_CRC);
#endif
}
#endif

#endif

// MESSAGE ARM_INDICATE UNPACKING


/**
 * @brief Get field time_usec from arm_indicate message
 *
 * @return [us] Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_arm_indicate_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field time_utc_diff from arm_indicate message
 *
 * @return [ms]  utc - timestamp
 */
static inline uint64_t mavlink_msg_arm_indicate_get_time_utc_diff(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field sys_id from arm_indicate message
 *
 * @return  Mavsys_id
 */
static inline uint8_t mavlink_msg_arm_indicate_get_sys_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field arm_requirement from arm_indicate message
 *
 * @return  arm requirement set mode
 */
static inline int32_t mavlink_msg_arm_indicate_get_arm_requirement(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field arm_condition from arm_indicate message
 *
 * @return  arm circumstance
 */
static inline uint8_t mavlink_msg_arm_indicate_get_arm_condition(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Decode a arm_indicate message into a struct
 *
 * @param msg The message to decode
 * @param arm_indicate C-struct to decode the message contents into
 */
static inline void mavlink_msg_arm_indicate_decode(const mavlink_message_t* msg, mavlink_arm_indicate_t* arm_indicate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    arm_indicate->time_usec = mavlink_msg_arm_indicate_get_time_usec(msg);
    arm_indicate->time_utc_diff = mavlink_msg_arm_indicate_get_time_utc_diff(msg);
    arm_indicate->arm_requirement = mavlink_msg_arm_indicate_get_arm_requirement(msg);
    arm_indicate->sys_id = mavlink_msg_arm_indicate_get_sys_id(msg);
    arm_indicate->arm_condition = mavlink_msg_arm_indicate_get_arm_condition(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ARM_INDICATE_LEN? msg->len : MAVLINK_MSG_ID_ARM_INDICATE_LEN;
        memset(arm_indicate, 0, MAVLINK_MSG_ID_ARM_INDICATE_LEN);
    memcpy(arm_indicate, _MAV_PAYLOAD(msg), len);
#endif
}
