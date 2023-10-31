#pragma once
// MESSAGE EXTERNAL_CONTROL PACKING

#define MAVLINK_MSG_ID_EXTERNAL_CONTROL 200


typedef struct __mavlink_external_control_t {
 uint64_t demand_time_utc_msec; /*< [ms] demand time when target vehicle finished the control order, (microseconds, UTC, from GPS module)*/
 uint32_t param[4]; /*<  Could be a wp or att_sp*/
 float vertical_LOS; /*<  vertical LOS angle calculated by NX*/
 float azimuth_LOS; /*<  azimuth  LOS angle calculated by NX*/
 uint8_t sys_id; /*<  The vehicle need to operate this order*/
 uint8_t order_seq; /*<  Sequence of current order*/
 uint8_t param_type; /*<  52, speed, 55 waypoint, 66 loiter*/
 uint8_t control_mode; /*<  10 swarm mode 11 tmg mode*/
 uint8_t tmg_input_type; /*<  terminal guiudance input imformation type, 0 GPS position, 1 LOS angle*/
} mavlink_external_control_t;

#define MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN 37
#define MAVLINK_MSG_ID_EXTERNAL_CONTROL_MIN_LEN 37
#define MAVLINK_MSG_ID_200_LEN 37
#define MAVLINK_MSG_ID_200_MIN_LEN 37

#define MAVLINK_MSG_ID_EXTERNAL_CONTROL_CRC 67
#define MAVLINK_MSG_ID_200_CRC 67

#define MAVLINK_MSG_EXTERNAL_CONTROL_FIELD_PARAM_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_EXTERNAL_CONTROL { \
    200, \
    "EXTERNAL_CONTROL", \
    9, \
    {  { "demand_time_utc_msec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_external_control_t, demand_time_utc_msec) }, \
         { "param", NULL, MAVLINK_TYPE_UINT32_T, 4, 8, offsetof(mavlink_external_control_t, param) }, \
         { "vertical_LOS", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_external_control_t, vertical_LOS) }, \
         { "azimuth_LOS", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_external_control_t, azimuth_LOS) }, \
         { "sys_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_external_control_t, sys_id) }, \
         { "order_seq", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_external_control_t, order_seq) }, \
         { "param_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_external_control_t, param_type) }, \
         { "control_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_external_control_t, control_mode) }, \
         { "tmg_input_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_external_control_t, tmg_input_type) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_EXTERNAL_CONTROL { \
    "EXTERNAL_CONTROL", \
    9, \
    {  { "demand_time_utc_msec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_external_control_t, demand_time_utc_msec) }, \
         { "param", NULL, MAVLINK_TYPE_UINT32_T, 4, 8, offsetof(mavlink_external_control_t, param) }, \
         { "vertical_LOS", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_external_control_t, vertical_LOS) }, \
         { "azimuth_LOS", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_external_control_t, azimuth_LOS) }, \
         { "sys_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_external_control_t, sys_id) }, \
         { "order_seq", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_external_control_t, order_seq) }, \
         { "param_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_external_control_t, param_type) }, \
         { "control_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_external_control_t, control_mode) }, \
         { "tmg_input_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_external_control_t, tmg_input_type) }, \
         } \
}
#endif

/**
 * @brief Pack a external_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param demand_time_utc_msec [ms] demand time when target vehicle finished the control order, (microseconds, UTC, from GPS module)
 * @param param  Could be a wp or att_sp
 * @param vertical_LOS  vertical LOS angle calculated by NX
 * @param azimuth_LOS  azimuth  LOS angle calculated by NX
 * @param sys_id  The vehicle need to operate this order
 * @param order_seq  Sequence of current order
 * @param param_type  52, speed, 55 waypoint, 66 loiter
 * @param control_mode  10 swarm mode 11 tmg mode
 * @param tmg_input_type  terminal guiudance input imformation type, 0 GPS position, 1 LOS angle
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_external_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t demand_time_utc_msec, const uint32_t *param, float vertical_LOS, float azimuth_LOS, uint8_t sys_id, uint8_t order_seq, uint8_t param_type, uint8_t control_mode, uint8_t tmg_input_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN];
    _mav_put_uint64_t(buf, 0, demand_time_utc_msec);
    _mav_put_float(buf, 24, vertical_LOS);
    _mav_put_float(buf, 28, azimuth_LOS);
    _mav_put_uint8_t(buf, 32, sys_id);
    _mav_put_uint8_t(buf, 33, order_seq);
    _mav_put_uint8_t(buf, 34, param_type);
    _mav_put_uint8_t(buf, 35, control_mode);
    _mav_put_uint8_t(buf, 36, tmg_input_type);
    _mav_put_uint32_t_array(buf, 8, param, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN);
#else
    mavlink_external_control_t packet;
    packet.demand_time_utc_msec = demand_time_utc_msec;
    packet.vertical_LOS = vertical_LOS;
    packet.azimuth_LOS = azimuth_LOS;
    packet.sys_id = sys_id;
    packet.order_seq = order_seq;
    packet.param_type = param_type;
    packet.control_mode = control_mode;
    packet.tmg_input_type = tmg_input_type;
    mav_array_memcpy(packet.param, param, sizeof(uint32_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EXTERNAL_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EXTERNAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN, MAVLINK_MSG_ID_EXTERNAL_CONTROL_CRC);
}

/**
 * @brief Pack a external_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param demand_time_utc_msec [ms] demand time when target vehicle finished the control order, (microseconds, UTC, from GPS module)
 * @param param  Could be a wp or att_sp
 * @param vertical_LOS  vertical LOS angle calculated by NX
 * @param azimuth_LOS  azimuth  LOS angle calculated by NX
 * @param sys_id  The vehicle need to operate this order
 * @param order_seq  Sequence of current order
 * @param param_type  52, speed, 55 waypoint, 66 loiter
 * @param control_mode  10 swarm mode 11 tmg mode
 * @param tmg_input_type  terminal guiudance input imformation type, 0 GPS position, 1 LOS angle
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_external_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t demand_time_utc_msec,const uint32_t *param,float vertical_LOS,float azimuth_LOS,uint8_t sys_id,uint8_t order_seq,uint8_t param_type,uint8_t control_mode,uint8_t tmg_input_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN];
    _mav_put_uint64_t(buf, 0, demand_time_utc_msec);
    _mav_put_float(buf, 24, vertical_LOS);
    _mav_put_float(buf, 28, azimuth_LOS);
    _mav_put_uint8_t(buf, 32, sys_id);
    _mav_put_uint8_t(buf, 33, order_seq);
    _mav_put_uint8_t(buf, 34, param_type);
    _mav_put_uint8_t(buf, 35, control_mode);
    _mav_put_uint8_t(buf, 36, tmg_input_type);
    _mav_put_uint32_t_array(buf, 8, param, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN);
#else
    mavlink_external_control_t packet;
    packet.demand_time_utc_msec = demand_time_utc_msec;
    packet.vertical_LOS = vertical_LOS;
    packet.azimuth_LOS = azimuth_LOS;
    packet.sys_id = sys_id;
    packet.order_seq = order_seq;
    packet.param_type = param_type;
    packet.control_mode = control_mode;
    packet.tmg_input_type = tmg_input_type;
    mav_array_memcpy(packet.param, param, sizeof(uint32_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EXTERNAL_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EXTERNAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN, MAVLINK_MSG_ID_EXTERNAL_CONTROL_CRC);
}

/**
 * @brief Encode a external_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param external_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_external_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_external_control_t* external_control)
{
    return mavlink_msg_external_control_pack(system_id, component_id, msg, external_control->demand_time_utc_msec, external_control->param, external_control->vertical_LOS, external_control->azimuth_LOS, external_control->sys_id, external_control->order_seq, external_control->param_type, external_control->control_mode, external_control->tmg_input_type);
}

/**
 * @brief Encode a external_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param external_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_external_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_external_control_t* external_control)
{
    return mavlink_msg_external_control_pack_chan(system_id, component_id, chan, msg, external_control->demand_time_utc_msec, external_control->param, external_control->vertical_LOS, external_control->azimuth_LOS, external_control->sys_id, external_control->order_seq, external_control->param_type, external_control->control_mode, external_control->tmg_input_type);
}

/**
 * @brief Send a external_control message
 * @param chan MAVLink channel to send the message
 *
 * @param demand_time_utc_msec [ms] demand time when target vehicle finished the control order, (microseconds, UTC, from GPS module)
 * @param param  Could be a wp or att_sp
 * @param vertical_LOS  vertical LOS angle calculated by NX
 * @param azimuth_LOS  azimuth  LOS angle calculated by NX
 * @param sys_id  The vehicle need to operate this order
 * @param order_seq  Sequence of current order
 * @param param_type  52, speed, 55 waypoint, 66 loiter
 * @param control_mode  10 swarm mode 11 tmg mode
 * @param tmg_input_type  terminal guiudance input imformation type, 0 GPS position, 1 LOS angle
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_external_control_send(mavlink_channel_t chan, uint64_t demand_time_utc_msec, const uint32_t *param, float vertical_LOS, float azimuth_LOS, uint8_t sys_id, uint8_t order_seq, uint8_t param_type, uint8_t control_mode, uint8_t tmg_input_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN];
    _mav_put_uint64_t(buf, 0, demand_time_utc_msec);
    _mav_put_float(buf, 24, vertical_LOS);
    _mav_put_float(buf, 28, azimuth_LOS);
    _mav_put_uint8_t(buf, 32, sys_id);
    _mav_put_uint8_t(buf, 33, order_seq);
    _mav_put_uint8_t(buf, 34, param_type);
    _mav_put_uint8_t(buf, 35, control_mode);
    _mav_put_uint8_t(buf, 36, tmg_input_type);
    _mav_put_uint32_t_array(buf, 8, param, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXTERNAL_CONTROL, buf, MAVLINK_MSG_ID_EXTERNAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN, MAVLINK_MSG_ID_EXTERNAL_CONTROL_CRC);
#else
    mavlink_external_control_t packet;
    packet.demand_time_utc_msec = demand_time_utc_msec;
    packet.vertical_LOS = vertical_LOS;
    packet.azimuth_LOS = azimuth_LOS;
    packet.sys_id = sys_id;
    packet.order_seq = order_seq;
    packet.param_type = param_type;
    packet.control_mode = control_mode;
    packet.tmg_input_type = tmg_input_type;
    mav_array_memcpy(packet.param, param, sizeof(uint32_t)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXTERNAL_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_EXTERNAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN, MAVLINK_MSG_ID_EXTERNAL_CONTROL_CRC);
#endif
}

/**
 * @brief Send a external_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_external_control_send_struct(mavlink_channel_t chan, const mavlink_external_control_t* external_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_external_control_send(chan, external_control->demand_time_utc_msec, external_control->param, external_control->vertical_LOS, external_control->azimuth_LOS, external_control->sys_id, external_control->order_seq, external_control->param_type, external_control->control_mode, external_control->tmg_input_type);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXTERNAL_CONTROL, (const char *)external_control, MAVLINK_MSG_ID_EXTERNAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN, MAVLINK_MSG_ID_EXTERNAL_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_external_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t demand_time_utc_msec, const uint32_t *param, float vertical_LOS, float azimuth_LOS, uint8_t sys_id, uint8_t order_seq, uint8_t param_type, uint8_t control_mode, uint8_t tmg_input_type)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, demand_time_utc_msec);
    _mav_put_float(buf, 24, vertical_LOS);
    _mav_put_float(buf, 28, azimuth_LOS);
    _mav_put_uint8_t(buf, 32, sys_id);
    _mav_put_uint8_t(buf, 33, order_seq);
    _mav_put_uint8_t(buf, 34, param_type);
    _mav_put_uint8_t(buf, 35, control_mode);
    _mav_put_uint8_t(buf, 36, tmg_input_type);
    _mav_put_uint32_t_array(buf, 8, param, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXTERNAL_CONTROL, buf, MAVLINK_MSG_ID_EXTERNAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN, MAVLINK_MSG_ID_EXTERNAL_CONTROL_CRC);
#else
    mavlink_external_control_t *packet = (mavlink_external_control_t *)msgbuf;
    packet->demand_time_utc_msec = demand_time_utc_msec;
    packet->vertical_LOS = vertical_LOS;
    packet->azimuth_LOS = azimuth_LOS;
    packet->sys_id = sys_id;
    packet->order_seq = order_seq;
    packet->param_type = param_type;
    packet->control_mode = control_mode;
    packet->tmg_input_type = tmg_input_type;
    mav_array_memcpy(packet->param, param, sizeof(uint32_t)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXTERNAL_CONTROL, (const char *)packet, MAVLINK_MSG_ID_EXTERNAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN, MAVLINK_MSG_ID_EXTERNAL_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE EXTERNAL_CONTROL UNPACKING


/**
 * @brief Get field demand_time_utc_msec from external_control message
 *
 * @return [ms] demand time when target vehicle finished the control order, (microseconds, UTC, from GPS module)
 */
static inline uint64_t mavlink_msg_external_control_get_demand_time_utc_msec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field param from external_control message
 *
 * @return  Could be a wp or att_sp
 */
static inline uint16_t mavlink_msg_external_control_get_param(const mavlink_message_t* msg, uint32_t *param)
{
    return _MAV_RETURN_uint32_t_array(msg, param, 4,  8);
}

/**
 * @brief Get field vertical_LOS from external_control message
 *
 * @return  vertical LOS angle calculated by NX
 */
static inline float mavlink_msg_external_control_get_vertical_LOS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field azimuth_LOS from external_control message
 *
 * @return  azimuth  LOS angle calculated by NX
 */
static inline float mavlink_msg_external_control_get_azimuth_LOS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field sys_id from external_control message
 *
 * @return  The vehicle need to operate this order
 */
static inline uint8_t mavlink_msg_external_control_get_sys_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field order_seq from external_control message
 *
 * @return  Sequence of current order
 */
static inline uint8_t mavlink_msg_external_control_get_order_seq(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field param_type from external_control message
 *
 * @return  52, speed, 55 waypoint, 66 loiter
 */
static inline uint8_t mavlink_msg_external_control_get_param_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  34);
}

/**
 * @brief Get field control_mode from external_control message
 *
 * @return  10 swarm mode 11 tmg mode
 */
static inline uint8_t mavlink_msg_external_control_get_control_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  35);
}

/**
 * @brief Get field tmg_input_type from external_control message
 *
 * @return  terminal guiudance input imformation type, 0 GPS position, 1 LOS angle
 */
static inline uint8_t mavlink_msg_external_control_get_tmg_input_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Decode a external_control message into a struct
 *
 * @param msg The message to decode
 * @param external_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_external_control_decode(const mavlink_message_t* msg, mavlink_external_control_t* external_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    external_control->demand_time_utc_msec = mavlink_msg_external_control_get_demand_time_utc_msec(msg);
    mavlink_msg_external_control_get_param(msg, external_control->param);
    external_control->vertical_LOS = mavlink_msg_external_control_get_vertical_LOS(msg);
    external_control->azimuth_LOS = mavlink_msg_external_control_get_azimuth_LOS(msg);
    external_control->sys_id = mavlink_msg_external_control_get_sys_id(msg);
    external_control->order_seq = mavlink_msg_external_control_get_order_seq(msg);
    external_control->param_type = mavlink_msg_external_control_get_param_type(msg);
    external_control->control_mode = mavlink_msg_external_control_get_control_mode(msg);
    external_control->tmg_input_type = mavlink_msg_external_control_get_tmg_input_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN;
        memset(external_control, 0, MAVLINK_MSG_ID_EXTERNAL_CONTROL_LEN);
    memcpy(external_control, _MAV_PAYLOAD(msg), len);
#endif
}
