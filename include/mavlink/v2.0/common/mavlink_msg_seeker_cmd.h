#pragma once
// MESSAGE SEEKER_CMD PACKING

#define MAVLINK_MSG_ID_SEEKER_CMD 208


typedef struct __mavlink_seeker_cmd_t {
 uint32_t seq; /*<  sequence number*/
 uint16_t x; /*<  coordinate x of track target (pixel)*/
 uint16_t y; /*<  coordinate y of track target (pixel)*/
 int16_t ang_dot_x_body; /*< [degree] -300 degree to +300 degree*/
 int16_t ang_dot_y_body; /*< [degree] -300 degree to +300 degree*/
 int16_t ang_dot_z_body; /*< [degree] -300 degree to +300 degree*/
 uint8_t cmd_type; /*<  control command information*/
 uint8_t fram_seq; /*<  fram seq of compressed img corresponding to target tracking cmd(1-12)*/
 int8_t zoom_rate; /*<  default 0, 0 to +100 is enlarge, 0 to -100 is suoxiao*/
} mavlink_seeker_cmd_t;

#define MAVLINK_MSG_ID_SEEKER_CMD_LEN 17
#define MAVLINK_MSG_ID_SEEKER_CMD_MIN_LEN 17
#define MAVLINK_MSG_ID_208_LEN 17
#define MAVLINK_MSG_ID_208_MIN_LEN 17

#define MAVLINK_MSG_ID_SEEKER_CMD_CRC 228
#define MAVLINK_MSG_ID_208_CRC 228



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SEEKER_CMD { \
    208, \
    "SEEKER_CMD", \
    9, \
    {  { "seq", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_seeker_cmd_t, seq) }, \
         { "cmd_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_seeker_cmd_t, cmd_type) }, \
         { "x", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_seeker_cmd_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_seeker_cmd_t, y) }, \
         { "fram_seq", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_seeker_cmd_t, fram_seq) }, \
         { "zoom_rate", NULL, MAVLINK_TYPE_INT8_T, 0, 16, offsetof(mavlink_seeker_cmd_t, zoom_rate) }, \
         { "ang_dot_x_body", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_seeker_cmd_t, ang_dot_x_body) }, \
         { "ang_dot_y_body", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_seeker_cmd_t, ang_dot_y_body) }, \
         { "ang_dot_z_body", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_seeker_cmd_t, ang_dot_z_body) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SEEKER_CMD { \
    "SEEKER_CMD", \
    9, \
    {  { "seq", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_seeker_cmd_t, seq) }, \
         { "cmd_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_seeker_cmd_t, cmd_type) }, \
         { "x", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_seeker_cmd_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_seeker_cmd_t, y) }, \
         { "fram_seq", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_seeker_cmd_t, fram_seq) }, \
         { "zoom_rate", NULL, MAVLINK_TYPE_INT8_T, 0, 16, offsetof(mavlink_seeker_cmd_t, zoom_rate) }, \
         { "ang_dot_x_body", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_seeker_cmd_t, ang_dot_x_body) }, \
         { "ang_dot_y_body", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_seeker_cmd_t, ang_dot_y_body) }, \
         { "ang_dot_z_body", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_seeker_cmd_t, ang_dot_z_body) }, \
         } \
}
#endif

/**
 * @brief Pack a seeker_cmd message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param seq  sequence number
 * @param cmd_type  control command information
 * @param x  coordinate x of track target (pixel)
 * @param y  coordinate y of track target (pixel)
 * @param fram_seq  fram seq of compressed img corresponding to target tracking cmd(1-12)
 * @param zoom_rate  default 0, 0 to +100 is enlarge, 0 to -100 is suoxiao
 * @param ang_dot_x_body [degree] -300 degree to +300 degree
 * @param ang_dot_y_body [degree] -300 degree to +300 degree
 * @param ang_dot_z_body [degree] -300 degree to +300 degree
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_seeker_cmd_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t seq, uint8_t cmd_type, uint16_t x, uint16_t y, uint8_t fram_seq, int8_t zoom_rate, int16_t ang_dot_x_body, int16_t ang_dot_y_body, int16_t ang_dot_z_body)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEEKER_CMD_LEN];
    _mav_put_uint32_t(buf, 0, seq);
    _mav_put_uint16_t(buf, 4, x);
    _mav_put_uint16_t(buf, 6, y);
    _mav_put_int16_t(buf, 8, ang_dot_x_body);
    _mav_put_int16_t(buf, 10, ang_dot_y_body);
    _mav_put_int16_t(buf, 12, ang_dot_z_body);
    _mav_put_uint8_t(buf, 14, cmd_type);
    _mav_put_uint8_t(buf, 15, fram_seq);
    _mav_put_int8_t(buf, 16, zoom_rate);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SEEKER_CMD_LEN);
#else
    mavlink_seeker_cmd_t packet;
    packet.seq = seq;
    packet.x = x;
    packet.y = y;
    packet.ang_dot_x_body = ang_dot_x_body;
    packet.ang_dot_y_body = ang_dot_y_body;
    packet.ang_dot_z_body = ang_dot_z_body;
    packet.cmd_type = cmd_type;
    packet.fram_seq = fram_seq;
    packet.zoom_rate = zoom_rate;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SEEKER_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SEEKER_CMD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SEEKER_CMD_MIN_LEN, MAVLINK_MSG_ID_SEEKER_CMD_LEN, MAVLINK_MSG_ID_SEEKER_CMD_CRC);
}

/**
 * @brief Pack a seeker_cmd message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param seq  sequence number
 * @param cmd_type  control command information
 * @param x  coordinate x of track target (pixel)
 * @param y  coordinate y of track target (pixel)
 * @param fram_seq  fram seq of compressed img corresponding to target tracking cmd(1-12)
 * @param zoom_rate  default 0, 0 to +100 is enlarge, 0 to -100 is suoxiao
 * @param ang_dot_x_body [degree] -300 degree to +300 degree
 * @param ang_dot_y_body [degree] -300 degree to +300 degree
 * @param ang_dot_z_body [degree] -300 degree to +300 degree
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_seeker_cmd_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t seq,uint8_t cmd_type,uint16_t x,uint16_t y,uint8_t fram_seq,int8_t zoom_rate,int16_t ang_dot_x_body,int16_t ang_dot_y_body,int16_t ang_dot_z_body)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEEKER_CMD_LEN];
    _mav_put_uint32_t(buf, 0, seq);
    _mav_put_uint16_t(buf, 4, x);
    _mav_put_uint16_t(buf, 6, y);
    _mav_put_int16_t(buf, 8, ang_dot_x_body);
    _mav_put_int16_t(buf, 10, ang_dot_y_body);
    _mav_put_int16_t(buf, 12, ang_dot_z_body);
    _mav_put_uint8_t(buf, 14, cmd_type);
    _mav_put_uint8_t(buf, 15, fram_seq);
    _mav_put_int8_t(buf, 16, zoom_rate);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SEEKER_CMD_LEN);
#else
    mavlink_seeker_cmd_t packet;
    packet.seq = seq;
    packet.x = x;
    packet.y = y;
    packet.ang_dot_x_body = ang_dot_x_body;
    packet.ang_dot_y_body = ang_dot_y_body;
    packet.ang_dot_z_body = ang_dot_z_body;
    packet.cmd_type = cmd_type;
    packet.fram_seq = fram_seq;
    packet.zoom_rate = zoom_rate;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SEEKER_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SEEKER_CMD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SEEKER_CMD_MIN_LEN, MAVLINK_MSG_ID_SEEKER_CMD_LEN, MAVLINK_MSG_ID_SEEKER_CMD_CRC);
}

/**
 * @brief Encode a seeker_cmd struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param seeker_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_seeker_cmd_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_seeker_cmd_t* seeker_cmd)
{
    return mavlink_msg_seeker_cmd_pack(system_id, component_id, msg, seeker_cmd->seq, seeker_cmd->cmd_type, seeker_cmd->x, seeker_cmd->y, seeker_cmd->fram_seq, seeker_cmd->zoom_rate, seeker_cmd->ang_dot_x_body, seeker_cmd->ang_dot_y_body, seeker_cmd->ang_dot_z_body);
}

/**
 * @brief Encode a seeker_cmd struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param seeker_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_seeker_cmd_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_seeker_cmd_t* seeker_cmd)
{
    return mavlink_msg_seeker_cmd_pack_chan(system_id, component_id, chan, msg, seeker_cmd->seq, seeker_cmd->cmd_type, seeker_cmd->x, seeker_cmd->y, seeker_cmd->fram_seq, seeker_cmd->zoom_rate, seeker_cmd->ang_dot_x_body, seeker_cmd->ang_dot_y_body, seeker_cmd->ang_dot_z_body);
}

/**
 * @brief Send a seeker_cmd message
 * @param chan MAVLink channel to send the message
 *
 * @param seq  sequence number
 * @param cmd_type  control command information
 * @param x  coordinate x of track target (pixel)
 * @param y  coordinate y of track target (pixel)
 * @param fram_seq  fram seq of compressed img corresponding to target tracking cmd(1-12)
 * @param zoom_rate  default 0, 0 to +100 is enlarge, 0 to -100 is suoxiao
 * @param ang_dot_x_body [degree] -300 degree to +300 degree
 * @param ang_dot_y_body [degree] -300 degree to +300 degree
 * @param ang_dot_z_body [degree] -300 degree to +300 degree
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_seeker_cmd_send(mavlink_channel_t chan, uint32_t seq, uint8_t cmd_type, uint16_t x, uint16_t y, uint8_t fram_seq, int8_t zoom_rate, int16_t ang_dot_x_body, int16_t ang_dot_y_body, int16_t ang_dot_z_body)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEEKER_CMD_LEN];
    _mav_put_uint32_t(buf, 0, seq);
    _mav_put_uint16_t(buf, 4, x);
    _mav_put_uint16_t(buf, 6, y);
    _mav_put_int16_t(buf, 8, ang_dot_x_body);
    _mav_put_int16_t(buf, 10, ang_dot_y_body);
    _mav_put_int16_t(buf, 12, ang_dot_z_body);
    _mav_put_uint8_t(buf, 14, cmd_type);
    _mav_put_uint8_t(buf, 15, fram_seq);
    _mav_put_int8_t(buf, 16, zoom_rate);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEEKER_CMD, buf, MAVLINK_MSG_ID_SEEKER_CMD_MIN_LEN, MAVLINK_MSG_ID_SEEKER_CMD_LEN, MAVLINK_MSG_ID_SEEKER_CMD_CRC);
#else
    mavlink_seeker_cmd_t packet;
    packet.seq = seq;
    packet.x = x;
    packet.y = y;
    packet.ang_dot_x_body = ang_dot_x_body;
    packet.ang_dot_y_body = ang_dot_y_body;
    packet.ang_dot_z_body = ang_dot_z_body;
    packet.cmd_type = cmd_type;
    packet.fram_seq = fram_seq;
    packet.zoom_rate = zoom_rate;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEEKER_CMD, (const char *)&packet, MAVLINK_MSG_ID_SEEKER_CMD_MIN_LEN, MAVLINK_MSG_ID_SEEKER_CMD_LEN, MAVLINK_MSG_ID_SEEKER_CMD_CRC);
#endif
}

/**
 * @brief Send a seeker_cmd message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_seeker_cmd_send_struct(mavlink_channel_t chan, const mavlink_seeker_cmd_t* seeker_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_seeker_cmd_send(chan, seeker_cmd->seq, seeker_cmd->cmd_type, seeker_cmd->x, seeker_cmd->y, seeker_cmd->fram_seq, seeker_cmd->zoom_rate, seeker_cmd->ang_dot_x_body, seeker_cmd->ang_dot_y_body, seeker_cmd->ang_dot_z_body);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEEKER_CMD, (const char *)seeker_cmd, MAVLINK_MSG_ID_SEEKER_CMD_MIN_LEN, MAVLINK_MSG_ID_SEEKER_CMD_LEN, MAVLINK_MSG_ID_SEEKER_CMD_CRC);
#endif
}

#if MAVLINK_MSG_ID_SEEKER_CMD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_seeker_cmd_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t seq, uint8_t cmd_type, uint16_t x, uint16_t y, uint8_t fram_seq, int8_t zoom_rate, int16_t ang_dot_x_body, int16_t ang_dot_y_body, int16_t ang_dot_z_body)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, seq);
    _mav_put_uint16_t(buf, 4, x);
    _mav_put_uint16_t(buf, 6, y);
    _mav_put_int16_t(buf, 8, ang_dot_x_body);
    _mav_put_int16_t(buf, 10, ang_dot_y_body);
    _mav_put_int16_t(buf, 12, ang_dot_z_body);
    _mav_put_uint8_t(buf, 14, cmd_type);
    _mav_put_uint8_t(buf, 15, fram_seq);
    _mav_put_int8_t(buf, 16, zoom_rate);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEEKER_CMD, buf, MAVLINK_MSG_ID_SEEKER_CMD_MIN_LEN, MAVLINK_MSG_ID_SEEKER_CMD_LEN, MAVLINK_MSG_ID_SEEKER_CMD_CRC);
#else
    mavlink_seeker_cmd_t *packet = (mavlink_seeker_cmd_t *)msgbuf;
    packet->seq = seq;
    packet->x = x;
    packet->y = y;
    packet->ang_dot_x_body = ang_dot_x_body;
    packet->ang_dot_y_body = ang_dot_y_body;
    packet->ang_dot_z_body = ang_dot_z_body;
    packet->cmd_type = cmd_type;
    packet->fram_seq = fram_seq;
    packet->zoom_rate = zoom_rate;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEEKER_CMD, (const char *)packet, MAVLINK_MSG_ID_SEEKER_CMD_MIN_LEN, MAVLINK_MSG_ID_SEEKER_CMD_LEN, MAVLINK_MSG_ID_SEEKER_CMD_CRC);
#endif
}
#endif

#endif

// MESSAGE SEEKER_CMD UNPACKING


/**
 * @brief Get field seq from seeker_cmd message
 *
 * @return  sequence number
 */
static inline uint32_t mavlink_msg_seeker_cmd_get_seq(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field cmd_type from seeker_cmd message
 *
 * @return  control command information
 */
static inline uint8_t mavlink_msg_seeker_cmd_get_cmd_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field x from seeker_cmd message
 *
 * @return  coordinate x of track target (pixel)
 */
static inline uint16_t mavlink_msg_seeker_cmd_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field y from seeker_cmd message
 *
 * @return  coordinate y of track target (pixel)
 */
static inline uint16_t mavlink_msg_seeker_cmd_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field fram_seq from seeker_cmd message
 *
 * @return  fram seq of compressed img corresponding to target tracking cmd(1-12)
 */
static inline uint8_t mavlink_msg_seeker_cmd_get_fram_seq(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field zoom_rate from seeker_cmd message
 *
 * @return  default 0, 0 to +100 is enlarge, 0 to -100 is suoxiao
 */
static inline int8_t mavlink_msg_seeker_cmd_get_zoom_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  16);
}

/**
 * @brief Get field ang_dot_x_body from seeker_cmd message
 *
 * @return [degree] -300 degree to +300 degree
 */
static inline int16_t mavlink_msg_seeker_cmd_get_ang_dot_x_body(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field ang_dot_y_body from seeker_cmd message
 *
 * @return [degree] -300 degree to +300 degree
 */
static inline int16_t mavlink_msg_seeker_cmd_get_ang_dot_y_body(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field ang_dot_z_body from seeker_cmd message
 *
 * @return [degree] -300 degree to +300 degree
 */
static inline int16_t mavlink_msg_seeker_cmd_get_ang_dot_z_body(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Decode a seeker_cmd message into a struct
 *
 * @param msg The message to decode
 * @param seeker_cmd C-struct to decode the message contents into
 */
static inline void mavlink_msg_seeker_cmd_decode(const mavlink_message_t* msg, mavlink_seeker_cmd_t* seeker_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    seeker_cmd->seq = mavlink_msg_seeker_cmd_get_seq(msg);
    seeker_cmd->x = mavlink_msg_seeker_cmd_get_x(msg);
    seeker_cmd->y = mavlink_msg_seeker_cmd_get_y(msg);
    seeker_cmd->ang_dot_x_body = mavlink_msg_seeker_cmd_get_ang_dot_x_body(msg);
    seeker_cmd->ang_dot_y_body = mavlink_msg_seeker_cmd_get_ang_dot_y_body(msg);
    seeker_cmd->ang_dot_z_body = mavlink_msg_seeker_cmd_get_ang_dot_z_body(msg);
    seeker_cmd->cmd_type = mavlink_msg_seeker_cmd_get_cmd_type(msg);
    seeker_cmd->fram_seq = mavlink_msg_seeker_cmd_get_fram_seq(msg);
    seeker_cmd->zoom_rate = mavlink_msg_seeker_cmd_get_zoom_rate(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SEEKER_CMD_LEN? msg->len : MAVLINK_MSG_ID_SEEKER_CMD_LEN;
        memset(seeker_cmd, 0, MAVLINK_MSG_ID_SEEKER_CMD_LEN);
    memcpy(seeker_cmd, _MAV_PAYLOAD(msg), len);
#endif
}
