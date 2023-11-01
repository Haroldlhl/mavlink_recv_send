#pragma once
// MESSAGE TMG_INPUT PACKING

#define MAVLINK_MSG_ID_TMG_INPUT 202


typedef struct __mavlink_tmg_input_t {
 int32_t guidance_index; /*<  Guidance sequence number*/
 int32_t image_index; /*<  Image sequence number*/
 int32_t v_angle; /*<  Target vertical line of sight angle*/
 int32_t h_angle; /*<  Target horizontal line of sight angel*/
 int32_t target_dis; /*<  Distance to target*/
 int32_t target_lat; /*<  Latitude of target*/
 int32_t target_lon; /*<  Longitude to target*/
 int8_t target_index; /*<  Target sequence number*/
} mavlink_tmg_input_t;

#define MAVLINK_MSG_ID_TMG_INPUT_LEN 29
#define MAVLINK_MSG_ID_TMG_INPUT_MIN_LEN 29
#define MAVLINK_MSG_ID_202_LEN 29
#define MAVLINK_MSG_ID_202_MIN_LEN 29

#define MAVLINK_MSG_ID_TMG_INPUT_CRC 163
#define MAVLINK_MSG_ID_202_CRC 163



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TMG_INPUT { \
    202, \
    "TMG_INPUT", \
    8, \
    {  { "guidance_index", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_tmg_input_t, guidance_index) }, \
         { "image_index", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_tmg_input_t, image_index) }, \
         { "target_index", NULL, MAVLINK_TYPE_INT8_T, 0, 28, offsetof(mavlink_tmg_input_t, target_index) }, \
         { "v_angle", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_tmg_input_t, v_angle) }, \
         { "h_angle", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_tmg_input_t, h_angle) }, \
         { "target_dis", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_tmg_input_t, target_dis) }, \
         { "target_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_tmg_input_t, target_lat) }, \
         { "target_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_tmg_input_t, target_lon) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TMG_INPUT { \
    "TMG_INPUT", \
    8, \
    {  { "guidance_index", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_tmg_input_t, guidance_index) }, \
         { "image_index", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_tmg_input_t, image_index) }, \
         { "target_index", NULL, MAVLINK_TYPE_INT8_T, 0, 28, offsetof(mavlink_tmg_input_t, target_index) }, \
         { "v_angle", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_tmg_input_t, v_angle) }, \
         { "h_angle", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_tmg_input_t, h_angle) }, \
         { "target_dis", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_tmg_input_t, target_dis) }, \
         { "target_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_tmg_input_t, target_lat) }, \
         { "target_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_tmg_input_t, target_lon) }, \
         } \
}
#endif

/**
 * @brief Pack a tmg_input message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param guidance_index  Guidance sequence number
 * @param image_index  Image sequence number
 * @param target_index  Target sequence number
 * @param v_angle  Target vertical line of sight angle
 * @param h_angle  Target horizontal line of sight angel
 * @param target_dis  Distance to target
 * @param target_lat  Latitude of target
 * @param target_lon  Longitude to target
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_tmg_input_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t guidance_index, int32_t image_index, int8_t target_index, int32_t v_angle, int32_t h_angle, int32_t target_dis, int32_t target_lat, int32_t target_lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TMG_INPUT_LEN];
    _mav_put_int32_t(buf, 0, guidance_index);
    _mav_put_int32_t(buf, 4, image_index);
    _mav_put_int32_t(buf, 8, v_angle);
    _mav_put_int32_t(buf, 12, h_angle);
    _mav_put_int32_t(buf, 16, target_dis);
    _mav_put_int32_t(buf, 20, target_lat);
    _mav_put_int32_t(buf, 24, target_lon);
    _mav_put_int8_t(buf, 28, target_index);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TMG_INPUT_LEN);
#else
    mavlink_tmg_input_t packet;
    packet.guidance_index = guidance_index;
    packet.image_index = image_index;
    packet.v_angle = v_angle;
    packet.h_angle = h_angle;
    packet.target_dis = target_dis;
    packet.target_lat = target_lat;
    packet.target_lon = target_lon;
    packet.target_index = target_index;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TMG_INPUT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TMG_INPUT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TMG_INPUT_MIN_LEN, MAVLINK_MSG_ID_TMG_INPUT_LEN, MAVLINK_MSG_ID_TMG_INPUT_CRC);
}

/**
 * @brief Pack a tmg_input message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param guidance_index  Guidance sequence number
 * @param image_index  Image sequence number
 * @param target_index  Target sequence number
 * @param v_angle  Target vertical line of sight angle
 * @param h_angle  Target horizontal line of sight angel
 * @param target_dis  Distance to target
 * @param target_lat  Latitude of target
 * @param target_lon  Longitude to target
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_tmg_input_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t guidance_index,int32_t image_index,int8_t target_index,int32_t v_angle,int32_t h_angle,int32_t target_dis,int32_t target_lat,int32_t target_lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TMG_INPUT_LEN];
    _mav_put_int32_t(buf, 0, guidance_index);
    _mav_put_int32_t(buf, 4, image_index);
    _mav_put_int32_t(buf, 8, v_angle);
    _mav_put_int32_t(buf, 12, h_angle);
    _mav_put_int32_t(buf, 16, target_dis);
    _mav_put_int32_t(buf, 20, target_lat);
    _mav_put_int32_t(buf, 24, target_lon);
    _mav_put_int8_t(buf, 28, target_index);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TMG_INPUT_LEN);
#else
    mavlink_tmg_input_t packet;
    packet.guidance_index = guidance_index;
    packet.image_index = image_index;
    packet.v_angle = v_angle;
    packet.h_angle = h_angle;
    packet.target_dis = target_dis;
    packet.target_lat = target_lat;
    packet.target_lon = target_lon;
    packet.target_index = target_index;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TMG_INPUT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TMG_INPUT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TMG_INPUT_MIN_LEN, MAVLINK_MSG_ID_TMG_INPUT_LEN, MAVLINK_MSG_ID_TMG_INPUT_CRC);
}

/**
 * @brief Encode a tmg_input struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param tmg_input C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_tmg_input_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_tmg_input_t* tmg_input)
{
    return mavlink_msg_tmg_input_pack(system_id, component_id, msg, tmg_input->guidance_index, tmg_input->image_index, tmg_input->target_index, tmg_input->v_angle, tmg_input->h_angle, tmg_input->target_dis, tmg_input->target_lat, tmg_input->target_lon);
}

/**
 * @brief Encode a tmg_input struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param tmg_input C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_tmg_input_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_tmg_input_t* tmg_input)
{
    return mavlink_msg_tmg_input_pack_chan(system_id, component_id, chan, msg, tmg_input->guidance_index, tmg_input->image_index, tmg_input->target_index, tmg_input->v_angle, tmg_input->h_angle, tmg_input->target_dis, tmg_input->target_lat, tmg_input->target_lon);
}

/**
 * @brief Send a tmg_input message
 * @param chan MAVLink channel to send the message
 *
 * @param guidance_index  Guidance sequence number
 * @param image_index  Image sequence number
 * @param target_index  Target sequence number
 * @param v_angle  Target vertical line of sight angle
 * @param h_angle  Target horizontal line of sight angel
 * @param target_dis  Distance to target
 * @param target_lat  Latitude of target
 * @param target_lon  Longitude to target
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_tmg_input_send(mavlink_channel_t chan, int32_t guidance_index, int32_t image_index, int8_t target_index, int32_t v_angle, int32_t h_angle, int32_t target_dis, int32_t target_lat, int32_t target_lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TMG_INPUT_LEN];
    _mav_put_int32_t(buf, 0, guidance_index);
    _mav_put_int32_t(buf, 4, image_index);
    _mav_put_int32_t(buf, 8, v_angle);
    _mav_put_int32_t(buf, 12, h_angle);
    _mav_put_int32_t(buf, 16, target_dis);
    _mav_put_int32_t(buf, 20, target_lat);
    _mav_put_int32_t(buf, 24, target_lon);
    _mav_put_int8_t(buf, 28, target_index);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TMG_INPUT, buf, MAVLINK_MSG_ID_TMG_INPUT_MIN_LEN, MAVLINK_MSG_ID_TMG_INPUT_LEN, MAVLINK_MSG_ID_TMG_INPUT_CRC);
#else
    mavlink_tmg_input_t packet;
    packet.guidance_index = guidance_index;
    packet.image_index = image_index;
    packet.v_angle = v_angle;
    packet.h_angle = h_angle;
    packet.target_dis = target_dis;
    packet.target_lat = target_lat;
    packet.target_lon = target_lon;
    packet.target_index = target_index;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TMG_INPUT, (const char *)&packet, MAVLINK_MSG_ID_TMG_INPUT_MIN_LEN, MAVLINK_MSG_ID_TMG_INPUT_LEN, MAVLINK_MSG_ID_TMG_INPUT_CRC);
#endif
}

/**
 * @brief Send a tmg_input message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_tmg_input_send_struct(mavlink_channel_t chan, const mavlink_tmg_input_t* tmg_input)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_tmg_input_send(chan, tmg_input->guidance_index, tmg_input->image_index, tmg_input->target_index, tmg_input->v_angle, tmg_input->h_angle, tmg_input->target_dis, tmg_input->target_lat, tmg_input->target_lon);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TMG_INPUT, (const char *)tmg_input, MAVLINK_MSG_ID_TMG_INPUT_MIN_LEN, MAVLINK_MSG_ID_TMG_INPUT_LEN, MAVLINK_MSG_ID_TMG_INPUT_CRC);
#endif
}

#if MAVLINK_MSG_ID_TMG_INPUT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_tmg_input_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t guidance_index, int32_t image_index, int8_t target_index, int32_t v_angle, int32_t h_angle, int32_t target_dis, int32_t target_lat, int32_t target_lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, guidance_index);
    _mav_put_int32_t(buf, 4, image_index);
    _mav_put_int32_t(buf, 8, v_angle);
    _mav_put_int32_t(buf, 12, h_angle);
    _mav_put_int32_t(buf, 16, target_dis);
    _mav_put_int32_t(buf, 20, target_lat);
    _mav_put_int32_t(buf, 24, target_lon);
    _mav_put_int8_t(buf, 28, target_index);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TMG_INPUT, buf, MAVLINK_MSG_ID_TMG_INPUT_MIN_LEN, MAVLINK_MSG_ID_TMG_INPUT_LEN, MAVLINK_MSG_ID_TMG_INPUT_CRC);
#else
    mavlink_tmg_input_t *packet = (mavlink_tmg_input_t *)msgbuf;
    packet->guidance_index = guidance_index;
    packet->image_index = image_index;
    packet->v_angle = v_angle;
    packet->h_angle = h_angle;
    packet->target_dis = target_dis;
    packet->target_lat = target_lat;
    packet->target_lon = target_lon;
    packet->target_index = target_index;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TMG_INPUT, (const char *)packet, MAVLINK_MSG_ID_TMG_INPUT_MIN_LEN, MAVLINK_MSG_ID_TMG_INPUT_LEN, MAVLINK_MSG_ID_TMG_INPUT_CRC);
#endif
}
#endif

#endif

// MESSAGE TMG_INPUT UNPACKING


/**
 * @brief Get field guidance_index from tmg_input message
 *
 * @return  Guidance sequence number
 */
static inline int32_t mavlink_msg_tmg_input_get_guidance_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field image_index from tmg_input message
 *
 * @return  Image sequence number
 */
static inline int32_t mavlink_msg_tmg_input_get_image_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field target_index from tmg_input message
 *
 * @return  Target sequence number
 */
static inline int8_t mavlink_msg_tmg_input_get_target_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  28);
}

/**
 * @brief Get field v_angle from tmg_input message
 *
 * @return  Target vertical line of sight angle
 */
static inline int32_t mavlink_msg_tmg_input_get_v_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field h_angle from tmg_input message
 *
 * @return  Target horizontal line of sight angel
 */
static inline int32_t mavlink_msg_tmg_input_get_h_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field target_dis from tmg_input message
 *
 * @return  Distance to target
 */
static inline int32_t mavlink_msg_tmg_input_get_target_dis(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field target_lat from tmg_input message
 *
 * @return  Latitude of target
 */
static inline int32_t mavlink_msg_tmg_input_get_target_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field target_lon from tmg_input message
 *
 * @return  Longitude to target
 */
static inline int32_t mavlink_msg_tmg_input_get_target_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Decode a tmg_input message into a struct
 *
 * @param msg The message to decode
 * @param tmg_input C-struct to decode the message contents into
 */
static inline void mavlink_msg_tmg_input_decode(const mavlink_message_t* msg, mavlink_tmg_input_t* tmg_input)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    tmg_input->guidance_index = mavlink_msg_tmg_input_get_guidance_index(msg);
    tmg_input->image_index = mavlink_msg_tmg_input_get_image_index(msg);
    tmg_input->v_angle = mavlink_msg_tmg_input_get_v_angle(msg);
    tmg_input->h_angle = mavlink_msg_tmg_input_get_h_angle(msg);
    tmg_input->target_dis = mavlink_msg_tmg_input_get_target_dis(msg);
    tmg_input->target_lat = mavlink_msg_tmg_input_get_target_lat(msg);
    tmg_input->target_lon = mavlink_msg_tmg_input_get_target_lon(msg);
    tmg_input->target_index = mavlink_msg_tmg_input_get_target_index(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TMG_INPUT_LEN? msg->len : MAVLINK_MSG_ID_TMG_INPUT_LEN;
        memset(tmg_input, 0, MAVLINK_MSG_ID_TMG_INPUT_LEN);
    memcpy(tmg_input, _MAV_PAYLOAD(msg), len);
#endif
}
