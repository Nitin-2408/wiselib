#ifdef __PLTT_PASSIVE_H__
	#define PLTT_PASSIVE_H_TRANSMISSION_POWER_DB -12
	#define PLTT_PASSIVE_H_INTENSITY_DETECTION_THRESHOLD 90
	#define PLTT_PASSIVE_H_NEIGHBOR_DISCOVERY_CONVERGENCE_TIME 60000
	#define PLTT_PASSIVE_H_BACKOFF_CONNECTIVITY_WEIGHT 500
	#define PLTT_PASSIVE_H_BACKOFF_LQI_WEIGHT 1
	#define PLTT_PASSIVE_H_BACKOFF_RANDOM_WEIGHT 300
	#define PLTT_PASSIVE_H_BACKOFF_CANDIDATE_LIST_WEIGHT 1000
	#define PLTT_PASSIVE_H_RANDOM_ENABLE_TIMER_RANGE 2000
	#define PLTT_PASSIVE_H_DECRYPTION_REQUEST_TIMER 1000
	#define PLTT_PASSIVE_H_DECRYPTION_REQUEST_OFFSET 50
	#define PLTT_PASSIVE_H_DECRYPTION_MAX_RETRIES 5
	#define PLTT_PASSIVE_H_ERASE_DAEMON_TIMER 100
#endif

#ifdef __PLTT_AGENT_H__
	#define PLTT_AGENT_MAX_PAYLOAD 80
#endif

#ifdef __PLTT_TARGET_H__
	//#define PLTT_TARGET_MINI_RUN
	#define TRACE_DIMINISH_SECONDS 1
	#define TRACE_DIMINISH_AMOUNT 8
	#define TRACE_SPREAD_PENALTY 16
	#define TRACE_START_INTENSITY 255
	#define TARGET_SPREAD_MILIS 5000
	#define TARGET_TRANSMISSION_POWER -30
#ifdef PLTT_TARGET_MINI_RUN
	#define TARGET_MINI_RUN_TIMES 1
#endif
	#ifdef PLTT_SECURE
		#define TARGET_SECURE_REQUEST_ID_1 0x1111
		#define TARGET_SECURE_REQUEST_ID_2 0x2222
		#define TARGET_SECURE_REQUEST_ID_3 0x3333
		#define TARGET_SECURE_REQUEST_ID_4 0x4444
		#define TARGET_SECURE_REQUEST_ID_5 0x5555
	#endif
#endif

#ifdef __PLTT_TRACKER_H__
	#define TARGET_ID_TO_TRACK1 0x1c99
	#define TARGET_TO_TRACK_MAX_INTENSITY1 127
	#define TRACKER_TRANSMISSION_POWER1 0
	#define TRACKER_SEND_MILIS1 5000
	#define TRACKER_TRACKING_METRICS_TIMER 10000
#endif













