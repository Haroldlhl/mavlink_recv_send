#pragma once
// MESSAGE SEEKER_FEEDBACK PACKING

#define MAVLINK_MSG_ID_SEEKER_FEEDBACK 209


typedef struct __mavlink_seeker_feedback_t {
 uint64_t time_usec; /*< [us] Timestamp (micros since boot or Unix epoch)*/
 uint32_t seq; /*<  sequence number*/
 int16_t horizon_dist; /*<  0.05 degree*/
 int16_t vertical_dist; /*<  0.05 degree*/
 int16_t unused1; /*<  unused*/
 int16_t gimbal_pitch; /*<  0.01 degrees, gimbal pitch*/
 int16_t gimbal_yaw; /*<  0.01 degrees, gimbal pitch*/
 int16_t att_roll; /*<  0.01 degrees, att roll*/
 int16_t att_pitch; /*<  0.01 degrees, att pitch*/
 int16_t rollrate; /*<  0.01 degrees/sec*/
 int16_t pitchrate; /*<  0.01 degrees/sec*/
 int16_t yawrate; /*<  0.01 degrees/sec*/
 int16_t unused2; /*<  unused*/
 int16_t unused3; /*<  unused*/
 uint8_t state_info_1; /*<  seeker state information*/
 uint8_t state_info_2; /*<  seeker state information*/
 uint8_t zoom_ratio; /*<  1~10*/
 uint8_t anomaly_info; /*<  0.1 (1~10)*/
} mavlink_seeker_feedback_t;

#define MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN 40
#define MAVLINK_MSG_ID_SEEKER_FEEDBACK_MIN_LEN 40
#define MAVLINK_MSG_ID_209_LEN 40
#define MAVLINK_MSG_ID_209_MIN_LEN 40

#define MAVLINK_MSG_ID_SEEKER_FEEDBACK_CRC 112
#define MAVLINK_MSG_ID_209_CRC 112



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SEEKER_FEEDBACK { \
    209, \
    "SEEKER_FEEDBACK", \
    18, \
    {  { "seq", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_seeker_feedback_t, seq) }, \
         { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_seeker_feedback_t, time_usec) }, \
         { "state_info_1", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_seeker_feedback_t, state_info_1) }, \
         { "state_info_2", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_seeker_feedback_t, state_info_2) }, \
         { "zoom_ratio", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_seeker_feedback_t, zoom_ratio) }, \
         { "anomaly_info", NULL, MAVLINK_TYPE_UINT8_T, 0, 39, offsetof(mavlink_seeker_feedback_t, anomaly_info) }, \
         { "horizon_dist", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_seeker_feedback_t, horizon_dist) }, \
         { "vertical_dist", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_seeker_feedback_t, vertical_dist) }, \
         { "unused1", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_seeker_feedback_t, unused1) }, \
         { "gimbal_pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_seeker_feedback_t, gimbal_pitch) }, \
         { "gimbal_yaw", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_seeker_feedback_t, gimbal_yaw) }, \
         { "att_roll", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_seeker_feedback_t, att_roll) }, \
         { "att_pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_seeker_feedback_t, att_pitch) }, \
         { "rollrate", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_seeker_feedback_t, rollrate) }, \
         { "pitchrate", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_seeker_feedback_t, pitchrate) }, \
         { "yawrate", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_seeker_feedback_t, yawrate) }, \
         { "unused2", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_seeker_feedback_t, unused2) }, \
         { "unused3", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_seeker_feedback_t, unused3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SEEKER_FEEDBACK { \
    "SEEKER_FEEDBACK", \
    18, \
    {  { "seq", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_seeker_feedback_t, seq) }, \
         { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_seeker_feedback_t, time_usec) }, \
         { "state_info_1", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_seeker_feedback_t, state_info_1) }, \
         { "state_info_2", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_seeker_feedback_t, state_info_2) }, \
         { "zoom_ratio", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_seeker_feedback_t, zoom_ratio) }, \
         { "anomaly_info", NULL, MAVLINK_TYPE_UINT8_T, 0, 39, offsetof(mavlink_seeker_feedback_t, anomaly_info) }, \
         { "horizon_dist", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_seeker_feedback_t, horizon_dist) }, \
         { "vertical_dist", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_seeker_feedback_t, vertical_dist) }, \
         { "unused1", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_seeker_feedback_t, unused1) }, \
         { "gimbal_pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_seeker_feedback_t, gimbal_pitch) }, \
         { "gimbal_yaw", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_seeker_feedback_t, gimbal_yaw) }, \
         { "att_roll", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_seeker_feedback_t, att_roll) }, \
         { "att_pitch", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_seeker_feedback_t, att_pitch) }, \
         { "rollrate", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_seeker_feedback_t, rollrate) }, \
         { "pitchrate", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_seeker_feedback_t, pitchrate) }, \
         { "yawrate", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_seeker_feedback_t, yawrate) }, \
         { "unused2", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_seeker_feedback_t, unused2) }, \
         { "unused3", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_seeker_feedback_t, unused3) }, \
         } \
}
#endif

/**
 * @brief Pack a seeker_feedback message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param seq  sequence number
 * @param time_usec [us] Timestamp (micros since boot or Unix epoch)
 * @param state_info_1  seeker state information
 * @param state_info_2  seeker state information
 * @param zoom_ratio  1~10
 * @param anomaly_info  0.1 (1~10)
 * @param horizon_dist  0.05 degree
 * @param vertical_dist  0.05 degree
 * @param unused1  unused
 * @param gimbal_pitch  0.01 degrees, gimbal pitch
 * @param gimbal_yaw  0.01 degrees, gimbal pitch
 * @param att_roll  0.01 degrees, att roll
 * @param att_pitch  0.01 degrees, att pitch
 * @param rollrate  0.01 degrees/sec
 * @param pitchrate  0.01 degrees/sec
 * @param yawrate  0.01 degrees/sec
 * @param unused2  unused
 * @param unused3  unused
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_seeker_feedback_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t seq, uint64_t time_usec, uint8_t state_info_1, uint8_t state_info_2, uint8_t zoom_ratio, uint8_t anomaly_info, int16_t horizon_dist, int16_t vertical_dist, int16_t unused1, int16_t gimbal_pitch, int16_t gimbal_yaw, int16_t att_roll, int16_t att_pitch, int16_t rollrate, int16_t pitchrate, int16_t yawrate, int16_t unused2, int16_t unused3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, seq);
    _mav_put_int16_t(buf, 12, horizon_dist);
    _mav_put_int16_t(buf, 14, vertical_dist);
    _mav_put_int16_t(buf, 16, unused1);
    _mav_put_int16_t(buf, 18, gimbal_pitch);
    _mav_put_int16_t(buf, 20, gimbal_yaw);
    _mav_put_int16_t(buf, 22, att_roll);
    _mav_put_int16_t(buf, 24, att_pitch);
    _mav_put_int16_t(buf, 26, rollrate);
    _mav_put_int16_t(buf, 28, pitchrate);
    _mav_put_int16_t(buf, 30, yawrate);
    _mav_put_int16_t(buf, 32, unused2);
    _mav_put_int16_t(buf, 34, unused3);
    _mav_put_uint8_t(buf, 36, state_info_1);
    _mav_put_uint8_t(buf, 37, state_info_2);
    _mav_put_uint8_t(buf, 38, zoom_ratio);
    _mav_put_uint8_t(buf, 39, anomaly_info);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN);
#else
    mavlink_seeker_feedback_t packet;
    packet.time_usec = time_usec;
    packet.seq = seq;
    packet.horizon_dist = horizon_dist;
    packet.vertical_dist = vertical_dist;
    packet.unused1 = unused1;
    packet.gimbal_pitch = gimbal_pitch;
    packet.gimbal_yaw = gimbal_yaw;
    packet.att_roll = att_roll;
    packet.att_pitch = att_pitch;
    packet.rollrate = rollrate;
    packet.pitchrate = pitchrate;
    packet.yawrate = yawrate;
    packet.unused2 = unused2;
    packet.unused3 = unused3;
    packet.state_info_1 = state_info_1;
    packet.state_info_2 = state_info_2;
    packet.zoom_ratio = zoom_ratio;
    packet.anomaly_info = anomaly_info;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SEEKER_FEEDBACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SEEKER_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN, MAVLINK_MSG_ID_SEEKER_FEEDBACK_CRC);
}

/**
 * @brief Pack a seeker_feedback message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param seq  sequence number
 * @param time_usec [us] Timestamp (micros since boot or Unix epoch)
 * @param state_info_1  seeker state information
 * @param state_info_2  seeker state information
 * @param zoom_ratio  1~10
 * @param anomaly_info  0.1 (1~10)
 * @param horizon_dist  0.05 degree
 * @param vertical_dist  0.05 degree
 * @param unused1  unused
 * @param gimbal_pitch  0.01 degrees, gimbal pitch
 * @param gimbal_yaw  0.01 degrees, gimbal pitch
 * @param att_roll  0.01 degrees, att roll
 * @param att_pitch  0.01 degrees, att pitch
 * @param rollrate  0.01 degrees/sec
 * @param pitchrate  0.01 degrees/sec
 * @param yawrate  0.01 degrees/sec
 * @param unused2  unused
 * @param unused3  unused
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_seeker_feedback_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t seq,uint64_t time_usec,uint8_t state_info_1,uint8_t state_info_2,uint8_t zoom_ratio,uint8_t anomaly_info,int16_t horizon_dist,int16_t vertical_dist,int16_t unused1,int16_t gimbal_pitch,int16_t gimbal_yaw,int16_t att_roll,int16_t att_pitch,int16_t rollrate,int16_t pitchrate,int16_t yawrate,int16_t unused2,int16_t unused3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, seq);
    _mav_put_int16_t(buf, 12, horizon_dist);
    _mav_put_int16_t(buf, 14, vertical_dist);
    _mav_put_int16_t(buf, 16, unused1);
    _mav_put_int16_t(buf, 18, gimbal_pitch);
    _mav_put_int16_t(buf, 20, gimbal_yaw);
    _mav_put_int16_t(buf, 22, att_roll);
    _mav_put_int16_t(buf, 24, att_pitch);
    _mav_put_int16_t(buf, 26, rollrate);
    _mav_put_int16_t(buf, 28, pitchrate);
    _mav_put_int16_t(buf, 30, yawrate);
    _mav_put_int16_t(buf, 32, unused2);
    _mav_put_int16_t(buf, 34, unused3);
    _mav_put_uint8_t(buf, 36, state_info_1);
    _mav_put_uint8_t(buf, 37, state_info_2);
    _mav_put_uint8_t(buf, 38, zoom_ratio);
    _mav_put_uint8_t(buf, 39, anomaly_info);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN);
#else
    mavlink_seeker_feedback_t packet;
    packet.time_usec = time_usec;
    packet.seq = seq;
    packet.horizon_dist = horizon_dist;
    packet.vertical_dist = vertical_dist;
    packet.unused1 = unused1;
    packet.gimbal_pitch = gimbal_pitch;
    packet.gimbal_yaw = gimbal_yaw;
    packet.att_roll = att_roll;
    packet.att_pitch = att_pitch;
    packet.rollrate = rollrate;
    packet.pitchrate = pitchrate;
    packet.yawrate = yawrate;
    packet.unused2 = unused2;
    packet.unused3 = unused3;
    packet.state_info_1 = state_info_1;
    packet.state_info_2 = state_info_2;
    packet.zoom_ratio = zoom_ratio;
    packet.anomaly_info = anomaly_info;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SEEKER_FEEDBACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SEEKER_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN, MAVLINK_MSG_ID_SEEKER_FEEDBACK_CRC);
}

/**
 * @brief Encode a seeker_feedback struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param seeker_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_seeker_feedback_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_seeker_feedback_t* seeker_feedback)
{
    return mavlink_msg_seeker_feedback_pack(system_id, component_id, msg, seeker_feedback->seq, seeker_feedback->time_usec, seeker_feedback->state_info_1, seeker_feedback->state_info_2, seeker_feedback->zoom_ratio, seeker_feedback->anomaly_info, seeker_feedback->horizon_dist, seeker_feedback->vertical_dist, seeker_feedback->unused1, seeker_feedback->gimbal_pitch, seeker_feedback->gimbal_yaw, seeker_feedback->att_roll, seeker_feedback->att_pitch, seeker_feedback->rollrate, seeker_feedback->pitchrate, seeker_feedback->yawrate, seeker_feedback->unused2, seeker_feedback->unused3);
}

/**
 * @brief Encode a seeker_feedback struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param seeker_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_seeker_feedback_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_seeker_feedback_t* seeker_feedback)
{
    return mavlink_msg_seeker_feedback_pack_chan(system_id, component_id, chan, msg, seeker_feedback->seq, seeker_feedback->time_usec, seeker_feedback->state_info_1, seeker_feedback->state_info_2, seeker_feedback->zoom_ratio, seeker_feedback->anomaly_info, seeker_feedback->horizon_dist, seeker_feedback->vertical_dist, seeker_feedback->unused1, seeker_feedback->gimbal_pitch, seeker_feedback->gimbal_yaw, seeker_feedback->att_roll, seeker_feedback->att_pitch, seeker_feedback->rollrate, seeker_feedback->pitchrate, seeker_feedback->yawrate, seeker_feedback->unused2, seeker_feedback->unused3);
}

/**
 * @brief Send a seeker_feedback message
 * @param chan MAVLink channel to send the message
 *
 * @param seq  sequence number
 * @param time_usec [us] Timestamp (micros since boot or Unix epoch)
 * @param state_info_1  seeker state information
 * @param state_info_2  seeker state information
 * @param zoom_ratio  1~10
 * @param anomaly_info  0.1 (1~10)
 * @param horizon_dist  0.05 degree
 * @param vertical_dist  0.05 degree
 * @param unused1  unused
 * @param gimbal_pitch  0.01 degrees, gimbal pitch
 * @param gimbal_yaw  0.01 degrees, gimbal pitch
 * @param att_roll  0.01 degrees, att roll
 * @param att_pitch  0.01 degrees, att pitch
 * @param rollrate  0.01 degrees/sec
 * @param pitchrate  0.01 degrees/sec
 * @param yawrate  0.01 degrees/sec
 * @param unused2  unused
 * @param unused3  unused
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_seeker_feedback_send(mavlink_channel_t chan, uint32_t seq, uint64_t time_usec, uint8_t state_info_1, uint8_t state_info_2, uint8_t zoom_ratio, uint8_t anomaly_info, int16_t horizon_dist, int16_t vertical_dist, int16_t unused1, int16_t gimbal_pitch, int16_t gimbal_yaw, int16_t att_roll, int16_t att_pitch, int16_t rollrate, int16_t pitchrate, int16_t yawrate, int16_t unused2, int16_t unused3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, seq);
    _mav_put_int16_t(buf, 12, horizon_dist);
    _mav_put_int16_t(buf, 14, vertical_dist);
    _mav_put_int16_t(buf, 16, unused1);
    _mav_put_int16_t(buf, 18, gimbal_pitch);
    _mav_put_int16_t(buf, 20, gimbal_yaw);
    _mav_put_int16_t(buf, 22, att_roll);
    _mav_put_int16_t(buf, 24, att_pitch);
    _mav_put_int16_t(buf, 26, rollrate);
    _mav_put_int16_t(buf, 28, pitchrate);
    _mav_put_int16_t(buf, 30, yawrate);
    _mav_put_int16_t(buf, 32, unused2);
    _mav_put_int16_t(buf, 34, unused3);
    _mav_put_uint8_t(buf, 36, state_info_1);
    _mav_put_uint8_t(buf, 37, state_info_2);
    _mav_put_uint8_t(buf, 38, zoom_ratio);
    _mav_put_uint8_t(buf, 39, anomaly_info);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEEKER_FEEDBACK, buf, MAVLINK_MSG_ID_SEEKER_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN, MAVLINK_MSG_ID_SEEKER_FEEDBACK_CRC);
#else
    mavlink_seeker_feedback_t packet;
    packet.time_usec = time_usec;
    packet.seq = seq;
    packet.horizon_dist = horizon_dist;
    packet.vertical_dist = vertical_dist;
    packet.unused1 = unused1;
    packet.gimbal_pitch = gimbal_pitch;
    packet.gimbal_yaw = gimbal_yaw;
    packet.att_roll = att_roll;
    packet.att_pitch = att_pitch;
    packet.rollrate = rollrate;
    packet.pitchrate = pitchrate;
    packet.yawrate = yawrate;
    packet.unused2 = unused2;
    packet.unused3 = unused3;
    packet.state_info_1 = state_info_1;
    packet.state_info_2 = state_info_2;
    packet.zoom_ratio = zoom_ratio;
    packet.anomaly_info = anomaly_info;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEEKER_FEEDBACK, (const char *)&packet, MAVLINK_MSG_ID_SEEKER_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN, MAVLINK_MSG_ID_SEEKER_FEEDBACK_CRC);
#endif
}

/**
 * @brief Send a seeker_feedback message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_seeker_feedback_send_struct(mavlink_channel_t chan, const mavlink_seeker_feedback_t* seeker_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_seeker_feedback_send(chan, seeker_feedback->seq, seeker_feedback->time_usec, seeker_feedback->state_info_1, seeker_feedback->state_info_2, seeker_feedback->zoom_ratio, seeker_feedback->anomaly_info, seeker_feedback->horizon_dist, seeker_feedback->vertical_dist, seeker_feedback->unused1, seeker_feedback->gimbal_pitch, seeker_feedback->gimbal_yaw, seeker_feedback->att_roll, seeker_feedback->att_pitch, seeker_feedback->rollrate, seeker_feedback->pitchrate, seeker_feedback->yawrate, seeker_feedback->unused2, seeker_feedback->unused3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEEKER_FEEDBACK, (const char *)seeker_feedback, MAVLINK_MSG_ID_SEEKER_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN, MAVLINK_MSG_ID_SEEKER_FEEDBACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_seeker_feedback_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t seq, uint64_t time_usec, uint8_t state_info_1, uint8_t state_info_2, uint8_t zoom_ratio, uint8_t anomaly_info, int16_t horizon_dist, int16_t vertical_dist, int16_t unused1, int16_t gimbal_pitch, int16_t gimbal_yaw, int16_t att_roll, int16_t att_pitch, int16_t rollrate, int16_t pitchrate, int16_t yawrate, int16_t unused2, int16_t unused3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, seq);
    _mav_put_int16_t(buf, 12, horizon_dist);
    _mav_put_int16_t(buf, 14, vertical_dist);
    _mav_put_int16_t(buf, 16, unused1);
    _mav_put_int16_t(buf, 18, gimbal_pitch);
    _mav_put_int16_t(buf, 20, gimbal_yaw);
    _mav_put_int16_t(buf, 22, att_roll);
    _mav_put_int16_t(buf, 24, att_pitch);
    _mav_put_int16_t(buf, 26, rollrate);
    _mav_put_int16_t(buf, 28, pitchrate);
    _mav_put_int16_t(buf, 30, yawrate);
    _mav_put_int16_t(buf, 32, unused2);
    _mav_put_int16_t(buf, 34, unused3);
    _mav_put_uint8_t(buf, 36, state_info_1);
    _mav_put_uint8_t(buf, 37, state_info_2);
    _mav_put_uint8_t(buf, 38, zoom_ratio);
    _mav_put_uint8_t(buf, 39, anomaly_info);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEEKER_FEEDBACK, buf, MAVLINK_MSG_ID_SEEKER_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN, MAVLINK_MSG_ID_SEEKER_FEEDBACK_CRC);
#else
    mavlink_seeker_feedback_t *packet = (mavlink_seeker_feedback_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->seq = seq;
    packet->horizon_dist = horizon_dist;
    packet->vertical_dist = vertical_dist;
    packet->unused1 = unused1;
    packet->gimbal_pitch = gimbal_pitch;
    packet->gimbal_yaw = gimbal_yaw;
    packet->att_roll = att_roll;
    packet->att_pitch = att_pitch;
    packet->rollrate = rollrate;
    packet->pitchrate = pitchrate;
    packet->yawrate = yawrate;
    packet->unused2 = unused2;
    packet->unused3 = unused3;
    packet->state_info_1 = state_info_1;
    packet->state_info_2 = state_info_2;
    packet->zoom_ratio = zoom_ratio;
    packet->anomaly_info = anomaly_info;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SEEKER_FEEDBACK, (const char *)packet, MAVLINK_MSG_ID_SEEKER_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN, MAVLINK_MSG_ID_SEEKER_FEEDBACK_CRC);
#endif
}
#endif

#endif

// MESSAGE SEEKER_FEEDBACK UNPACKING


/**
 * @brief Get field seq from seeker_feedback message
 *
 * @return  sequence number
 */
static inline uint32_t mavlink_msg_seeker_feedback_get_seq(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field time_usec from seeker_feedback message
 *
 * @return [us] Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_seeker_feedback_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field state_info_1 from seeker_feedback message
 *
 * @return  seeker state information
 */
static inline uint8_t mavlink_msg_seeker_feedback_get_state_info_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Get field state_info_2 from seeker_feedback message
 *
 * @return  seeker state information
 */
static inline uint8_t mavlink_msg_seeker_feedback_get_state_info_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  37);
}

/**
 * @brief Get field zoom_ratio from seeker_feedback message
 *
 * @return  1~10
 */
static inline uint8_t mavlink_msg_seeker_feedback_get_zoom_ratio(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  38);
}

/**
 * @brief Get field anomaly_info from seeker_feedback message
 *
 * @return  0.1 (1~10)
 */
static inline uint8_t mavlink_msg_seeker_feedback_get_anomaly_info(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  39);
}

/**
 * @brief Get field horizon_dist from seeker_feedback message
 *
 * @return  0.05 degree
 */
static inline int16_t mavlink_msg_seeker_feedback_get_horizon_dist(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field vertical_dist from seeker_feedback message
 *
 * @return  0.05 degree
 */
static inline int16_t mavlink_msg_seeker_feedback_get_vertical_dist(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field unused1 from seeker_feedback message
 *
 * @return  unused
 */
static inline int16_t mavlink_msg_seeker_feedback_get_unused1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field gimbal_pitch from seeker_feedback message
 *
 * @return  0.01 degrees, gimbal pitch
 */
static inline int16_t mavlink_msg_seeker_feedback_get_gimbal_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field gimbal_yaw from seeker_feedback message
 *
 * @return  0.01 degrees, gimbal pitch
 */
static inline int16_t mavlink_msg_seeker_feedback_get_gimbal_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field att_roll from seeker_feedback message
 *
 * @return  0.01 degrees, att roll
 */
static inline int16_t mavlink_msg_seeker_feedback_get_att_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field att_pitch from seeker_feedback message
 *
 * @return  0.01 degrees, att pitch
 */
static inline int16_t mavlink_msg_seeker_feedback_get_att_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field rollrate from seeker_feedback message
 *
 * @return  0.01 degrees/sec
 */
static inline int16_t mavlink_msg_seeker_feedback_get_rollrate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field pitchrate from seeker_feedback message
 *
 * @return  0.01 degrees/sec
 */
static inline int16_t mavlink_msg_seeker_feedback_get_pitchrate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field yawrate from seeker_feedback message
 *
 * @return  0.01 degrees/sec
 */
static inline int16_t mavlink_msg_seeker_feedback_get_yawrate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Get field unused2 from seeker_feedback message
 *
 * @return  unused
 */
static inline int16_t mavlink_msg_seeker_feedback_get_unused2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field unused3 from seeker_feedback message
 *
 * @return  unused
 */
static inline int16_t mavlink_msg_seeker_feedback_get_unused3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  34);
}

/**
 * @brief Decode a seeker_feedback message into a struct
 *
 * @param msg The message to decode
 * @param seeker_feedback C-struct to decode the message contents into
 */
static inline void mavlink_msg_seeker_feedback_decode(const mavlink_message_t* msg, mavlink_seeker_feedback_t* seeker_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    seeker_feedback->time_usec = mavlink_msg_seeker_feedback_get_time_usec(msg);
    seeker_feedback->seq = mavlink_msg_seeker_feedback_get_seq(msg);
    seeker_feedback->horizon_dist = mavlink_msg_seeker_feedback_get_horizon_dist(msg);
    seeker_feedback->vertical_dist = mavlink_msg_seeker_feedback_get_vertical_dist(msg);
    seeker_feedback->unused1 = mavlink_msg_seeker_feedback_get_unused1(msg);
    seeker_feedback->gimbal_pitch = mavlink_msg_seeker_feedback_get_gimbal_pitch(msg);
    seeker_feedback->gimbal_yaw = mavlink_msg_seeker_feedback_get_gimbal_yaw(msg);
    seeker_feedback->att_roll = mavlink_msg_seeker_feedback_get_att_roll(msg);
    seeker_feedback->att_pitch = mavlink_msg_seeker_feedback_get_att_pitch(msg);
    seeker_feedback->rollrate = mavlink_msg_seeker_feedback_get_rollrate(msg);
    seeker_feedback->pitchrate = mavlink_msg_seeker_feedback_get_pitchrate(msg);
    seeker_feedback->yawrate = mavlink_msg_seeker_feedback_get_yawrate(msg);
    seeker_feedback->unused2 = mavlink_msg_seeker_feedback_get_unused2(msg);
    seeker_feedback->unused3 = mavlink_msg_seeker_feedback_get_unused3(msg);
    seeker_feedback->state_info_1 = mavlink_msg_seeker_feedback_get_state_info_1(msg);
    seeker_feedback->state_info_2 = mavlink_msg_seeker_feedback_get_state_info_2(msg);
    seeker_feedback->zoom_ratio = mavlink_msg_seeker_feedback_get_zoom_ratio(msg);
    seeker_feedback->anomaly_info = mavlink_msg_seeker_feedback_get_anomaly_info(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN? msg->len : MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN;
        memset(seeker_feedback, 0, MAVLINK_MSG_ID_SEEKER_FEEDBACK_LEN);
    memcpy(seeker_feedback, _MAV_PAYLOAD(msg), len);
#endif
}
