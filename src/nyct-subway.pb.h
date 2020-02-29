/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.1 */

#ifndef PB_NYCT_SUBWAY_PB_H_INCLUDED
#define PB_NYCT_SUBWAY_PB_H_INCLUDED
#include <pb.h>
#include "gtfs-realtime.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _NyctTripDescriptor_Direction {
    NyctTripDescriptor_Direction_NORTH = 1,
    NyctTripDescriptor_Direction_EAST = 2,
    NyctTripDescriptor_Direction_SOUTH = 3,
    NyctTripDescriptor_Direction_WEST = 4
} NyctTripDescriptor_Direction;

/* Struct definitions */
typedef struct _NyctFeedHeader {
    pb_callback_t nyct_subway_version;
    pb_callback_t trip_replacement_period;
} NyctFeedHeader;

typedef struct _NyctStopTimeUpdate {
    pb_callback_t scheduled_track;
    pb_callback_t actual_track;
} NyctStopTimeUpdate;

typedef struct _NyctTripDescriptor {
    pb_callback_t train_id;
    bool has_is_assigned;
    bool is_assigned;
    bool has_direction;
    NyctTripDescriptor_Direction direction;
} NyctTripDescriptor;

typedef struct _TripReplacementPeriod {
    pb_callback_t route_id;
    bool has_replacement_period;
    transit_realtime_TimeRange replacement_period;
} TripReplacementPeriod;


/* Extensions */
extern const pb_extension_type_t nyct_feed_header; /* field type: NyctFeedHeader nyct_feed_header; */
extern const pb_extension_type_t nyct_trip_descriptor; /* field type: NyctTripDescriptor nyct_trip_descriptor; */
extern const pb_extension_type_t nyct_stop_time_update; /* field type: NyctStopTimeUpdate nyct_stop_time_update; */

/* Helper constants for enums */
#define _NyctTripDescriptor_Direction_MIN NyctTripDescriptor_Direction_NORTH
#define _NyctTripDescriptor_Direction_MAX NyctTripDescriptor_Direction_WEST
#define _NyctTripDescriptor_Direction_ARRAYSIZE ((NyctTripDescriptor_Direction)(NyctTripDescriptor_Direction_WEST+1))


/* Initializer values for message structs */
#define TripReplacementPeriod_init_default       {{{NULL}, NULL}, false, transit_realtime_TimeRange_init_default}
#define NyctFeedHeader_init_default              {{{NULL}, NULL}, {{NULL}, NULL}}
#define NyctTripDescriptor_init_default          {{{NULL}, NULL}, false, 0, false, _NyctTripDescriptor_Direction_MIN}
#define NyctStopTimeUpdate_init_default          {{{NULL}, NULL}, {{NULL}, NULL}}
#define TripReplacementPeriod_init_zero          {{{NULL}, NULL}, false, transit_realtime_TimeRange_init_zero}
#define NyctFeedHeader_init_zero                 {{{NULL}, NULL}, {{NULL}, NULL}}
#define NyctTripDescriptor_init_zero             {{{NULL}, NULL}, false, 0, false, _NyctTripDescriptor_Direction_MIN}
#define NyctStopTimeUpdate_init_zero             {{{NULL}, NULL}, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define NyctFeedHeader_nyct_subway_version_tag   1
#define NyctFeedHeader_trip_replacement_period_tag 2
#define NyctStopTimeUpdate_scheduled_track_tag   1
#define NyctStopTimeUpdate_actual_track_tag      2
#define NyctTripDescriptor_train_id_tag          1
#define NyctTripDescriptor_is_assigned_tag       2
#define NyctTripDescriptor_direction_tag         3
#define TripReplacementPeriod_route_id_tag       1
#define TripReplacementPeriod_replacement_period_tag 2
#define nyct_feed_header_tag                     1001
#define nyct_trip_descriptor_tag                 1001
#define nyct_stop_time_update_tag                1001

/* Struct field encoding specification for nanopb */
#define TripReplacementPeriod_FIELDLIST(X, a) \
X(a, CALLBACK, OPTIONAL, STRING,   route_id,          1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  replacement_period,   2)
#define TripReplacementPeriod_CALLBACK pb_default_field_callback
#define TripReplacementPeriod_DEFAULT NULL
#define TripReplacementPeriod_replacement_period_MSGTYPE transit_realtime_TimeRange

#define NyctFeedHeader_FIELDLIST(X, a) \
X(a, CALLBACK, REQUIRED, STRING,   nyct_subway_version,   1) \
X(a, CALLBACK, REPEATED, MESSAGE,  trip_replacement_period,   2)
#define NyctFeedHeader_CALLBACK pb_default_field_callback
#define NyctFeedHeader_DEFAULT NULL
#define NyctFeedHeader_trip_replacement_period_MSGTYPE TripReplacementPeriod

#define NyctTripDescriptor_FIELDLIST(X, a) \
X(a, CALLBACK, OPTIONAL, STRING,   train_id,          1) \
X(a, STATIC,   OPTIONAL, BOOL,     is_assigned,       2) \
X(a, STATIC,   OPTIONAL, UENUM,    direction,         3)
#define NyctTripDescriptor_CALLBACK pb_default_field_callback
#define NyctTripDescriptor_DEFAULT NULL

#define NyctStopTimeUpdate_FIELDLIST(X, a) \
X(a, CALLBACK, OPTIONAL, STRING,   scheduled_track,   1) \
X(a, CALLBACK, OPTIONAL, STRING,   actual_track,      2)
#define NyctStopTimeUpdate_CALLBACK pb_default_field_callback
#define NyctStopTimeUpdate_DEFAULT NULL

extern const pb_msgdesc_t TripReplacementPeriod_msg;
extern const pb_msgdesc_t NyctFeedHeader_msg;
extern const pb_msgdesc_t NyctTripDescriptor_msg;
extern const pb_msgdesc_t NyctStopTimeUpdate_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define TripReplacementPeriod_fields &TripReplacementPeriod_msg
#define NyctFeedHeader_fields &NyctFeedHeader_msg
#define NyctTripDescriptor_fields &NyctTripDescriptor_msg
#define NyctStopTimeUpdate_fields &NyctStopTimeUpdate_msg

/* Maximum encoded size of messages (where known) */
/* TripReplacementPeriod_size depends on runtime parameters */
/* NyctFeedHeader_size depends on runtime parameters */
/* NyctTripDescriptor_size depends on runtime parameters */
/* NyctStopTimeUpdate_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
