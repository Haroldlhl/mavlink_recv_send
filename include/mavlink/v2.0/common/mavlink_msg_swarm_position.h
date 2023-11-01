#pragma once
// MESSAGE SWARM_POSITION PACKING

#define MAVLINK_MSG_ID_SWARM_POSITION 201


typedef struct __mavlink_swarm_position_t {
 uint64_t time_usec; /*< [us]  Timestamp (micros since boot or Unix epoch)*/
 uint64_t time_utc_diff; /*< [ms] utc - timestamp*/
 uint64_t last_wp_time; /*< [ms] Last wp time (microseconds, UTC)*/
 float total_dist; /*< [m] Distance from previous waypoint to current (metres)*/
 float turn_dist; /*< [m] Reach a waypoint when we are close enough (metres)*/
 float dist_curr; /*< [m] Distance to previous waypoint (metres)*/
 int32_t lat; /*< [degE7] Latitude in 1E-7 degrees*/
 int32_t lon; /*< [degE7] Lontitude in 1E-7 degrees*/
 int32_t alt; /*< [mE3] Altitude in 1E-3 meters above MSL (millimetres)*/
 float vel_m_s; /*< [m/s] GPS ground speed (metres/sec)*/
 float vel_n_m_s; /*< [m/s] GPS North velocity (metres/sec)*/
 float vel_e_m_s; /*< [m/s] GPS East velocity (metres/sec)*/
 float vel_d_m_s; /*< [m/s] GPS Down velocity (metres/sec)*/
 float true_airspd; /*< [m/s] true airspeed (metres/sec)*/
 float cog_rad; /*< [rad] Course over ground (NOT heading, but direction of movement), -PI..PI, (radians)*/
 uint8_t vel_ned_valid; /*<  True if NED velocity is valid*/
 uint8_t gen_wp_flag; /*<  True if px4 request for new wp*/
 uint8_t sys_id; /*<  Mavsys_id*/
 uint8_t circle_mode; /*<  True if vehicle is in l1 circle mode*/
 uint8_t position_type; /*<  Current position setpoint type*/
 uint8_t seq; /*<  Sequence of this msg*/
} mavlink_swarm_position_t;

#define MAVLINK_MSG_ID_SWARM_POSITION_LEN 78
#define MAVLINK_MSG_ID_SWARM_POSITION_MIN_LEN 78
#define MAVLINK_MSG_ID_201_LEN 78
#define MAVLINK_MSG_ID_201_MIN_LEN 78

#define MAVLINK_MSG_ID_SWARM_POSITION_CRC 23
#define MAVLINK_MSG_ID_201_CRC 23



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SWARM_POSITION { \
    201, \
    "SWARM_POSITION", \
    21, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_swarm_position_t, time_usec) }, \
         { "time_utc_diff", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_swarm_position_t, time_utc_diff) }, \
         { "last_wp_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_swarm_position_t, last_wp_time) }, \
         { "total_dist", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_swarm_position_t, total_dist) }, \
         { "turn_dist", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_swarm_position_t, turn_dist) }, \
         { "dist_curr", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_swarm_position_t, dist_curr) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 36, offsetof(mavlink_swarm_position_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_swarm_position_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_swarm_position_t, alt) }, \
         { "vel_m_s", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_swarm_position_t, vel_m_s) }, \
         { "vel_n_m_s", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_swarm_position_t, vel_n_m_s) }, \
         { "vel_e_m_s", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_swarm_position_t, vel_e_m_s) }, \
         { "vel_d_m_s", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_swarm_position_t, vel_d_m_s) }, \
         { "true_airspd", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_swarm_position_t, true_airspd) }, \
         { "cog_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_swarm_position_t, cog_rad) }, \
         { "vel_ned_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 72, offsetof(mavlink_swarm_position_t, vel_ned_valid) }, \
         { "gen_wp_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 73, offsetof(mavlink_swarm_position_t, gen_wp_flag) }, \
         { "sys_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 74, offsetof(mavlink_swarm_position_t, sys_id) }, \
         { "circle_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 75, offsetof(mavlink_swarm_position_t, circle_mode) }, \
         { "position_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 76, offsetof(mavlink_swarm_position_t, position_type) }, \
         { "seq", NULL, MAVLINK_TYPE_UINT8_T, 0, 77, offsetof(mavlink_swarm_position_t, seq) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SWARM_POSITION { \
    "SWARM_POSITION", \
    21, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_swarm_position_t, time_usec) }, \
         { "time_utc_diff", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_swarm_position_t, time_utc_diff) }, \
         { "last_wp_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_swarm_position_t, last_wp_time) }, \
         { "total_dist", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_swarm_position_t, total_dist) }, \
         { "turn_dist", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_swarm_position_t, turn_dist) }, \
         { "dist_curr", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_swarm_position_t, dist_curr) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 36, offsetof(mavlink_swarm_position_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_swarm_position_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_swarm_position_t, alt) }, \
         { "vel_m_s", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_swarm_position_t, vel_m_s) }, \
         { "vel_n_m_s", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_swarm_position_t, vel_n_m_s) }, \
         { "vel_e_m_s", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_swarm_position_t, vel_e_m_s) }, \
         { "vel_d_m_s", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_swarm_position_t, vel_d_m_s) }, \
         { "true_airspd", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_swarm_position_t, true_airspd) }, \
         { "cog_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_swarm_position_t, cog_rad) }, \
         { "vel_ned_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 72, offsetof(mavlink_swarm_position_t, vel_ned_valid) }, \
         { "gen_wp_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 73, offsetof(mavlink_swarm_position_t, gen_wp_flag) }, \
         { "sys_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 74, offsetof(mavlink_swarm_position_t, sys_id) }, \
         { "circle_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 75, offsetof(mavlink_swarm_position_t, circle_mode) }, \
         { "position_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 76, offsetof(mavlink_swarm_position_t, position_type) }, \
         { "seq", NULL, MAVLINK_TYPE_UINT8_T, 0, 77, offsetof(mavlink_swarm_position_t, seq) }, \
         } \
}
#endif

/**
 * @brief Pack a swarm_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us]  Timestamp (micros since boot or Unix epoch)
 * @param time_utc_diff [ms] utc - timestamp
 * @param last_wp_time [ms] Last wp time (microseconds, UTC)
 * @param total_dist [m] Distance from previous waypoint to current (metres)
 * @param turn_dist [m] Reach a waypoint when we are close enough (metres)
 * @param dist_curr [m] Distance to previous waypoint (metres)
 * @param lat [degE7] Latitude in 1E-7 degrees
 * @param lon [degE7] Lontitude in 1E-7 degrees
 * @param alt [mE3] Altitude in 1E-3 meters above MSL (millimetres)
 * @param vel_m_s [m/s] GPS ground speed (metres/sec)
 * @param vel_n_m_s [m/s] GPS North velocity (metres/sec)
 * @param vel_e_m_s [m/s] GPS East velocity (metres/sec)
 * @param vel_d_m_s [m/s] GPS Down velocity (metres/sec)
 * @param true_airspd [m/s] true airspeed (metres/sec)
 * @param cog_rad [rad] Course over ground (NOT heading, but direction of movement), -PI..PI, (radians)
 * @param vel_ned_valid  True if NED velocity is valid
 * @param gen_wp_flag  True if px4 request for new wp
 * @param sys_id  Mavsys_id
 * @param circle_mode  True if vehicle is in l1 circle mode
 * @param position_type  Current position setpoint type
 * @param seq  Sequence of this msg
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_swarm_position_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint64_t time_utc_diff, uint64_t last_wp_time, float total_dist, float turn_dist, float dist_curr, int32_t lat, int32_t lon, int32_t alt, float vel_m_s, float vel_n_m_s, float vel_e_m_s, float vel_d_m_s, float true_airspd, float cog_rad, uint8_t vel_ned_valid, uint8_t gen_wp_flag, uint8_t sys_id, uint8_t circle_mode, uint8_t position_type, uint8_t seq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SWARM_POSITION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_utc_diff);
    _mav_put_uint64_t(buf, 16, last_wp_time);
    _mav_put_float(buf, 24, total_dist);
    _mav_put_float(buf, 28, turn_dist);
    _mav_put_float(buf, 32, dist_curr);
    _mav_put_int32_t(buf, 36, lat);
    _mav_put_int32_t(buf, 40, lon);
    _mav_put_int32_t(buf, 44, alt);
    _mav_put_float(buf, 48, vel_m_s);
    _mav_put_float(buf, 52, vel_n_m_s);
    _mav_put_float(buf, 56, vel_e_m_s);
    _mav_put_float(buf, 60, vel_d_m_s);
    _mav_put_float(buf, 64, true_airspd);
    _mav_put_float(buf, 68, cog_rad);
    _mav_put_uint8_t(buf, 72, vel_ned_valid);
    _mav_put_uint8_t(buf, 73, gen_wp_flag);
    _mav_put_uint8_t(buf, 74, sys_id);
    _mav_put_uint8_t(buf, 75, circle_mode);
    _mav_put_uint8_t(buf, 76, position_type);
    _mav_put_uint8_t(buf, 77, seq);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SWARM_POSITION_LEN);
#else
    mavlink_swarm_position_t packet;
    packet.time_usec = time_usec;
    packet.time_utc_diff = time_utc_diff;
    packet.last_wp_time = last_wp_time;
    packet.total_dist = total_dist;
    packet.turn_dist = turn_dist;
    packet.dist_curr = dist_curr;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.vel_m_s = vel_m_s;
    packet.vel_n_m_s = vel_n_m_s;
    packet.vel_e_m_s = vel_e_m_s;
    packet.vel_d_m_s = vel_d_m_s;
    packet.true_airspd = true_airspd;
    packet.cog_rad = cog_rad;
    packet.vel_ned_valid = vel_ned_valid;
    packet.gen_wp_flag = gen_wp_flag;
    packet.sys_id = sys_id;
    packet.circle_mode = circle_mode;
    packet.position_type = position_type;
    packet.seq = seq;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SWARM_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SWARM_POSITION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SWARM_POSITION_MIN_LEN, MAVLINK_MSG_ID_SWARM_POSITION_LEN, MAVLINK_MSG_ID_SWARM_POSITION_CRC);
}

/**
 * @brief Pack a swarm_position message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us]  Timestamp (micros since boot or Unix epoch)
 * @param time_utc_diff [ms] utc - timestamp
 * @param last_wp_time [ms] Last wp time (microseconds, UTC)
 * @param total_dist [m] Distance from previous waypoint to current (metres)
 * @param turn_dist [m] Reach a waypoint when we are close enough (metres)
 * @param dist_curr [m] Distance to previous waypoint (metres)
 * @param lat [degE7] Latitude in 1E-7 degrees
 * @param lon [degE7] Lontitude in 1E-7 degrees
 * @param alt [mE3] Altitude in 1E-3 meters above MSL (millimetres)
 * @param vel_m_s [m/s] GPS ground speed (metres/sec)
 * @param vel_n_m_s [m/s] GPS North velocity (metres/sec)
 * @param vel_e_m_s [m/s] GPS East velocity (metres/sec)
 * @param vel_d_m_s [m/s] GPS Down velocity (metres/sec)
 * @param true_airspd [m/s] true airspeed (metres/sec)
 * @param cog_rad [rad] Course over ground (NOT heading, but direction of movement), -PI..PI, (radians)
 * @param vel_ned_valid  True if NED velocity is valid
 * @param gen_wp_flag  True if px4 request for new wp
 * @param sys_id  Mavsys_id
 * @param circle_mode  True if vehicle is in l1 circle mode
 * @param position_type  Current position setpoint type
 * @param seq  Sequence of this msg
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_swarm_position_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint64_t time_utc_diff,uint64_t last_wp_time,float total_dist,float turn_dist,float dist_curr,int32_t lat,int32_t lon,int32_t alt,float vel_m_s,float vel_n_m_s,float vel_e_m_s,float vel_d_m_s,float true_airspd,float cog_rad,uint8_t vel_ned_valid,uint8_t gen_wp_flag,uint8_t sys_id,uint8_t circle_mode,uint8_t position_type,uint8_t seq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SWARM_POSITION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_utc_diff);
    _mav_put_uint64_t(buf, 16, last_wp_time);
    _mav_put_float(buf, 24, total_dist);
    _mav_put_float(buf, 28, turn_dist);
    _mav_put_float(buf, 32, dist_curr);
    _mav_put_int32_t(buf, 36, lat);
    _mav_put_int32_t(buf, 40, lon);
    _mav_put_int32_t(buf, 44, alt);
    _mav_put_float(buf, 48, vel_m_s);
    _mav_put_float(buf, 52, vel_n_m_s);
    _mav_put_float(buf, 56, vel_e_m_s);
    _mav_put_float(buf, 60, vel_d_m_s);
    _mav_put_float(buf, 64, true_airspd);
    _mav_put_float(buf, 68, cog_rad);
    _mav_put_uint8_t(buf, 72, vel_ned_valid);
    _mav_put_uint8_t(buf, 73, gen_wp_flag);
    _mav_put_uint8_t(buf, 74, sys_id);
    _mav_put_uint8_t(buf, 75, circle_mode);
    _mav_put_uint8_t(buf, 76, position_type);
    _mav_put_uint8_t(buf, 77, seq);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SWARM_POSITION_LEN);
#else
    mavlink_swarm_position_t packet;
    packet.time_usec = time_usec;
    packet.time_utc_diff = time_utc_diff;
    packet.last_wp_time = last_wp_time;
    packet.total_dist = total_dist;
    packet.turn_dist = turn_dist;
    packet.dist_curr = dist_curr;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.vel_m_s = vel_m_s;
    packet.vel_n_m_s = vel_n_m_s;
    packet.vel_e_m_s = vel_e_m_s;
    packet.vel_d_m_s = vel_d_m_s;
    packet.true_airspd = true_airspd;
    packet.cog_rad = cog_rad;
    packet.vel_ned_valid = vel_ned_valid;
    packet.gen_wp_flag = gen_wp_flag;
    packet.sys_id = sys_id;
    packet.circle_mode = circle_mode;
    packet.position_type = position_type;
    packet.seq = seq;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SWARM_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SWARM_POSITION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SWARM_POSITION_MIN_LEN, MAVLINK_MSG_ID_SWARM_POSITION_LEN, MAVLINK_MSG_ID_SWARM_POSITION_CRC);
}

/**
 * @brief Encode a swarm_position struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param swarm_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_swarm_position_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_swarm_position_t* swarm_position)
{
    return mavlink_msg_swarm_position_pack(system_id, component_id, msg, swarm_position->time_usec, swarm_position->time_utc_diff, swarm_position->last_wp_time, swarm_position->total_dist, swarm_position->turn_dist, swarm_position->dist_curr, swarm_position->lat, swarm_position->lon, swarm_position->alt, swarm_position->vel_m_s, swarm_position->vel_n_m_s, swarm_position->vel_e_m_s, swarm_position->vel_d_m_s, swarm_position->true_airspd, swarm_position->cog_rad, swarm_position->vel_ned_valid, swarm_position->gen_wp_flag, swarm_position->sys_id, swarm_position->circle_mode, swarm_position->position_type, swarm_position->seq);
}

/**
 * @brief Encode a swarm_position struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param swarm_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_swarm_position_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_swarm_position_t* swarm_position)
{
    return mavlink_msg_swarm_position_pack_chan(system_id, component_id, chan, msg, swarm_position->time_usec, swarm_position->time_utc_diff, swarm_position->last_wp_time, swarm_position->total_dist, swarm_position->turn_dist, swarm_position->dist_curr, swarm_position->lat, swarm_position->lon, swarm_position->alt, swarm_position->vel_m_s, swarm_position->vel_n_m_s, swarm_position->vel_e_m_s, swarm_position->vel_d_m_s, swarm_position->true_airspd, swarm_position->cog_rad, swarm_position->vel_ned_valid, swarm_position->gen_wp_flag, swarm_position->sys_id, swarm_position->circle_mode, swarm_position->position_type, swarm_position->seq);
}

/**
 * @brief Send a swarm_position message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us]  Timestamp (micros since boot or Unix epoch)
 * @param time_utc_diff [ms] utc - timestamp
 * @param last_wp_time [ms] Last wp time (microseconds, UTC)
 * @param total_dist [m] Distance from previous waypoint to current (metres)
 * @param turn_dist [m] Reach a waypoint when we are close enough (metres)
 * @param dist_curr [m] Distance to previous waypoint (metres)
 * @param lat [degE7] Latitude in 1E-7 degrees
 * @param lon [degE7] Lontitude in 1E-7 degrees
 * @param alt [mE3] Altitude in 1E-3 meters above MSL (millimetres)
 * @param vel_m_s [m/s] GPS ground speed (metres/sec)
 * @param vel_n_m_s [m/s] GPS North velocity (metres/sec)
 * @param vel_e_m_s [m/s] GPS East velocity (metres/sec)
 * @param vel_d_m_s [m/s] GPS Down velocity (metres/sec)
 * @param true_airspd [m/s] true airspeed (metres/sec)
 * @param cog_rad [rad] Course over ground (NOT heading, but direction of movement), -PI..PI, (radians)
 * @param vel_ned_valid  True if NED velocity is valid
 * @param gen_wp_flag  True if px4 request for new wp
 * @param sys_id  Mavsys_id
 * @param circle_mode  True if vehicle is in l1 circle mode
 * @param position_type  Current position setpoint type
 * @param seq  Sequence of this msg
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_swarm_position_send(mavlink_channel_t chan, uint64_t time_usec, uint64_t time_utc_diff, uint64_t last_wp_time, float total_dist, float turn_dist, float dist_curr, int32_t lat, int32_t lon, int32_t alt, float vel_m_s, float vel_n_m_s, float vel_e_m_s, float vel_d_m_s, float true_airspd, float cog_rad, uint8_t vel_ned_valid, uint8_t gen_wp_flag, uint8_t sys_id, uint8_t circle_mode, uint8_t position_type, uint8_t seq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SWARM_POSITION_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_utc_diff);
    _mav_put_uint64_t(buf, 16, last_wp_time);
    _mav_put_float(buf, 24, total_dist);
    _mav_put_float(buf, 28, turn_dist);
    _mav_put_float(buf, 32, dist_curr);
    _mav_put_int32_t(buf, 36, lat);
    _mav_put_int32_t(buf, 40, lon);
    _mav_put_int32_t(buf, 44, alt);
    _mav_put_float(buf, 48, vel_m_s);
    _mav_put_float(buf, 52, vel_n_m_s);
    _mav_put_float(buf, 56, vel_e_m_s);
    _mav_put_float(buf, 60, vel_d_m_s);
    _mav_put_float(buf, 64, true_airspd);
    _mav_put_float(buf, 68, cog_rad);
    _mav_put_uint8_t(buf, 72, vel_ned_valid);
    _mav_put_uint8_t(buf, 73, gen_wp_flag);
    _mav_put_uint8_t(buf, 74, sys_id);
    _mav_put_uint8_t(buf, 75, circle_mode);
    _mav_put_uint8_t(buf, 76, position_type);
    _mav_put_uint8_t(buf, 77, seq);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SWARM_POSITION, buf, MAVLINK_MSG_ID_SWARM_POSITION_MIN_LEN, MAVLINK_MSG_ID_SWARM_POSITION_LEN, MAVLINK_MSG_ID_SWARM_POSITION_CRC);
#else
    mavlink_swarm_position_t packet;
    packet.time_usec = time_usec;
    packet.time_utc_diff = time_utc_diff;
    packet.last_wp_time = last_wp_time;
    packet.total_dist = total_dist;
    packet.turn_dist = turn_dist;
    packet.dist_curr = dist_curr;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.vel_m_s = vel_m_s;
    packet.vel_n_m_s = vel_n_m_s;
    packet.vel_e_m_s = vel_e_m_s;
    packet.vel_d_m_s = vel_d_m_s;
    packet.true_airspd = true_airspd;
    packet.cog_rad = cog_rad;
    packet.vel_ned_valid = vel_ned_valid;
    packet.gen_wp_flag = gen_wp_flag;
    packet.sys_id = sys_id;
    packet.circle_mode = circle_mode;
    packet.position_type = position_type;
    packet.seq = seq;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SWARM_POSITION, (const char *)&packet, MAVLINK_MSG_ID_SWARM_POSITION_MIN_LEN, MAVLINK_MSG_ID_SWARM_POSITION_LEN, MAVLINK_MSG_ID_SWARM_POSITION_CRC);
#endif
}

/**
 * @brief Send a swarm_position message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_swarm_position_send_struct(mavlink_channel_t chan, const mavlink_swarm_position_t* swarm_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_swarm_position_send(chan, swarm_position->time_usec, swarm_position->time_utc_diff, swarm_position->last_wp_time, swarm_position->total_dist, swarm_position->turn_dist, swarm_position->dist_curr, swarm_position->lat, swarm_position->lon, swarm_position->alt, swarm_position->vel_m_s, swarm_position->vel_n_m_s, swarm_position->vel_e_m_s, swarm_position->vel_d_m_s, swarm_position->true_airspd, swarm_position->cog_rad, swarm_position->vel_ned_valid, swarm_position->gen_wp_flag, swarm_position->sys_id, swarm_position->circle_mode, swarm_position->position_type, swarm_position->seq);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SWARM_POSITION, (const char *)swarm_position, MAVLINK_MSG_ID_SWARM_POSITION_MIN_LEN, MAVLINK_MSG_ID_SWARM_POSITION_LEN, MAVLINK_MSG_ID_SWARM_POSITION_CRC);
#endif
}

#if MAVLINK_MSG_ID_SWARM_POSITION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_swarm_position_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint64_t time_utc_diff, uint64_t last_wp_time, float total_dist, float turn_dist, float dist_curr, int32_t lat, int32_t lon, int32_t alt, float vel_m_s, float vel_n_m_s, float vel_e_m_s, float vel_d_m_s, float true_airspd, float cog_rad, uint8_t vel_ned_valid, uint8_t gen_wp_flag, uint8_t sys_id, uint8_t circle_mode, uint8_t position_type, uint8_t seq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, time_utc_diff);
    _mav_put_uint64_t(buf, 16, last_wp_time);
    _mav_put_float(buf, 24, total_dist);
    _mav_put_float(buf, 28, turn_dist);
    _mav_put_float(buf, 32, dist_curr);
    _mav_put_int32_t(buf, 36, lat);
    _mav_put_int32_t(buf, 40, lon);
    _mav_put_int32_t(buf, 44, alt);
    _mav_put_float(buf, 48, vel_m_s);
    _mav_put_float(buf, 52, vel_n_m_s);
    _mav_put_float(buf, 56, vel_e_m_s);
    _mav_put_float(buf, 60, vel_d_m_s);
    _mav_put_float(buf, 64, true_airspd);
    _mav_put_float(buf, 68, cog_rad);
    _mav_put_uint8_t(buf, 72, vel_ned_valid);
    _mav_put_uint8_t(buf, 73, gen_wp_flag);
    _mav_put_uint8_t(buf, 74, sys_id);
    _mav_put_uint8_t(buf, 75, circle_mode);
    _mav_put_uint8_t(buf, 76, position_type);
    _mav_put_uint8_t(buf, 77, seq);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SWARM_POSITION, buf, MAVLINK_MSG_ID_SWARM_POSITION_MIN_LEN, MAVLINK_MSG_ID_SWARM_POSITION_LEN, MAVLINK_MSG_ID_SWARM_POSITION_CRC);
#else
    mavlink_swarm_position_t *packet = (mavlink_swarm_position_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->time_utc_diff = time_utc_diff;
    packet->last_wp_time = last_wp_time;
    packet->total_dist = total_dist;
    packet->turn_dist = turn_dist;
    packet->dist_curr = dist_curr;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt = alt;
    packet->vel_m_s = vel_m_s;
    packet->vel_n_m_s = vel_n_m_s;
    packet->vel_e_m_s = vel_e_m_s;
    packet->vel_d_m_s = vel_d_m_s;
    packet->true_airspd = true_airspd;
    packet->cog_rad = cog_rad;
    packet->vel_ned_valid = vel_ned_valid;
    packet->gen_wp_flag = gen_wp_flag;
    packet->sys_id = sys_id;
    packet->circle_mode = circle_mode;
    packet->position_type = position_type;
    packet->seq = seq;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SWARM_POSITION, (const char *)packet, MAVLINK_MSG_ID_SWARM_POSITION_MIN_LEN, MAVLINK_MSG_ID_SWARM_POSITION_LEN, MAVLINK_MSG_ID_SWARM_POSITION_CRC);
#endif
}
#endif

#endif

// MESSAGE SWARM_POSITION UNPACKING


/**
 * @brief Get field time_usec from swarm_position message
 *
 * @return [us]  Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_swarm_position_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field time_utc_diff from swarm_position message
 *
 * @return [ms] utc - timestamp
 */
static inline uint64_t mavlink_msg_swarm_position_get_time_utc_diff(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field last_wp_time from swarm_position message
 *
 * @return [ms] Last wp time (microseconds, UTC)
 */
static inline uint64_t mavlink_msg_swarm_position_get_last_wp_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  16);
}

/**
 * @brief Get field total_dist from swarm_position message
 *
 * @return [m] Distance from previous waypoint to current (metres)
 */
static inline float mavlink_msg_swarm_position_get_total_dist(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field turn_dist from swarm_position message
 *
 * @return [m] Reach a waypoint when we are close enough (metres)
 */
static inline float mavlink_msg_swarm_position_get_turn_dist(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field dist_curr from swarm_position message
 *
 * @return [m] Distance to previous waypoint (metres)
 */
static inline float mavlink_msg_swarm_position_get_dist_curr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field lat from swarm_position message
 *
 * @return [degE7] Latitude in 1E-7 degrees
 */
static inline int32_t mavlink_msg_swarm_position_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  36);
}

/**
 * @brief Get field lon from swarm_position message
 *
 * @return [degE7] Lontitude in 1E-7 degrees
 */
static inline int32_t mavlink_msg_swarm_position_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  40);
}

/**
 * @brief Get field alt from swarm_position message
 *
 * @return [mE3] Altitude in 1E-3 meters above MSL (millimetres)
 */
static inline int32_t mavlink_msg_swarm_position_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  44);
}

/**
 * @brief Get field vel_m_s from swarm_position message
 *
 * @return [m/s] GPS ground speed (metres/sec)
 */
static inline float mavlink_msg_swarm_position_get_vel_m_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field vel_n_m_s from swarm_position message
 *
 * @return [m/s] GPS North velocity (metres/sec)
 */
static inline float mavlink_msg_swarm_position_get_vel_n_m_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field vel_e_m_s from swarm_position message
 *
 * @return [m/s] GPS East velocity (metres/sec)
 */
static inline float mavlink_msg_swarm_position_get_vel_e_m_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field vel_d_m_s from swarm_position message
 *
 * @return [m/s] GPS Down velocity (metres/sec)
 */
static inline float mavlink_msg_swarm_position_get_vel_d_m_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field true_airspd from swarm_position message
 *
 * @return [m/s] true airspeed (metres/sec)
 */
static inline float mavlink_msg_swarm_position_get_true_airspd(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Get field cog_rad from swarm_position message
 *
 * @return [rad] Course over ground (NOT heading, but direction of movement), -PI..PI, (radians)
 */
static inline float mavlink_msg_swarm_position_get_cog_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  68);
}

/**
 * @brief Get field vel_ned_valid from swarm_position message
 *
 * @return  True if NED velocity is valid
 */
static inline uint8_t mavlink_msg_swarm_position_get_vel_ned_valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  72);
}

/**
 * @brief Get field gen_wp_flag from swarm_position message
 *
 * @return  True if px4 request for new wp
 */
static inline uint8_t mavlink_msg_swarm_position_get_gen_wp_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  73);
}

/**
 * @brief Get field sys_id from swarm_position message
 *
 * @return  Mavsys_id
 */
static inline uint8_t mavlink_msg_swarm_position_get_sys_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  74);
}

/**
 * @brief Get field circle_mode from swarm_position message
 *
 * @return  True if vehicle is in l1 circle mode
 */
static inline uint8_t mavlink_msg_swarm_position_get_circle_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  75);
}

/**
 * @brief Get field position_type from swarm_position message
 *
 * @return  Current position setpoint type
 */
static inline uint8_t mavlink_msg_swarm_position_get_position_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  76);
}

/**
 * @brief Get field seq from swarm_position message
 *
 * @return  Sequence of this msg
 */
static inline uint8_t mavlink_msg_swarm_position_get_seq(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  77);
}

/**
 * @brief Decode a swarm_position message into a struct
 *
 * @param msg The message to decode
 * @param swarm_position C-struct to decode the message contents into
 */
static inline void mavlink_msg_swarm_position_decode(const mavlink_message_t* msg, mavlink_swarm_position_t* swarm_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    swarm_position->time_usec = mavlink_msg_swarm_position_get_time_usec(msg);
    swarm_position->time_utc_diff = mavlink_msg_swarm_position_get_time_utc_diff(msg);
    swarm_position->last_wp_time = mavlink_msg_swarm_position_get_last_wp_time(msg);
    swarm_position->total_dist = mavlink_msg_swarm_position_get_total_dist(msg);
    swarm_position->turn_dist = mavlink_msg_swarm_position_get_turn_dist(msg);
    swarm_position->dist_curr = mavlink_msg_swarm_position_get_dist_curr(msg);
    swarm_position->lat = mavlink_msg_swarm_position_get_lat(msg);
    swarm_position->lon = mavlink_msg_swarm_position_get_lon(msg);
    swarm_position->alt = mavlink_msg_swarm_position_get_alt(msg);
    swarm_position->vel_m_s = mavlink_msg_swarm_position_get_vel_m_s(msg);
    swarm_position->vel_n_m_s = mavlink_msg_swarm_position_get_vel_n_m_s(msg);
    swarm_position->vel_e_m_s = mavlink_msg_swarm_position_get_vel_e_m_s(msg);
    swarm_position->vel_d_m_s = mavlink_msg_swarm_position_get_vel_d_m_s(msg);
    swarm_position->true_airspd = mavlink_msg_swarm_position_get_true_airspd(msg);
    swarm_position->cog_rad = mavlink_msg_swarm_position_get_cog_rad(msg);
    swarm_position->vel_ned_valid = mavlink_msg_swarm_position_get_vel_ned_valid(msg);
    swarm_position->gen_wp_flag = mavlink_msg_swarm_position_get_gen_wp_flag(msg);
    swarm_position->sys_id = mavlink_msg_swarm_position_get_sys_id(msg);
    swarm_position->circle_mode = mavlink_msg_swarm_position_get_circle_mode(msg);
    swarm_position->position_type = mavlink_msg_swarm_position_get_position_type(msg);
    swarm_position->seq = mavlink_msg_swarm_position_get_seq(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SWARM_POSITION_LEN? msg->len : MAVLINK_MSG_ID_SWARM_POSITION_LEN;
        memset(swarm_position, 0, MAVLINK_MSG_ID_SWARM_POSITION_LEN);
    memcpy(swarm_position, _MAV_PAYLOAD(msg), len);
#endif
}
