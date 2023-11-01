#pragma once
// MESSAGE VISUAL_INERTIAL_NAVIGATION PACKING

#define MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION 203


typedef struct __mavlink_visual_inertial_navigation_t {
 uint32_t time_msec; /*< [ms] machine time, accuracy 2ms.*/
 int32_t lat; /*< [degE7] Latitude*/
 int32_t lon; /*< [degE7] Longitude*/
 int32_t height; /*< [E-3 m] Height.*/
 int32_t roll_speed; /*< [degE4/s]  roll rate*/
 int32_t pitch_speed; /*< [degE4/s]  pitch rate*/
 int32_t yaw_speed; /*< [degE4/s]  yaw rate*/
 int32_t roll; /*< [degE4]  roll*/
 int32_t pitch; /*< [degE4]  pitch */
 uint32_t yaw; /*< [degE4]  yaw */
 int32_t ax; /*< [E-4 m/s/s] X Acceleration in projectile coordinate system, not include earth's gravitational acceleration*/
 int32_t ay; /*< [E-4 m/s/s] Y Acceleration*/
 int32_t az; /*< [E-4 m/s/s] Z Acceleration*/
 int32_t lat_target; /*< [degE7] Latitude*/
 int32_t lon_target; /*< [degE7] Longitude*/
 int32_t height_target; /*< [E-2 m] Height.*/
 int32_t lat_plan; /*< [degE7] Latitude of planned waypoint*/
 int32_t lon_plan; /*< [degE7] Longitude of planned waypoint*/
 int32_t height_plan; /*< [E-2 m] Height of planned waypoint.*/
 uint32_t remain_time_total; /*< [E-2 s] multi_ammunition arrive at same time enter terminal guidance countdown.*/
 uint32_t remain_time_next_waypoint; /*< [E-2 s] countdown time for this ammunition to next waypoint.*/
 int16_t v_e; /*< [0.01m/s] GPS velocity in east direction in earth-fixed ENU frame*/
 int16_t v_n; /*< [0.01m/s] GPS velocity in north direction in earth-fixed ENU frame*/
 int16_t v_u; /*< [0.01m/s] GPS velocity in up direction in earth-fixed ENU frame*/
 int16_t velocity; /*< [0.01m/s] Resultant GPS velocity  in earth-fixed ENU frame*/
 int16_t mean_speed_next_waypoint; /*< [millimeter/s] average speed to arrive the next waypoint*/
 int16_t strike_target_x; /*< [px] location of target needs to strike, in image coordinate, upper-left point is the origin point */
 int16_t strike_target_y; /*< [px] location of target needs to strike, */
 char ammunition_id; /*<  from 0x01 to 0xA0.*/
 char task_phase_flag; /*<  0x11: preparation; 0x22: detect; 0x33: tail_after; 0x44:strike*/
 char strike_call_flag; /*<  0x00: not call;  others: id of nodes which were called to tail after target*/
 char response_call_flag; /*<  0x00: not response;  others: id of nodes which respond to tail after target*/
 char replan_flag; /*<  0x11: no need for replanning;  0x22: node(s) not arrive in time, replan */
} mavlink_visual_inertial_navigation_t;

#define MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN 103
#define MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_MIN_LEN 103
#define MAVLINK_MSG_ID_203_LEN 103
#define MAVLINK_MSG_ID_203_MIN_LEN 103

#define MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_CRC 130
#define MAVLINK_MSG_ID_203_CRC 130



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VISUAL_INERTIAL_NAVIGATION { \
    203, \
    "VISUAL_INERTIAL_NAVIGATION", \
    33, \
    {  { "ammunition_id", NULL, MAVLINK_TYPE_CHAR, 0, 98, offsetof(mavlink_visual_inertial_navigation_t, ammunition_id) }, \
         { "time_msec", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_visual_inertial_navigation_t, time_msec) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_visual_inertial_navigation_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_visual_inertial_navigation_t, lon) }, \
         { "height", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_visual_inertial_navigation_t, height) }, \
         { "roll_speed", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_visual_inertial_navigation_t, roll_speed) }, \
         { "pitch_speed", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_visual_inertial_navigation_t, pitch_speed) }, \
         { "yaw_speed", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_visual_inertial_navigation_t, yaw_speed) }, \
         { "roll", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_visual_inertial_navigation_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_visual_inertial_navigation_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_UINT32_T, 0, 36, offsetof(mavlink_visual_inertial_navigation_t, yaw) }, \
         { "v_e", NULL, MAVLINK_TYPE_INT16_T, 0, 84, offsetof(mavlink_visual_inertial_navigation_t, v_e) }, \
         { "v_n", NULL, MAVLINK_TYPE_INT16_T, 0, 86, offsetof(mavlink_visual_inertial_navigation_t, v_n) }, \
         { "v_u", NULL, MAVLINK_TYPE_INT16_T, 0, 88, offsetof(mavlink_visual_inertial_navigation_t, v_u) }, \
         { "velocity", NULL, MAVLINK_TYPE_INT16_T, 0, 90, offsetof(mavlink_visual_inertial_navigation_t, velocity) }, \
         { "ax", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_visual_inertial_navigation_t, ax) }, \
         { "ay", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_visual_inertial_navigation_t, ay) }, \
         { "az", NULL, MAVLINK_TYPE_INT32_T, 0, 48, offsetof(mavlink_visual_inertial_navigation_t, az) }, \
         { "task_phase_flag", NULL, MAVLINK_TYPE_CHAR, 0, 99, offsetof(mavlink_visual_inertial_navigation_t, task_phase_flag) }, \
         { "lat_target", NULL, MAVLINK_TYPE_INT32_T, 0, 52, offsetof(mavlink_visual_inertial_navigation_t, lat_target) }, \
         { "lon_target", NULL, MAVLINK_TYPE_INT32_T, 0, 56, offsetof(mavlink_visual_inertial_navigation_t, lon_target) }, \
         { "height_target", NULL, MAVLINK_TYPE_INT32_T, 0, 60, offsetof(mavlink_visual_inertial_navigation_t, height_target) }, \
         { "strike_call_flag", NULL, MAVLINK_TYPE_CHAR, 0, 100, offsetof(mavlink_visual_inertial_navigation_t, strike_call_flag) }, \
         { "response_call_flag", NULL, MAVLINK_TYPE_CHAR, 0, 101, offsetof(mavlink_visual_inertial_navigation_t, response_call_flag) }, \
         { "replan_flag", NULL, MAVLINK_TYPE_CHAR, 0, 102, offsetof(mavlink_visual_inertial_navigation_t, replan_flag) }, \
         { "lat_plan", NULL, MAVLINK_TYPE_INT32_T, 0, 64, offsetof(mavlink_visual_inertial_navigation_t, lat_plan) }, \
         { "lon_plan", NULL, MAVLINK_TYPE_INT32_T, 0, 68, offsetof(mavlink_visual_inertial_navigation_t, lon_plan) }, \
         { "height_plan", NULL, MAVLINK_TYPE_INT32_T, 0, 72, offsetof(mavlink_visual_inertial_navigation_t, height_plan) }, \
         { "remain_time_total", NULL, MAVLINK_TYPE_UINT32_T, 0, 76, offsetof(mavlink_visual_inertial_navigation_t, remain_time_total) }, \
         { "remain_time_next_waypoint", NULL, MAVLINK_TYPE_UINT32_T, 0, 80, offsetof(mavlink_visual_inertial_navigation_t, remain_time_next_waypoint) }, \
         { "mean_speed_next_waypoint", NULL, MAVLINK_TYPE_INT16_T, 0, 92, offsetof(mavlink_visual_inertial_navigation_t, mean_speed_next_waypoint) }, \
         { "strike_target_x", NULL, MAVLINK_TYPE_INT16_T, 0, 94, offsetof(mavlink_visual_inertial_navigation_t, strike_target_x) }, \
         { "strike_target_y", NULL, MAVLINK_TYPE_INT16_T, 0, 96, offsetof(mavlink_visual_inertial_navigation_t, strike_target_y) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VISUAL_INERTIAL_NAVIGATION { \
    "VISUAL_INERTIAL_NAVIGATION", \
    33, \
    {  { "ammunition_id", NULL, MAVLINK_TYPE_CHAR, 0, 98, offsetof(mavlink_visual_inertial_navigation_t, ammunition_id) }, \
         { "time_msec", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_visual_inertial_navigation_t, time_msec) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_visual_inertial_navigation_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_visual_inertial_navigation_t, lon) }, \
         { "height", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_visual_inertial_navigation_t, height) }, \
         { "roll_speed", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_visual_inertial_navigation_t, roll_speed) }, \
         { "pitch_speed", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_visual_inertial_navigation_t, pitch_speed) }, \
         { "yaw_speed", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_visual_inertial_navigation_t, yaw_speed) }, \
         { "roll", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_visual_inertial_navigation_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_visual_inertial_navigation_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_UINT32_T, 0, 36, offsetof(mavlink_visual_inertial_navigation_t, yaw) }, \
         { "v_e", NULL, MAVLINK_TYPE_INT16_T, 0, 84, offsetof(mavlink_visual_inertial_navigation_t, v_e) }, \
         { "v_n", NULL, MAVLINK_TYPE_INT16_T, 0, 86, offsetof(mavlink_visual_inertial_navigation_t, v_n) }, \
         { "v_u", NULL, MAVLINK_TYPE_INT16_T, 0, 88, offsetof(mavlink_visual_inertial_navigation_t, v_u) }, \
         { "velocity", NULL, MAVLINK_TYPE_INT16_T, 0, 90, offsetof(mavlink_visual_inertial_navigation_t, velocity) }, \
         { "ax", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_visual_inertial_navigation_t, ax) }, \
         { "ay", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_visual_inertial_navigation_t, ay) }, \
         { "az", NULL, MAVLINK_TYPE_INT32_T, 0, 48, offsetof(mavlink_visual_inertial_navigation_t, az) }, \
         { "task_phase_flag", NULL, MAVLINK_TYPE_CHAR, 0, 99, offsetof(mavlink_visual_inertial_navigation_t, task_phase_flag) }, \
         { "lat_target", NULL, MAVLINK_TYPE_INT32_T, 0, 52, offsetof(mavlink_visual_inertial_navigation_t, lat_target) }, \
         { "lon_target", NULL, MAVLINK_TYPE_INT32_T, 0, 56, offsetof(mavlink_visual_inertial_navigation_t, lon_target) }, \
         { "height_target", NULL, MAVLINK_TYPE_INT32_T, 0, 60, offsetof(mavlink_visual_inertial_navigation_t, height_target) }, \
         { "strike_call_flag", NULL, MAVLINK_TYPE_CHAR, 0, 100, offsetof(mavlink_visual_inertial_navigation_t, strike_call_flag) }, \
         { "response_call_flag", NULL, MAVLINK_TYPE_CHAR, 0, 101, offsetof(mavlink_visual_inertial_navigation_t, response_call_flag) }, \
         { "replan_flag", NULL, MAVLINK_TYPE_CHAR, 0, 102, offsetof(mavlink_visual_inertial_navigation_t, replan_flag) }, \
         { "lat_plan", NULL, MAVLINK_TYPE_INT32_T, 0, 64, offsetof(mavlink_visual_inertial_navigation_t, lat_plan) }, \
         { "lon_plan", NULL, MAVLINK_TYPE_INT32_T, 0, 68, offsetof(mavlink_visual_inertial_navigation_t, lon_plan) }, \
         { "height_plan", NULL, MAVLINK_TYPE_INT32_T, 0, 72, offsetof(mavlink_visual_inertial_navigation_t, height_plan) }, \
         { "remain_time_total", NULL, MAVLINK_TYPE_UINT32_T, 0, 76, offsetof(mavlink_visual_inertial_navigation_t, remain_time_total) }, \
         { "remain_time_next_waypoint", NULL, MAVLINK_TYPE_UINT32_T, 0, 80, offsetof(mavlink_visual_inertial_navigation_t, remain_time_next_waypoint) }, \
         { "mean_speed_next_waypoint", NULL, MAVLINK_TYPE_INT16_T, 0, 92, offsetof(mavlink_visual_inertial_navigation_t, mean_speed_next_waypoint) }, \
         { "strike_target_x", NULL, MAVLINK_TYPE_INT16_T, 0, 94, offsetof(mavlink_visual_inertial_navigation_t, strike_target_x) }, \
         { "strike_target_y", NULL, MAVLINK_TYPE_INT16_T, 0, 96, offsetof(mavlink_visual_inertial_navigation_t, strike_target_y) }, \
         } \
}
#endif

/**
 * @brief Pack a visual_inertial_navigation message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param ammunition_id  from 0x01 to 0xA0.
 * @param time_msec [ms] machine time, accuracy 2ms.
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
 * @param ax [E-4 m/s/s] X Acceleration in projectile coordinate system, not include earth's gravitational acceleration
 * @param ay [E-4 m/s/s] Y Acceleration
 * @param az [E-4 m/s/s] Z Acceleration
 * @param task_phase_flag  0x11: preparation; 0x22: detect; 0x33: tail_after; 0x44:strike
 * @param lat_target [degE7] Latitude
 * @param lon_target [degE7] Longitude
 * @param height_target [E-2 m] Height.
 * @param strike_call_flag  0x00: not call;  others: id of nodes which were called to tail after target
 * @param response_call_flag  0x00: not response;  others: id of nodes which respond to tail after target
 * @param replan_flag  0x11: no need for replanning;  0x22: node(s) not arrive in time, replan 
 * @param lat_plan [degE7] Latitude of planned waypoint
 * @param lon_plan [degE7] Longitude of planned waypoint
 * @param height_plan [E-2 m] Height of planned waypoint.
 * @param remain_time_total [E-2 s] multi_ammunition arrive at same time enter terminal guidance countdown.
 * @param remain_time_next_waypoint [E-2 s] countdown time for this ammunition to next waypoint.
 * @param mean_speed_next_waypoint [millimeter/s] average speed to arrive the next waypoint
 * @param strike_target_x [px] location of target needs to strike, in image coordinate, upper-left point is the origin point 
 * @param strike_target_y [px] location of target needs to strike, 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_visual_inertial_navigation_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               char ammunition_id, uint32_t time_msec, int32_t lat, int32_t lon, int32_t height, int32_t roll_speed, int32_t pitch_speed, int32_t yaw_speed, int32_t roll, int32_t pitch, uint32_t yaw, int16_t v_e, int16_t v_n, int16_t v_u, int16_t velocity, int32_t ax, int32_t ay, int32_t az, char task_phase_flag, int32_t lat_target, int32_t lon_target, int32_t height_target, char strike_call_flag, char response_call_flag, char replan_flag, int32_t lat_plan, int32_t lon_plan, int32_t height_plan, uint32_t remain_time_total, uint32_t remain_time_next_waypoint, int16_t mean_speed_next_waypoint, int16_t strike_target_x, int16_t strike_target_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN];
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
    _mav_put_int32_t(buf, 40, ax);
    _mav_put_int32_t(buf, 44, ay);
    _mav_put_int32_t(buf, 48, az);
    _mav_put_int32_t(buf, 52, lat_target);
    _mav_put_int32_t(buf, 56, lon_target);
    _mav_put_int32_t(buf, 60, height_target);
    _mav_put_int32_t(buf, 64, lat_plan);
    _mav_put_int32_t(buf, 68, lon_plan);
    _mav_put_int32_t(buf, 72, height_plan);
    _mav_put_uint32_t(buf, 76, remain_time_total);
    _mav_put_uint32_t(buf, 80, remain_time_next_waypoint);
    _mav_put_int16_t(buf, 84, v_e);
    _mav_put_int16_t(buf, 86, v_n);
    _mav_put_int16_t(buf, 88, v_u);
    _mav_put_int16_t(buf, 90, velocity);
    _mav_put_int16_t(buf, 92, mean_speed_next_waypoint);
    _mav_put_int16_t(buf, 94, strike_target_x);
    _mav_put_int16_t(buf, 96, strike_target_y);
    _mav_put_char(buf, 98, ammunition_id);
    _mav_put_char(buf, 99, task_phase_flag);
    _mav_put_char(buf, 100, strike_call_flag);
    _mav_put_char(buf, 101, response_call_flag);
    _mav_put_char(buf, 102, replan_flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN);
#else
    mavlink_visual_inertial_navigation_t packet;
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
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.lat_target = lat_target;
    packet.lon_target = lon_target;
    packet.height_target = height_target;
    packet.lat_plan = lat_plan;
    packet.lon_plan = lon_plan;
    packet.height_plan = height_plan;
    packet.remain_time_total = remain_time_total;
    packet.remain_time_next_waypoint = remain_time_next_waypoint;
    packet.v_e = v_e;
    packet.v_n = v_n;
    packet.v_u = v_u;
    packet.velocity = velocity;
    packet.mean_speed_next_waypoint = mean_speed_next_waypoint;
    packet.strike_target_x = strike_target_x;
    packet.strike_target_y = strike_target_y;
    packet.ammunition_id = ammunition_id;
    packet.task_phase_flag = task_phase_flag;
    packet.strike_call_flag = strike_call_flag;
    packet.response_call_flag = response_call_flag;
    packet.replan_flag = replan_flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_CRC);
}

/**
 * @brief Pack a visual_inertial_navigation message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ammunition_id  from 0x01 to 0xA0.
 * @param time_msec [ms] machine time, accuracy 2ms.
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
 * @param ax [E-4 m/s/s] X Acceleration in projectile coordinate system, not include earth's gravitational acceleration
 * @param ay [E-4 m/s/s] Y Acceleration
 * @param az [E-4 m/s/s] Z Acceleration
 * @param task_phase_flag  0x11: preparation; 0x22: detect; 0x33: tail_after; 0x44:strike
 * @param lat_target [degE7] Latitude
 * @param lon_target [degE7] Longitude
 * @param height_target [E-2 m] Height.
 * @param strike_call_flag  0x00: not call;  others: id of nodes which were called to tail after target
 * @param response_call_flag  0x00: not response;  others: id of nodes which respond to tail after target
 * @param replan_flag  0x11: no need for replanning;  0x22: node(s) not arrive in time, replan 
 * @param lat_plan [degE7] Latitude of planned waypoint
 * @param lon_plan [degE7] Longitude of planned waypoint
 * @param height_plan [E-2 m] Height of planned waypoint.
 * @param remain_time_total [E-2 s] multi_ammunition arrive at same time enter terminal guidance countdown.
 * @param remain_time_next_waypoint [E-2 s] countdown time for this ammunition to next waypoint.
 * @param mean_speed_next_waypoint [millimeter/s] average speed to arrive the next waypoint
 * @param strike_target_x [px] location of target needs to strike, in image coordinate, upper-left point is the origin point 
 * @param strike_target_y [px] location of target needs to strike, 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_visual_inertial_navigation_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   char ammunition_id,uint32_t time_msec,int32_t lat,int32_t lon,int32_t height,int32_t roll_speed,int32_t pitch_speed,int32_t yaw_speed,int32_t roll,int32_t pitch,uint32_t yaw,int16_t v_e,int16_t v_n,int16_t v_u,int16_t velocity,int32_t ax,int32_t ay,int32_t az,char task_phase_flag,int32_t lat_target,int32_t lon_target,int32_t height_target,char strike_call_flag,char response_call_flag,char replan_flag,int32_t lat_plan,int32_t lon_plan,int32_t height_plan,uint32_t remain_time_total,uint32_t remain_time_next_waypoint,int16_t mean_speed_next_waypoint,int16_t strike_target_x,int16_t strike_target_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN];
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
    _mav_put_int32_t(buf, 40, ax);
    _mav_put_int32_t(buf, 44, ay);
    _mav_put_int32_t(buf, 48, az);
    _mav_put_int32_t(buf, 52, lat_target);
    _mav_put_int32_t(buf, 56, lon_target);
    _mav_put_int32_t(buf, 60, height_target);
    _mav_put_int32_t(buf, 64, lat_plan);
    _mav_put_int32_t(buf, 68, lon_plan);
    _mav_put_int32_t(buf, 72, height_plan);
    _mav_put_uint32_t(buf, 76, remain_time_total);
    _mav_put_uint32_t(buf, 80, remain_time_next_waypoint);
    _mav_put_int16_t(buf, 84, v_e);
    _mav_put_int16_t(buf, 86, v_n);
    _mav_put_int16_t(buf, 88, v_u);
    _mav_put_int16_t(buf, 90, velocity);
    _mav_put_int16_t(buf, 92, mean_speed_next_waypoint);
    _mav_put_int16_t(buf, 94, strike_target_x);
    _mav_put_int16_t(buf, 96, strike_target_y);
    _mav_put_char(buf, 98, ammunition_id);
    _mav_put_char(buf, 99, task_phase_flag);
    _mav_put_char(buf, 100, strike_call_flag);
    _mav_put_char(buf, 101, response_call_flag);
    _mav_put_char(buf, 102, replan_flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN);
#else
    mavlink_visual_inertial_navigation_t packet;
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
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.lat_target = lat_target;
    packet.lon_target = lon_target;
    packet.height_target = height_target;
    packet.lat_plan = lat_plan;
    packet.lon_plan = lon_plan;
    packet.height_plan = height_plan;
    packet.remain_time_total = remain_time_total;
    packet.remain_time_next_waypoint = remain_time_next_waypoint;
    packet.v_e = v_e;
    packet.v_n = v_n;
    packet.v_u = v_u;
    packet.velocity = velocity;
    packet.mean_speed_next_waypoint = mean_speed_next_waypoint;
    packet.strike_target_x = strike_target_x;
    packet.strike_target_y = strike_target_y;
    packet.ammunition_id = ammunition_id;
    packet.task_phase_flag = task_phase_flag;
    packet.strike_call_flag = strike_call_flag;
    packet.response_call_flag = response_call_flag;
    packet.replan_flag = replan_flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_CRC);
}

/**
 * @brief Encode a visual_inertial_navigation struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param visual_inertial_navigation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_visual_inertial_navigation_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_visual_inertial_navigation_t* visual_inertial_navigation)
{
    return mavlink_msg_visual_inertial_navigation_pack(system_id, component_id, msg, visual_inertial_navigation->ammunition_id, visual_inertial_navigation->time_msec, visual_inertial_navigation->lat, visual_inertial_navigation->lon, visual_inertial_navigation->height, visual_inertial_navigation->roll_speed, visual_inertial_navigation->pitch_speed, visual_inertial_navigation->yaw_speed, visual_inertial_navigation->roll, visual_inertial_navigation->pitch, visual_inertial_navigation->yaw, visual_inertial_navigation->v_e, visual_inertial_navigation->v_n, visual_inertial_navigation->v_u, visual_inertial_navigation->velocity, visual_inertial_navigation->ax, visual_inertial_navigation->ay, visual_inertial_navigation->az, visual_inertial_navigation->task_phase_flag, visual_inertial_navigation->lat_target, visual_inertial_navigation->lon_target, visual_inertial_navigation->height_target, visual_inertial_navigation->strike_call_flag, visual_inertial_navigation->response_call_flag, visual_inertial_navigation->replan_flag, visual_inertial_navigation->lat_plan, visual_inertial_navigation->lon_plan, visual_inertial_navigation->height_plan, visual_inertial_navigation->remain_time_total, visual_inertial_navigation->remain_time_next_waypoint, visual_inertial_navigation->mean_speed_next_waypoint, visual_inertial_navigation->strike_target_x, visual_inertial_navigation->strike_target_y);
}

/**
 * @brief Encode a visual_inertial_navigation struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param visual_inertial_navigation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_visual_inertial_navigation_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_visual_inertial_navigation_t* visual_inertial_navigation)
{
    return mavlink_msg_visual_inertial_navigation_pack_chan(system_id, component_id, chan, msg, visual_inertial_navigation->ammunition_id, visual_inertial_navigation->time_msec, visual_inertial_navigation->lat, visual_inertial_navigation->lon, visual_inertial_navigation->height, visual_inertial_navigation->roll_speed, visual_inertial_navigation->pitch_speed, visual_inertial_navigation->yaw_speed, visual_inertial_navigation->roll, visual_inertial_navigation->pitch, visual_inertial_navigation->yaw, visual_inertial_navigation->v_e, visual_inertial_navigation->v_n, visual_inertial_navigation->v_u, visual_inertial_navigation->velocity, visual_inertial_navigation->ax, visual_inertial_navigation->ay, visual_inertial_navigation->az, visual_inertial_navigation->task_phase_flag, visual_inertial_navigation->lat_target, visual_inertial_navigation->lon_target, visual_inertial_navigation->height_target, visual_inertial_navigation->strike_call_flag, visual_inertial_navigation->response_call_flag, visual_inertial_navigation->replan_flag, visual_inertial_navigation->lat_plan, visual_inertial_navigation->lon_plan, visual_inertial_navigation->height_plan, visual_inertial_navigation->remain_time_total, visual_inertial_navigation->remain_time_next_waypoint, visual_inertial_navigation->mean_speed_next_waypoint, visual_inertial_navigation->strike_target_x, visual_inertial_navigation->strike_target_y);
}

/**
 * @brief Send a visual_inertial_navigation message
 * @param chan MAVLink channel to send the message
 *
 * @param ammunition_id  from 0x01 to 0xA0.
 * @param time_msec [ms] machine time, accuracy 2ms.
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
 * @param ax [E-4 m/s/s] X Acceleration in projectile coordinate system, not include earth's gravitational acceleration
 * @param ay [E-4 m/s/s] Y Acceleration
 * @param az [E-4 m/s/s] Z Acceleration
 * @param task_phase_flag  0x11: preparation; 0x22: detect; 0x33: tail_after; 0x44:strike
 * @param lat_target [degE7] Latitude
 * @param lon_target [degE7] Longitude
 * @param height_target [E-2 m] Height.
 * @param strike_call_flag  0x00: not call;  others: id of nodes which were called to tail after target
 * @param response_call_flag  0x00: not response;  others: id of nodes which respond to tail after target
 * @param replan_flag  0x11: no need for replanning;  0x22: node(s) not arrive in time, replan 
 * @param lat_plan [degE7] Latitude of planned waypoint
 * @param lon_plan [degE7] Longitude of planned waypoint
 * @param height_plan [E-2 m] Height of planned waypoint.
 * @param remain_time_total [E-2 s] multi_ammunition arrive at same time enter terminal guidance countdown.
 * @param remain_time_next_waypoint [E-2 s] countdown time for this ammunition to next waypoint.
 * @param mean_speed_next_waypoint [millimeter/s] average speed to arrive the next waypoint
 * @param strike_target_x [px] location of target needs to strike, in image coordinate, upper-left point is the origin point 
 * @param strike_target_y [px] location of target needs to strike, 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_visual_inertial_navigation_send(mavlink_channel_t chan, char ammunition_id, uint32_t time_msec, int32_t lat, int32_t lon, int32_t height, int32_t roll_speed, int32_t pitch_speed, int32_t yaw_speed, int32_t roll, int32_t pitch, uint32_t yaw, int16_t v_e, int16_t v_n, int16_t v_u, int16_t velocity, int32_t ax, int32_t ay, int32_t az, char task_phase_flag, int32_t lat_target, int32_t lon_target, int32_t height_target, char strike_call_flag, char response_call_flag, char replan_flag, int32_t lat_plan, int32_t lon_plan, int32_t height_plan, uint32_t remain_time_total, uint32_t remain_time_next_waypoint, int16_t mean_speed_next_waypoint, int16_t strike_target_x, int16_t strike_target_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN];
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
    _mav_put_int32_t(buf, 40, ax);
    _mav_put_int32_t(buf, 44, ay);
    _mav_put_int32_t(buf, 48, az);
    _mav_put_int32_t(buf, 52, lat_target);
    _mav_put_int32_t(buf, 56, lon_target);
    _mav_put_int32_t(buf, 60, height_target);
    _mav_put_int32_t(buf, 64, lat_plan);
    _mav_put_int32_t(buf, 68, lon_plan);
    _mav_put_int32_t(buf, 72, height_plan);
    _mav_put_uint32_t(buf, 76, remain_time_total);
    _mav_put_uint32_t(buf, 80, remain_time_next_waypoint);
    _mav_put_int16_t(buf, 84, v_e);
    _mav_put_int16_t(buf, 86, v_n);
    _mav_put_int16_t(buf, 88, v_u);
    _mav_put_int16_t(buf, 90, velocity);
    _mav_put_int16_t(buf, 92, mean_speed_next_waypoint);
    _mav_put_int16_t(buf, 94, strike_target_x);
    _mav_put_int16_t(buf, 96, strike_target_y);
    _mav_put_char(buf, 98, ammunition_id);
    _mav_put_char(buf, 99, task_phase_flag);
    _mav_put_char(buf, 100, strike_call_flag);
    _mav_put_char(buf, 101, response_call_flag);
    _mav_put_char(buf, 102, replan_flag);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION, buf, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_CRC);
#else
    mavlink_visual_inertial_navigation_t packet;
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
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.lat_target = lat_target;
    packet.lon_target = lon_target;
    packet.height_target = height_target;
    packet.lat_plan = lat_plan;
    packet.lon_plan = lon_plan;
    packet.height_plan = height_plan;
    packet.remain_time_total = remain_time_total;
    packet.remain_time_next_waypoint = remain_time_next_waypoint;
    packet.v_e = v_e;
    packet.v_n = v_n;
    packet.v_u = v_u;
    packet.velocity = velocity;
    packet.mean_speed_next_waypoint = mean_speed_next_waypoint;
    packet.strike_target_x = strike_target_x;
    packet.strike_target_y = strike_target_y;
    packet.ammunition_id = ammunition_id;
    packet.task_phase_flag = task_phase_flag;
    packet.strike_call_flag = strike_call_flag;
    packet.response_call_flag = response_call_flag;
    packet.replan_flag = replan_flag;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION, (const char *)&packet, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_CRC);
#endif
}

/**
 * @brief Send a visual_inertial_navigation message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_visual_inertial_navigation_send_struct(mavlink_channel_t chan, const mavlink_visual_inertial_navigation_t* visual_inertial_navigation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_visual_inertial_navigation_send(chan, visual_inertial_navigation->ammunition_id, visual_inertial_navigation->time_msec, visual_inertial_navigation->lat, visual_inertial_navigation->lon, visual_inertial_navigation->height, visual_inertial_navigation->roll_speed, visual_inertial_navigation->pitch_speed, visual_inertial_navigation->yaw_speed, visual_inertial_navigation->roll, visual_inertial_navigation->pitch, visual_inertial_navigation->yaw, visual_inertial_navigation->v_e, visual_inertial_navigation->v_n, visual_inertial_navigation->v_u, visual_inertial_navigation->velocity, visual_inertial_navigation->ax, visual_inertial_navigation->ay, visual_inertial_navigation->az, visual_inertial_navigation->task_phase_flag, visual_inertial_navigation->lat_target, visual_inertial_navigation->lon_target, visual_inertial_navigation->height_target, visual_inertial_navigation->strike_call_flag, visual_inertial_navigation->response_call_flag, visual_inertial_navigation->replan_flag, visual_inertial_navigation->lat_plan, visual_inertial_navigation->lon_plan, visual_inertial_navigation->height_plan, visual_inertial_navigation->remain_time_total, visual_inertial_navigation->remain_time_next_waypoint, visual_inertial_navigation->mean_speed_next_waypoint, visual_inertial_navigation->strike_target_x, visual_inertial_navigation->strike_target_y);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION, (const char *)visual_inertial_navigation, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_visual_inertial_navigation_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  char ammunition_id, uint32_t time_msec, int32_t lat, int32_t lon, int32_t height, int32_t roll_speed, int32_t pitch_speed, int32_t yaw_speed, int32_t roll, int32_t pitch, uint32_t yaw, int16_t v_e, int16_t v_n, int16_t v_u, int16_t velocity, int32_t ax, int32_t ay, int32_t az, char task_phase_flag, int32_t lat_target, int32_t lon_target, int32_t height_target, char strike_call_flag, char response_call_flag, char replan_flag, int32_t lat_plan, int32_t lon_plan, int32_t height_plan, uint32_t remain_time_total, uint32_t remain_time_next_waypoint, int16_t mean_speed_next_waypoint, int16_t strike_target_x, int16_t strike_target_y)
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
    _mav_put_int32_t(buf, 40, ax);
    _mav_put_int32_t(buf, 44, ay);
    _mav_put_int32_t(buf, 48, az);
    _mav_put_int32_t(buf, 52, lat_target);
    _mav_put_int32_t(buf, 56, lon_target);
    _mav_put_int32_t(buf, 60, height_target);
    _mav_put_int32_t(buf, 64, lat_plan);
    _mav_put_int32_t(buf, 68, lon_plan);
    _mav_put_int32_t(buf, 72, height_plan);
    _mav_put_uint32_t(buf, 76, remain_time_total);
    _mav_put_uint32_t(buf, 80, remain_time_next_waypoint);
    _mav_put_int16_t(buf, 84, v_e);
    _mav_put_int16_t(buf, 86, v_n);
    _mav_put_int16_t(buf, 88, v_u);
    _mav_put_int16_t(buf, 90, velocity);
    _mav_put_int16_t(buf, 92, mean_speed_next_waypoint);
    _mav_put_int16_t(buf, 94, strike_target_x);
    _mav_put_int16_t(buf, 96, strike_target_y);
    _mav_put_char(buf, 98, ammunition_id);
    _mav_put_char(buf, 99, task_phase_flag);
    _mav_put_char(buf, 100, strike_call_flag);
    _mav_put_char(buf, 101, response_call_flag);
    _mav_put_char(buf, 102, replan_flag);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION, buf, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_CRC);
#else
    mavlink_visual_inertial_navigation_t *packet = (mavlink_visual_inertial_navigation_t *)msgbuf;
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
    packet->ax = ax;
    packet->ay = ay;
    packet->az = az;
    packet->lat_target = lat_target;
    packet->lon_target = lon_target;
    packet->height_target = height_target;
    packet->lat_plan = lat_plan;
    packet->lon_plan = lon_plan;
    packet->height_plan = height_plan;
    packet->remain_time_total = remain_time_total;
    packet->remain_time_next_waypoint = remain_time_next_waypoint;
    packet->v_e = v_e;
    packet->v_n = v_n;
    packet->v_u = v_u;
    packet->velocity = velocity;
    packet->mean_speed_next_waypoint = mean_speed_next_waypoint;
    packet->strike_target_x = strike_target_x;
    packet->strike_target_y = strike_target_y;
    packet->ammunition_id = ammunition_id;
    packet->task_phase_flag = task_phase_flag;
    packet->strike_call_flag = strike_call_flag;
    packet->response_call_flag = response_call_flag;
    packet->replan_flag = replan_flag;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION, (const char *)packet, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_MIN_LEN, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_CRC);
#endif
}
#endif

#endif

// MESSAGE VISUAL_INERTIAL_NAVIGATION UNPACKING


/**
 * @brief Get field ammunition_id from visual_inertial_navigation message
 *
 * @return  from 0x01 to 0xA0.
 */
static inline char mavlink_msg_visual_inertial_navigation_get_ammunition_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_char(msg,  98);
}

/**
 * @brief Get field time_msec from visual_inertial_navigation message
 *
 * @return [ms] machine time, accuracy 2ms.
 */
static inline uint32_t mavlink_msg_visual_inertial_navigation_get_time_msec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field lat from visual_inertial_navigation message
 *
 * @return [degE7] Latitude
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field lon from visual_inertial_navigation message
 *
 * @return [degE7] Longitude
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field height from visual_inertial_navigation message
 *
 * @return [E-3 m] Height.
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_height(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field roll_speed from visual_inertial_navigation message
 *
 * @return [degE4/s]  roll rate
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_roll_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field pitch_speed from visual_inertial_navigation message
 *
 * @return [degE4/s]  pitch rate
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_pitch_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field yaw_speed from visual_inertial_navigation message
 *
 * @return [degE4/s]  yaw rate
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_yaw_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field roll from visual_inertial_navigation message
 *
 * @return [degE4]  roll
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  28);
}

/**
 * @brief Get field pitch from visual_inertial_navigation message
 *
 * @return [degE4]  pitch 
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  32);
}

/**
 * @brief Get field yaw from visual_inertial_navigation message
 *
 * @return [degE4]  yaw 
 */
static inline uint32_t mavlink_msg_visual_inertial_navigation_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  36);
}

/**
 * @brief Get field v_e from visual_inertial_navigation message
 *
 * @return [0.01m/s] GPS velocity in east direction in earth-fixed ENU frame
 */
static inline int16_t mavlink_msg_visual_inertial_navigation_get_v_e(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  84);
}

/**
 * @brief Get field v_n from visual_inertial_navigation message
 *
 * @return [0.01m/s] GPS velocity in north direction in earth-fixed ENU frame
 */
static inline int16_t mavlink_msg_visual_inertial_navigation_get_v_n(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  86);
}

/**
 * @brief Get field v_u from visual_inertial_navigation message
 *
 * @return [0.01m/s] GPS velocity in up direction in earth-fixed ENU frame
 */
static inline int16_t mavlink_msg_visual_inertial_navigation_get_v_u(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  88);
}

/**
 * @brief Get field velocity from visual_inertial_navigation message
 *
 * @return [0.01m/s] Resultant GPS velocity  in earth-fixed ENU frame
 */
static inline int16_t mavlink_msg_visual_inertial_navigation_get_velocity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  90);
}

/**
 * @brief Get field ax from visual_inertial_navigation message
 *
 * @return [E-4 m/s/s] X Acceleration in projectile coordinate system, not include earth's gravitational acceleration
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_ax(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  40);
}

/**
 * @brief Get field ay from visual_inertial_navigation message
 *
 * @return [E-4 m/s/s] Y Acceleration
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_ay(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  44);
}

/**
 * @brief Get field az from visual_inertial_navigation message
 *
 * @return [E-4 m/s/s] Z Acceleration
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_az(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  48);
}

/**
 * @brief Get field task_phase_flag from visual_inertial_navigation message
 *
 * @return  0x11: preparation; 0x22: detect; 0x33: tail_after; 0x44:strike
 */
static inline char mavlink_msg_visual_inertial_navigation_get_task_phase_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_char(msg,  99);
}

/**
 * @brief Get field lat_target from visual_inertial_navigation message
 *
 * @return [degE7] Latitude
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_lat_target(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  52);
}

/**
 * @brief Get field lon_target from visual_inertial_navigation message
 *
 * @return [degE7] Longitude
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_lon_target(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  56);
}

/**
 * @brief Get field height_target from visual_inertial_navigation message
 *
 * @return [E-2 m] Height.
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_height_target(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  60);
}

/**
 * @brief Get field strike_call_flag from visual_inertial_navigation message
 *
 * @return  0x00: not call;  others: id of nodes which were called to tail after target
 */
static inline char mavlink_msg_visual_inertial_navigation_get_strike_call_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_char(msg,  100);
}

/**
 * @brief Get field response_call_flag from visual_inertial_navigation message
 *
 * @return  0x00: not response;  others: id of nodes which respond to tail after target
 */
static inline char mavlink_msg_visual_inertial_navigation_get_response_call_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_char(msg,  101);
}

/**
 * @brief Get field replan_flag from visual_inertial_navigation message
 *
 * @return  0x11: no need for replanning;  0x22: node(s) not arrive in time, replan 
 */
static inline char mavlink_msg_visual_inertial_navigation_get_replan_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_char(msg,  102);
}

/**
 * @brief Get field lat_plan from visual_inertial_navigation message
 *
 * @return [degE7] Latitude of planned waypoint
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_lat_plan(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  64);
}

/**
 * @brief Get field lon_plan from visual_inertial_navigation message
 *
 * @return [degE7] Longitude of planned waypoint
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_lon_plan(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  68);
}

/**
 * @brief Get field height_plan from visual_inertial_navigation message
 *
 * @return [E-2 m] Height of planned waypoint.
 */
static inline int32_t mavlink_msg_visual_inertial_navigation_get_height_plan(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  72);
}

/**
 * @brief Get field remain_time_total from visual_inertial_navigation message
 *
 * @return [E-2 s] multi_ammunition arrive at same time enter terminal guidance countdown.
 */
static inline uint32_t mavlink_msg_visual_inertial_navigation_get_remain_time_total(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  76);
}

/**
 * @brief Get field remain_time_next_waypoint from visual_inertial_navigation message
 *
 * @return [E-2 s] countdown time for this ammunition to next waypoint.
 */
static inline uint32_t mavlink_msg_visual_inertial_navigation_get_remain_time_next_waypoint(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  80);
}

/**
 * @brief Get field mean_speed_next_waypoint from visual_inertial_navigation message
 *
 * @return [millimeter/s] average speed to arrive the next waypoint
 */
static inline int16_t mavlink_msg_visual_inertial_navigation_get_mean_speed_next_waypoint(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  92);
}

/**
 * @brief Get field strike_target_x from visual_inertial_navigation message
 *
 * @return [px] location of target needs to strike, in image coordinate, upper-left point is the origin point 
 */
static inline int16_t mavlink_msg_visual_inertial_navigation_get_strike_target_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  94);
}

/**
 * @brief Get field strike_target_y from visual_inertial_navigation message
 *
 * @return [px] location of target needs to strike, 
 */
static inline int16_t mavlink_msg_visual_inertial_navigation_get_strike_target_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  96);
}

/**
 * @brief Decode a visual_inertial_navigation message into a struct
 *
 * @param msg The message to decode
 * @param visual_inertial_navigation C-struct to decode the message contents into
 */
static inline void mavlink_msg_visual_inertial_navigation_decode(const mavlink_message_t* msg, mavlink_visual_inertial_navigation_t* visual_inertial_navigation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    visual_inertial_navigation->time_msec = mavlink_msg_visual_inertial_navigation_get_time_msec(msg);
    visual_inertial_navigation->lat = mavlink_msg_visual_inertial_navigation_get_lat(msg);
    visual_inertial_navigation->lon = mavlink_msg_visual_inertial_navigation_get_lon(msg);
    visual_inertial_navigation->height = mavlink_msg_visual_inertial_navigation_get_height(msg);
    visual_inertial_navigation->roll_speed = mavlink_msg_visual_inertial_navigation_get_roll_speed(msg);
    visual_inertial_navigation->pitch_speed = mavlink_msg_visual_inertial_navigation_get_pitch_speed(msg);
    visual_inertial_navigation->yaw_speed = mavlink_msg_visual_inertial_navigation_get_yaw_speed(msg);
    visual_inertial_navigation->roll = mavlink_msg_visual_inertial_navigation_get_roll(msg);
    visual_inertial_navigation->pitch = mavlink_msg_visual_inertial_navigation_get_pitch(msg);
    visual_inertial_navigation->yaw = mavlink_msg_visual_inertial_navigation_get_yaw(msg);
    visual_inertial_navigation->ax = mavlink_msg_visual_inertial_navigation_get_ax(msg);
    visual_inertial_navigation->ay = mavlink_msg_visual_inertial_navigation_get_ay(msg);
    visual_inertial_navigation->az = mavlink_msg_visual_inertial_navigation_get_az(msg);
    visual_inertial_navigation->lat_target = mavlink_msg_visual_inertial_navigation_get_lat_target(msg);
    visual_inertial_navigation->lon_target = mavlink_msg_visual_inertial_navigation_get_lon_target(msg);
    visual_inertial_navigation->height_target = mavlink_msg_visual_inertial_navigation_get_height_target(msg);
    visual_inertial_navigation->lat_plan = mavlink_msg_visual_inertial_navigation_get_lat_plan(msg);
    visual_inertial_navigation->lon_plan = mavlink_msg_visual_inertial_navigation_get_lon_plan(msg);
    visual_inertial_navigation->height_plan = mavlink_msg_visual_inertial_navigation_get_height_plan(msg);
    visual_inertial_navigation->remain_time_total = mavlink_msg_visual_inertial_navigation_get_remain_time_total(msg);
    visual_inertial_navigation->remain_time_next_waypoint = mavlink_msg_visual_inertial_navigation_get_remain_time_next_waypoint(msg);
    visual_inertial_navigation->v_e = mavlink_msg_visual_inertial_navigation_get_v_e(msg);
    visual_inertial_navigation->v_n = mavlink_msg_visual_inertial_navigation_get_v_n(msg);
    visual_inertial_navigation->v_u = mavlink_msg_visual_inertial_navigation_get_v_u(msg);
    visual_inertial_navigation->velocity = mavlink_msg_visual_inertial_navigation_get_velocity(msg);
    visual_inertial_navigation->mean_speed_next_waypoint = mavlink_msg_visual_inertial_navigation_get_mean_speed_next_waypoint(msg);
    visual_inertial_navigation->strike_target_x = mavlink_msg_visual_inertial_navigation_get_strike_target_x(msg);
    visual_inertial_navigation->strike_target_y = mavlink_msg_visual_inertial_navigation_get_strike_target_y(msg);
    visual_inertial_navigation->ammunition_id = mavlink_msg_visual_inertial_navigation_get_ammunition_id(msg);
    visual_inertial_navigation->task_phase_flag = mavlink_msg_visual_inertial_navigation_get_task_phase_flag(msg);
    visual_inertial_navigation->strike_call_flag = mavlink_msg_visual_inertial_navigation_get_strike_call_flag(msg);
    visual_inertial_navigation->response_call_flag = mavlink_msg_visual_inertial_navigation_get_response_call_flag(msg);
    visual_inertial_navigation->replan_flag = mavlink_msg_visual_inertial_navigation_get_replan_flag(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN? msg->len : MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN;
        memset(visual_inertial_navigation, 0, MAVLINK_MSG_ID_VISUAL_INERTIAL_NAVIGATION_LEN);
    memcpy(visual_inertial_navigation, _MAV_PAYLOAD(msg), len);
#endif
}
