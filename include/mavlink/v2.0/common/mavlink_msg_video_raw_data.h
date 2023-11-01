#pragma once
// MESSAGE VIDEO_RAW_DATA PACKING

#define MAVLINK_MSG_ID_VIDEO_RAW_DATA 202


typedef struct __mavlink_video_raw_data_t {
 uint32_t time_msec; /*< [ms] time of this machine*/
 int32_t lat; /*< [degE7] Latitude*/
 int32_t lon; /*< [degE7] Longitude*/
 int32_t height; /*< [E-3 m] Height.*/
 int32_t roll_speed; /*< [degE4/s]  roll rate*/
 int32_t pitch_speed; /*< [degE4/s]  pitch rate*/
 int32_t yaw_speed; /*< [degE4/s]  yaw rate*/
 int32_t roll; /*< [degE4]  roll*/
 int32_t pitch; /*< [degE4]  pitch */
 uint32_t yaw; /*< [degE4]  yaw */
 int32_t pitch_frame_angle; /*< [0.01 deg] pitch angle of seeker head*/
 int32_t yaw_frame_angle; /*< [0.01 deg] yaw angle of seeker head*/
 int16_t v_e; /*< [0.01m/s] GPS velocity in east direction in earth-fixed ENU frame*/
 int16_t v_n; /*< [0.01m/s] GPS velocity in north direction in earth-fixed ENU frame*/
 int16_t v_u; /*< [0.01m/s] GPS velocity in up direction in earth-fixed ENU frame*/
 int16_t velocity; /*< [0.01m/s] Resultant GPS velocity  in earth-fixed ENU frame*/
 uint16_t laser_distance; /*< [0.1m]  distance detected from laser*/
 char node_id; /*<   node id, from 0x01-0xA0*/
} mavlink_video_raw_data_t;

#define MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN 59
#define MAVLINK_MSG_ID_VIDEO_RAW_DATA_MIN_LEN 59
#define MAVLINK_MSG_ID_202_LEN 59
#define MAVLINK_MSG_ID_202_MIN_LEN 59

#define MAVLINK_MSG_ID_VIDEO_RAW_DATA_CRC 164
#define MAVLINK_MSG_ID_202_CRC 164



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VIDEO_RAW_DATA { \
    202, \
    "VIDEO_RAW_DATA", \
    18, \
    {  { "node_id", NULL, MAVLINK_TYPE_CHAR, 0, 58, offsetof(mavlink_video_raw_data_t, node_id) }, \
         { "time_msec", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_video_raw_data_t, time_msec) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_video_raw_data_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_video_raw_data_t, lon) }, \
         { "height", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_video_raw_data_t, height) }, \
         { "roll_speed", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_video_raw_data_t, roll_speed) }, \
         { "pitch_speed", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_video_raw_data_t, pitch_speed) }, \
         { "yaw_speed", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_video_raw_data_t, yaw_speed) }, \
         { "roll", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_video_raw_data_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_video_raw_data_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_UINT32_T, 0, 36, offsetof(mavlink_video_raw_data_t, yaw) }, \
         { "v_e", NULL, MAVLINK_TYPE_INT16_T, 0, 48, offsetof(mavlink_video_raw_data_t, v_e) }, \
         { "v_n", NULL, MAVLINK_TYPE_INT16_T, 0, 50, offsetof(mavlink_video_raw_data_t, v_n) }, \
         { "v_u", NULL, MAVLINK_TYPE_INT16_T, 0, 52, offsetof(mavlink_video_raw_data_t, v_u) }, \
         { "velocity", NULL, MAVLINK_TYPE_INT16_T, 0, 54, offsetof(mavlink_video_raw_data_t, velocity) }, \
         { "laser_distance", NULL, MAVLINK_TYPE_UINT16_T, 0, 56, offsetof(mavlink_video_raw_data_t, laser_distance) }, \
         { "pitch_frame_angle", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_video_raw_data_t, pitch_frame_angle) }, \
         { "yaw_frame_angle", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_video_raw_data_t, yaw_frame_angle) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VIDEO_RAW_DATA { \
    "VIDEO_RAW_DATA", \
    18, \
    {  { "node_id", NULL, MAVLINK_TYPE_CHAR, 0, 58, offsetof(mavlink_video_raw_data_t, node_id) }, \
         { "time_msec", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_video_raw_data_t, time_msec) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_video_raw_data_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_video_raw_data_t, lon) }, \
         { "height", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_video_raw_data_t, height) }, \
         { "roll_speed", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_video_raw_data_t, roll_speed) }, \
         { "pitch_speed", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_video_raw_data_t, pitch_speed) }, \
         { "yaw_speed", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_video_raw_data_t, yaw_speed) }, \
         { "roll", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_video_raw_data_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_video_raw_data_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_UINT32_T, 0, 36, offsetof(mavlink_video_raw_data_t, yaw) }, \
         { "v_e", NULL, MAVLINK_TYPE_INT16_T, 0, 48, offsetof(mavlink_video_raw_data_t, v_e) }, \
         { "v_n", NULL, MAVLINK_TYPE_INT16_T, 0, 50, offsetof(mavlink_video_raw_data_t, v_n) }, \
         { "v_u", NULL, MAVLINK_TYPE_INT16_T, 0, 52, offsetof(mavlink_video_raw_data_t, v_u) }, \
         { "velocity", NULL, MAVLINK_TYPE_INT16_T, 0, 54, offsetof(mavlink_video_raw_data_t, velocity) }, \
         { "laser_distance", NULL, MAVLINK_TYPE_UINT16_T, 0, 56, offsetof(mavlink_video_raw_data_t, laser_distance) }, \
         { "pitch_frame_angle", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_video_raw_data_t, pitch_frame_angle) }, \
         { "yaw_frame_angle", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_video_raw_data_t, yaw_frame_angle) }, \
         } \
}
#endif

/**
 * @brief Pack a video_raw_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param node_id   node id, from 0x01-0xA0
 * @param time_msec [ms] time of this machine
 * @param lat [degE7] Latitude
 * @param lon [degE7] Longitude
 * @param height [E-3 m] Height.
 * @param roll_speed [degE4/s]  roll rate
 * @param pitch_speed [degE4/s]  pitch rate
 * @param yaw_speed [degE4/s]  yaw rate
 * @param roll [degE4]  roll
 * @param pitch [degE4]  pitch
 * @param yaw [degE4]  yaw
 * @param v_e [0.01m/s] GPS velocity in east direction in earth-fixed ENU frame
 * @param v_n [0.01m/s] GPS velocity in north direction in earth-fixed ENU frame
 * @param v_u [0.01m/s] GPS velocity in up direction in earth-fixed ENU frame
 * @param velocity [0.01m/s] Resultant GPS velocity  in earth-fixed ENU frame
 * @param laser_distance [0.1m]  distance detected from laser
 * @param pitch_frame_angle [0.01 deg] pitch angle of seeker head
 * @param yaw_frame_angle [0.01 deg] yaw angle of seeker head
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_video_raw_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               char node_id, uint32_t time_msec, int32_t lat, int32_t lon, int32_t height, int32_t roll_speed, int32_t pitch_speed, int32_t yaw_speed, int32_t roll, int32_t pitch, uint32_t yaw, int16_t v_e, int16_t v_n, int16_t v_u, int16_t velocity, uint16_t laser_distance, int32_t pitch_frame_angle, int32_t yaw_frame_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN];
    _mav_put_uint32_t(buf, 0, time_msec);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, height);
    _mav_put_int32_t(buf, 16, roll_speed);
    _mav_put_int32_t(buf, 20, pitch_speed);
    _mav_put_int32_t(buf, 24, yaw_speed);
    _mav_put_int32_t(buf, 28, roll);
    _mav_put_int32_t(buf, 32, pitch);
    _mav_put_uint32_t(buf, 36, yaw);
    _mav_put_int32_t(buf, 40, pitch_frame_angle);
    _mav_put_int32_t(buf, 44, yaw_frame_angle);
    _mav_put_int16_t(buf, 48, v_e);
    _mav_put_int16_t(buf, 50, v_n);
    _mav_put_int16_t(buf, 52, v_u);
    _mav_put_int16_t(buf, 54, velocity);
    _mav_put_uint16_t(buf, 56, laser_distance);
    _mav_put_char(buf, 58, node_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN);
#else
    mavlink_video_raw_data_t packet;
    packet.time_msec = time_msec;
    packet.lat = lat;
    packet.lon = lon;
    packet.height = height;
    packet.roll_speed = roll_speed;
    packet.pitch_speed = pitch_speed;
    packet.yaw_speed = yaw_speed;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.pitch_frame_angle = pitch_frame_angle;
    packet.yaw_frame_angle = yaw_frame_angle;
    packet.v_e = v_e;
    packet.v_n = v_n;
    packet.v_u = v_u;
    packet.velocity = velocity;
    packet.laser_distance = laser_distance;
    packet.node_id = node_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VIDEO_RAW_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VIDEO_RAW_DATA_MIN_LEN, MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN, MAVLINK_MSG_ID_VIDEO_RAW_DATA_CRC);
}

/**
 * @brief Pack a video_raw_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param node_id   node id, from 0x01-0xA0
 * @param time_msec [ms] time of this machine
 * @param lat [degE7] Latitude
 * @param lon [degE7] Longitude
 * @param height [E-3 m] Height.
 * @param roll_speed [degE4/s]  roll rate
 * @param pitch_speed [degE4/s]  pitch rate
 * @param yaw_speed [degE4/s]  yaw rate
 * @param roll [degE4]  roll
 * @param pitch [degE4]  pitch
 * @param yaw [degE4]  yaw
 * @param v_e [0.01m/s] GPS velocity in east direction in earth-fixed ENU frame
 * @param v_n [0.01m/s] GPS velocity in north direction in earth-fixed ENU frame
 * @param v_u [0.01m/s] GPS velocity in up direction in earth-fixed ENU frame
 * @param velocity [0.01m/s] Resultant GPS velocity  in earth-fixed ENU frame
 * @param laser_distance [0.1m]  distance detected from laser
 * @param pitch_frame_angle [0.01 deg] pitch angle of seeker head
 * @param yaw_frame_angle [0.01 deg] yaw angle of seeker head
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_video_raw_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   char node_id,uint32_t time_msec,int32_t lat,int32_t lon,int32_t height,int32_t roll_speed,int32_t pitch_speed,int32_t yaw_speed,int32_t roll,int32_t pitch,uint32_t yaw,int16_t v_e,int16_t v_n,int16_t v_u,int16_t velocity,uint16_t laser_distance,int32_t pitch_frame_angle,int32_t yaw_frame_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN];
    _mav_put_uint32_t(buf, 0, time_msec);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, height);
    _mav_put_int32_t(buf, 16, roll_speed);
    _mav_put_int32_t(buf, 20, pitch_speed);
    _mav_put_int32_t(buf, 24, yaw_speed);
    _mav_put_int32_t(buf, 28, roll);
    _mav_put_int32_t(buf, 32, pitch);
    _mav_put_uint32_t(buf, 36, yaw);
    _mav_put_int32_t(buf, 40, pitch_frame_angle);
    _mav_put_int32_t(buf, 44, yaw_frame_angle);
    _mav_put_int16_t(buf, 48, v_e);
    _mav_put_int16_t(buf, 50, v_n);
    _mav_put_int16_t(buf, 52, v_u);
    _mav_put_int16_t(buf, 54, velocity);
    _mav_put_uint16_t(buf, 56, laser_distance);
    _mav_put_char(buf, 58, node_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN);
#else
    mavlink_video_raw_data_t packet;
    packet.time_msec = time_msec;
    packet.lat = lat;
    packet.lon = lon;
    packet.height = height;
    packet.roll_speed = roll_speed;
    packet.pitch_speed = pitch_speed;
    packet.yaw_speed = yaw_speed;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.pitch_frame_angle = pitch_frame_angle;
    packet.yaw_frame_angle = yaw_frame_angle;
    packet.v_e = v_e;
    packet.v_n = v_n;
    packet.v_u = v_u;
    packet.velocity = velocity;
    packet.laser_distance = laser_distance;
    packet.node_id = node_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VIDEO_RAW_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VIDEO_RAW_DATA_MIN_LEN, MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN, MAVLINK_MSG_ID_VIDEO_RAW_DATA_CRC);
}

/**
 * @brief Encode a video_raw_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param video_raw_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_video_raw_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_video_raw_data_t* video_raw_data)
{
    return mavlink_msg_video_raw_data_pack(system_id, component_id, msg, video_raw_data->node_id, video_raw_data->time_msec, video_raw_data->lat, video_raw_data->lon, video_raw_data->height, video_raw_data->roll_speed, video_raw_data->pitch_speed, video_raw_data->yaw_speed, video_raw_data->roll, video_raw_data->pitch, video_raw_data->yaw, video_raw_data->v_e, video_raw_data->v_n, video_raw_data->v_u, video_raw_data->velocity, video_raw_data->laser_distance, video_raw_data->pitch_frame_angle, video_raw_data->yaw_frame_angle);
}

/**
 * @brief Encode a video_raw_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param video_raw_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_video_raw_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_video_raw_data_t* video_raw_data)
{
    return mavlink_msg_video_raw_data_pack_chan(system_id, component_id, chan, msg, video_raw_data->node_id, video_raw_data->time_msec, video_raw_data->lat, video_raw_data->lon, video_raw_data->height, video_raw_data->roll_speed, video_raw_data->pitch_speed, video_raw_data->yaw_speed, video_raw_data->roll, video_raw_data->pitch, video_raw_data->yaw, video_raw_data->v_e, video_raw_data->v_n, video_raw_data->v_u, video_raw_data->velocity, video_raw_data->laser_distance, video_raw_data->pitch_frame_angle, video_raw_data->yaw_frame_angle);
}

/**
 * @brief Send a video_raw_data message
 * @param chan MAVLink channel to send the message
 *
 * @param node_id   node id, from 0x01-0xA0
 * @param time_msec [ms] time of this machine
 * @param lat [degE7] Latitude
 * @param lon [degE7] Longitude
 * @param height [E-3 m] Height.
 * @param roll_speed [degE4/s]  roll rate
 * @param pitch_speed [degE4/s]  pitch rate
 * @param yaw_speed [degE4/s]  yaw rate
 * @param roll [degE4]  roll
 * @param pitch [degE4]  pitch
 * @param yaw [degE4]  yaw
 * @param v_e [0.01m/s] GPS velocity in east direction in earth-fixed ENU frame
 * @param v_n [0.01m/s] GPS velocity in north direction in earth-fixed ENU frame
 * @param v_u [0.01m/s] GPS velocity in up direction in earth-fixed ENU frame
 * @param velocity [0.01m/s] Resultant GPS velocity  in earth-fixed ENU frame
 * @param laser_distance [0.1m]  distance detected from laser
 * @param pitch_frame_angle [0.01 deg] pitch angle of seeker head
 * @param yaw_frame_angle [0.01 deg] yaw angle of seeker head
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_video_raw_data_send(mavlink_channel_t chan, char node_id, uint32_t time_msec, int32_t lat, int32_t lon, int32_t height, int32_t roll_speed, int32_t pitch_speed, int32_t yaw_speed, int32_t roll, int32_t pitch, uint32_t yaw, int16_t v_e, int16_t v_n, int16_t v_u, int16_t velocity, uint16_t laser_distance, int32_t pitch_frame_angle, int32_t yaw_frame_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN];
    _mav_put_uint32_t(buf, 0, time_msec);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, height);
    _mav_put_int32_t(buf, 16, roll_speed);
    _mav_put_int32_t(buf, 20, pitch_speed);
    _mav_put_int32_t(buf, 24, yaw_speed);
    _mav_put_int32_t(buf, 28, roll);
    _mav_put_int32_t(buf, 32, pitch);
    _mav_put_uint32_t(buf, 36, yaw);
    _mav_put_int32_t(buf, 40, pitch_frame_angle);
    _mav_put_int32_t(buf, 44, yaw_frame_angle);
    _mav_put_int16_t(buf, 48, v_e);
    _mav_put_int16_t(buf, 50, v_n);
    _mav_put_int16_t(buf, 52, v_u);
    _mav_put_int16_t(buf, 54, velocity);
    _mav_put_uint16_t(buf, 56, laser_distance);
    _mav_put_char(buf, 58, node_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VIDEO_RAW_DATA, buf, MAVLINK_MSG_ID_VIDEO_RAW_DATA_MIN_LEN, MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN, MAVLINK_MSG_ID_VIDEO_RAW_DATA_CRC);
#else
    mavlink_video_raw_data_t packet;
    packet.time_msec = time_msec;
    packet.lat = lat;
    packet.lon = lon;
    packet.height = height;
    packet.roll_speed = roll_speed;
    packet.pitch_speed = pitch_speed;
    packet.yaw_speed = yaw_speed;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;
    packet.pitch_frame_angle = pitch_frame_angle;
    packet.yaw_frame_angle = yaw_frame_angle;
    packet.v_e = v_e;
    packet.v_n = v_n;
    packet.v_u = v_u;
    packet.velocity = velocity;
    packet.laser_distance = laser_distance;
    packet.node_id = node_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VIDEO_RAW_DATA, (const char *)&packet, MAVLINK_MSG_ID_VIDEO_RAW_DATA_MIN_LEN, MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN, MAVLINK_MSG_ID_VIDEO_RAW_DATA_CRC);
#endif
}

/**
 * @brief Send a video_raw_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_video_raw_data_send_struct(mavlink_channel_t chan, const mavlink_video_raw_data_t* video_raw_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_video_raw_data_send(chan, video_raw_data->node_id, video_raw_data->time_msec, video_raw_data->lat, video_raw_data->lon, video_raw_data->height, video_raw_data->roll_speed, video_raw_data->pitch_speed, video_raw_data->yaw_speed, video_raw_data->roll, video_raw_data->pitch, video_raw_data->yaw, video_raw_data->v_e, video_raw_data->v_n, video_raw_data->v_u, video_raw_data->velocity, video_raw_data->laser_distance, video_raw_data->pitch_frame_angle, video_raw_data->yaw_frame_angle);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VIDEO_RAW_DATA, (const char *)video_raw_data, MAVLINK_MSG_ID_VIDEO_RAW_DATA_MIN_LEN, MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN, MAVLINK_MSG_ID_VIDEO_RAW_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_video_raw_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  char node_id, uint32_t time_msec, int32_t lat, int32_t lon, int32_t height, int32_t roll_speed, int32_t pitch_speed, int32_t yaw_speed, int32_t roll, int32_t pitch, uint32_t yaw, int16_t v_e, int16_t v_n, int16_t v_u, int16_t velocity, uint16_t laser_distance, int32_t pitch_frame_angle, int32_t yaw_frame_angle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_msec);
    _mav_put_int32_t(buf, 4, lat);
    _mav_put_int32_t(buf, 8, lon);
    _mav_put_int32_t(buf, 12, height);
    _mav_put_int32_t(buf, 16, roll_speed);
    _mav_put_int32_t(buf, 20, pitch_speed);
    _mav_put_int32_t(buf, 24, yaw_speed);
    _mav_put_int32_t(buf, 28, roll);
    _mav_put_int32_t(buf, 32, pitch);
    _mav_put_uint32_t(buf, 36, yaw);
    _mav_put_int32_t(buf, 40, pitch_frame_angle);
    _mav_put_int32_t(buf, 44, yaw_frame_angle);
    _mav_put_int16_t(buf, 48, v_e);
    _mav_put_int16_t(buf, 50, v_n);
    _mav_put_int16_t(buf, 52, v_u);
    _mav_put_int16_t(buf, 54, velocity);
    _mav_put_uint16_t(buf, 56, laser_distance);
    _mav_put_char(buf, 58, node_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VIDEO_RAW_DATA, buf, MAVLINK_MSG_ID_VIDEO_RAW_DATA_MIN_LEN, MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN, MAVLINK_MSG_ID_VIDEO_RAW_DATA_CRC);
#else
    mavlink_video_raw_data_t *packet = (mavlink_video_raw_data_t *)msgbuf;
    packet->time_msec = time_msec;
    packet->lat = lat;
    packet->lon = lon;
    packet->height = height;
    packet->roll_speed = roll_speed;
    packet->pitch_speed = pitch_speed;
    packet->yaw_speed = yaw_speed;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->yaw = yaw;
    packet->pitch_frame_angle = pitch_frame_angle;
    packet->yaw_frame_angle = yaw_frame_angle;
    packet->v_e = v_e;
    packet->v_n = v_n;
    packet->v_u = v_u;
    packet->velocity = velocity;
    packet->laser_distance = laser_distance;
    packet->node_id = node_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VIDEO_RAW_DATA, (const char *)packet, MAVLINK_MSG_ID_VIDEO_RAW_DATA_MIN_LEN, MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN, MAVLINK_MSG_ID_VIDEO_RAW_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE VIDEO_RAW_DATA UNPACKING


/**
 * @brief Get field node_id from video_raw_data message
 *
 * @return   node id, from 0x01-0xA0
 */
static inline char mavlink_msg_video_raw_data_get_node_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_char(msg,  58);
}

/**
 * @brief Get field time_msec from video_raw_data message
 *
 * @return [ms] time of this machine
 */
static inline uint32_t mavlink_msg_video_raw_data_get_time_msec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field lat from video_raw_data message
 *
 * @return [degE7] Latitude
 */
static inline int32_t mavlink_msg_video_raw_data_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field lon from video_raw_data message
 *
 * @return [degE7] Longitude
 */
static inline int32_t mavlink_msg_video_raw_data_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field height from video_raw_data message
 *
 * @return [E-3 m] Height.
 */
static inline int32_t mavlink_msg_video_raw_data_get_height(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field roll_speed from video_raw_data message
 *
 * @return [degE4/s]  roll rate
 */
static inline int32_t mavlink_msg_video_raw_data_get_roll_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field pitch_speed from video_raw_data message
 *
 * @return [degE4/s]  pitch rate
 */
static inline int32_t mavlink_msg_video_raw_data_get_pitch_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field yaw_speed from video_raw_data message
 *
 * @return [degE4/s]  yaw rate
 */
static inline int32_t mavlink_msg_video_raw_data_get_yaw_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field roll from video_raw_data message
 *
 * @return [degE4]  roll
 */
static inline int32_t mavlink_msg_video_raw_data_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  28);
}

/**
 * @brief Get field pitch from video_raw_data message
 *
 * @return [degE4]  pitch
 */
static inline int32_t mavlink_msg_video_raw_data_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  32);
}

/**
 * @brief Get field yaw from video_raw_data message
 *
 * @return [degE4]  yaw
 */
static inline uint32_t mavlink_msg_video_raw_data_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  36);
}

/**
 * @brief Get field v_e from video_raw_data message
 *
 * @return [0.01m/s] GPS velocity in east direction in earth-fixed ENU frame
 */
static inline int16_t mavlink_msg_video_raw_data_get_v_e(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  48);
}

/**
 * @brief Get field v_n from video_raw_data message
 *
 * @return [0.01m/s] GPS velocity in north direction in earth-fixed ENU frame
 */
static inline int16_t mavlink_msg_video_raw_data_get_v_n(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  50);
}

/**
 * @brief Get field v_u from video_raw_data message
 *
 * @return [0.01m/s] GPS velocity in up direction in earth-fixed ENU frame
 */
static inline int16_t mavlink_msg_video_raw_data_get_v_u(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  52);
}

/**
 * @brief Get field velocity from video_raw_data message
 *
 * @return [0.01m/s] Resultant GPS velocity  in earth-fixed ENU frame
 */
static inline int16_t mavlink_msg_video_raw_data_get_velocity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  54);
}

/**
 * @brief Get field laser_distance from video_raw_data message
 *
 * @return [0.1m]  distance detected from laser
 */
static inline uint16_t mavlink_msg_video_raw_data_get_laser_distance(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  56);
}

/**
 * @brief Get field pitch_frame_angle from video_raw_data message
 *
 * @return [0.01 deg] pitch angle of seeker head
 */
static inline int32_t mavlink_msg_video_raw_data_get_pitch_frame_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  40);
}

/**
 * @brief Get field yaw_frame_angle from video_raw_data message
 *
 * @return [0.01 deg] yaw angle of seeker head
 */
static inline int32_t mavlink_msg_video_raw_data_get_yaw_frame_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  44);
}

/**
 * @brief Decode a video_raw_data message into a struct
 *
 * @param msg The message to decode
 * @param video_raw_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_video_raw_data_decode(const mavlink_message_t* msg, mavlink_video_raw_data_t* video_raw_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    video_raw_data->time_msec = mavlink_msg_video_raw_data_get_time_msec(msg);
    video_raw_data->lat = mavlink_msg_video_raw_data_get_lat(msg);
    video_raw_data->lon = mavlink_msg_video_raw_data_get_lon(msg);
    video_raw_data->height = mavlink_msg_video_raw_data_get_height(msg);
    video_raw_data->roll_speed = mavlink_msg_video_raw_data_get_roll_speed(msg);
    video_raw_data->pitch_speed = mavlink_msg_video_raw_data_get_pitch_speed(msg);
    video_raw_data->yaw_speed = mavlink_msg_video_raw_data_get_yaw_speed(msg);
    video_raw_data->roll = mavlink_msg_video_raw_data_get_roll(msg);
    video_raw_data->pitch = mavlink_msg_video_raw_data_get_pitch(msg);
    video_raw_data->yaw = mavlink_msg_video_raw_data_get_yaw(msg);
    video_raw_data->pitch_frame_angle = mavlink_msg_video_raw_data_get_pitch_frame_angle(msg);
    video_raw_data->yaw_frame_angle = mavlink_msg_video_raw_data_get_yaw_frame_angle(msg);
    video_raw_data->v_e = mavlink_msg_video_raw_data_get_v_e(msg);
    video_raw_data->v_n = mavlink_msg_video_raw_data_get_v_n(msg);
    video_raw_data->v_u = mavlink_msg_video_raw_data_get_v_u(msg);
    video_raw_data->velocity = mavlink_msg_video_raw_data_get_velocity(msg);
    video_raw_data->laser_distance = mavlink_msg_video_raw_data_get_laser_distance(msg);
    video_raw_data->node_id = mavlink_msg_video_raw_data_get_node_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN? msg->len : MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN;
        memset(video_raw_data, 0, MAVLINK_MSG_ID_VIDEO_RAW_DATA_LEN);
    memcpy(video_raw_data, _MAV_PAYLOAD(msg), len);
#endif
}
