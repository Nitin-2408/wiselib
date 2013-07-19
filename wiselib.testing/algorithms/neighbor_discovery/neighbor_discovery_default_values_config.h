//default ND protocol settings
//#define ND_MAX_NEIGHBORS 500 //shawn setting
#define ND_MAX_NEIGHBORS 25
#define ND_MAX_REGISTERED_PROTOCOLS 2
#define ND_BEACON_PERIOD 1000
#define ND_TRANSMISSION_POWER_DB -30
#define ND_DAEMON_PERIOD 100

//#define ND_MAX_NEIGHBORS 5
//#define ND_MAX_REGISTERED_PROTOCOLS 2
//#define ND_BEACON_PERIOD 1000
//#define ND_TRANSMISSION_POWER_DB -30
//#define ND_DAEMON_PERIOD 100

//benchmark settings
#define ND_STATS_DURATION 5000

//default registered protocol settings
#define ISENSE_MAX_LQI 255
#define ISENSE_MIN_LQI 0
#define ISENSE_MAX_RSSI 255
#define ISENSE_MIN_RSSI 0
#define ND_MAX_AVG_LQI_THRESHOLD ISENSE_MAX_LQI
#define ND_MIN_AVG_LQI_THRESHOLD ISENSE_MIN_LQI
#define ND_MAX_AVG_LQI_INVERSE_THRESHOLD ISENSE_MAX_LQI
#define ND_MIN_AVG_LQI_INVERSE_THRESHOLD ISENSE_MIN_LQI
#define ND_MAX_AVG_RSSI_THRESHOLD ISENSE_MAX_RSSI
#define ND_MIN_AVG_RSSI_THRESHOLD ISENSE_MIN_RSSI
#define ND_MAX_AVG_RSSI_INVERSE_THRESHOLD ISENSE_MAX_RSSI
#define ND_MIN_AVG_RSSI_INVERSE_THRESHOLD ISENSE_MIN_RSSI
#define ND_MAX_LINK_STAB_RATIO_THRESHOLD 100
#define ND_MIN_LINK_STABILITY_RATIO_THRESHOLD 0
#define ND_MAX_LINK_STAB_RATIO_INVERSE_THRESHOLD 100
#define ND_MIN_LINK_STAB_RATIO_INVERSE_THRESHOLD 0
//#define ND_MAX_PROTOCOL_PAYLOAD_SIZE 768 some old setting
//#define ND_MAX_PROTOCOL_PAYLOAD_SIZE 100 //shawn setting
//#define ND_MAX_PROTOCOL_PAYLOAD_SIZE 20
//#define ND_MAX_PROTOCOL_PAYLOAD_SIZE 12 //setting for ENERGY TESTS
#define ND_MAX_PROTOCOL_PAYLOAD_SIZE 6
#define ND_PAYLOAD_OFFSET 0
#define ND_RATIO_DIVIDER 2
#define ND_OLD_DEAD_TIME_PERIOD_WEIGHT 100
#define ND_NEW_DEAD_TIME_PERIOD_WEIGHT 100
#define ND_BEACON_WEIGHT 1
#define ND_LOST_BEACON_WEIGHT 1

#define ND_MAX_TRUST_COUNTER 6
#define ND_MIN_TRUST_COUNTER 0
#define ND_MAX_TRUST_COUNTER_INVERSE 6
#define ND_MIN_TRUST_COUNTER_INVERSE 0
#define ND_TRUST_COUNTER_THRESHOLD 3
#define ND_TRUST_COUNTER_THRESHOLD_INVERSE 3

//small payload settings
#define ND_PAYLOAD_MAX_LINK_STAB_RATIO_THRESHOLD 100
#define ND_PAYLOAD_MIN_LINK_STAB_RATIO_THRESHOLD 70
#define ND_PAYLOAD_MIN_RSSI_THRESHOLD 0
#define ND_PAYLOAD_MAX_RSSI_THRESHOLD 255
#define ND_PAYLOAD_MIN_LQI_THRESHOLD 0
#define ND_PAYLOAD_MAX_LQI_THRESHOLD 255
#define ND_PAYLOAD_TRUST_COUNTER_THRESHOLD 3
#define ND_PAYLOAD_TRUST_COUNTER_THRESHOLD_INVERSE 3
