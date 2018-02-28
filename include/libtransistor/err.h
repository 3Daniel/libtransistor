/**
 * @file libtransistor/err.h
 * @brief Error definitions
 */

#pragma once

#define MAKE_RESULT(module, code) (((code) << 9) | (module))

enum modules {
	MODULE_KERNEL = 1,
	MODULE_FS = 2,
	MODULE_NVIDIA = 3,
	MODULE_NCM = 5,
	MODULE_DD = 6,
	MODULE_LR = 8,
	MODULE_LOADER = 9,
	MODULE_CMIF = 10,
	MODULE_HIPC = 11,
	MODULE_PM = 15,
	MODULE_NS = 16,
	MODULE_HTC = 18,
	MODULE_SM = 21,
	MODULE_RO = 22,
	MODULE_SDMMC = 24,
	MODULE_SPL = 26,
	MODULE_ETHC = 100,
	MODULE_I2C = 101,
	MODULE_SETTINGS = 105,
	MODULE_NIFM = 110,
	MODULE_HWOPUS = 111,
	MODULE_DISPLAY = 114,
	MODULE_NTC = 116,
	MODULE_FGM = 117,
	MODULE_PCIE = 120,
	MODULE_FRIENDS = 121,
	MODULE_SSL = 123,
	MODULE_ACCOUNT = 124,
	MODULE_MII = 126,
	MODULE_AM = 128,
	MODULE_PLAYREPORT = 129,
	MODULE_PCV = 133,
	MODULE_OMM = 134,
	MODULE_NIM = 137,
	MODULE_PSC = 138,
	MODULE_USB = 140,
	MODULE_NSD = 141,
	MODULE_BTM = 143,
	MODULE_ERPT = 147,
	MODULE_APM = 148,
	MODULE_AUDIO = 153,
	MODULE_NPNS = 154,
	MODULE_ARP = 157,
	MODULE_BOOT = 158,
	MODULE_NFC = 161,
	MODULE_USERLAND_ASSERT = 162,
	MODULE_USERLAND_CRASH = 168,
	MODULE_HID = 203,
	MODULE_CAPTURE = 206,
	MODULE_LIBTRANSISTOR = 221,
	MODULE_LIBNX = 345,
	MODULE_HOMEBREW_ABI = 346,
	MODULE_HOMEBREW_LOADER = 347,
	MODULE_LIBNX_NVIDIA = 348,
	MODULE_TC = 651,
	MODULE_WEBAPPLET = 800,
	MODULE_WEBAPPLET_WIFIAUTH = 809,
	MODULE_APPLET_WHITELISTED = 810,
	MODULE_SHOPN = 811,
};

#define LIBTRANSISTOR_RESULT(code) MAKE_RESULT(MODULE_LIBTRANSISTOR, code)

// Misc
#define LIBTRANSISTOR_ERR_UNSPECIFIED LIBTRANSISTOR_RESULT(1)
#define LIBTRANSISTOR_ERR_UNIMPLEMENTED LIBTRANSISTOR_RESULT(2)
#define LIBTRANSISTOR_ERR_OUT_OF_MEMORY LIBTRANSISTOR_RESULT(3)
#define LIBTRANSISTOR_ERR_ASSERTION_FAILED LIBTRANSISTOR_RESULT(4)
#define LIBTRANSISTOR_ERR_LEGACY_CONTEXT LIBTRANSISTOR_RESULT(5)

// IPC
#define LIBTRANSISTOR_ERR_UNSUPPORTED_BUFFER_TYPE LIBTRANSISTOR_RESULT(1001)
#define LIBTRANSISTOR_ERR_TOO_MANY_BUFFERS LIBTRANSISTOR_RESULT(1002)
#define LIBTRANSISTOR_ERR_INVALID_REQUEST_TYPE LIBTRANSISTOR_RESULT(1003)
#define LIBTRANSISTOR_ERR_TOO_MANY_HANDLES LIBTRANSISTOR_RESULT(1004)
#define LIBTRANSISTOR_ERR_INVALID_BUFFER_ADDRESS LIBTRANSISTOR_RESULT(1005)
#define LIBTRANSISTOR_ERR_INVALID_BUFFER_SIZE LIBTRANSISTOR_RESULT(1006)
#define LIBTRANSISTOR_ERR_INVALID_PROTECTION LIBTRANSISTOR_RESULT(1007)
#define LIBTRANSISTOR_ERR_INVALID_IPC_RESPONSE_TYPE LIBTRANSISTOR_RESULT(1008)
#define LIBTRANSISTOR_ERR_INVALID_IPC_RESPONSE_MAGIC LIBTRANSISTOR_RESULT(1009)
#define LIBTRANSISTOR_ERR_INVALID_RAW_DATA_SIZE LIBTRANSISTOR_RESULT(1010)
#define LIBTRANSISTOR_ERR_UNEXPECTED_RAW_DATA_SIZE LIBTRANSISTOR_RESULT(1011)
#define LIBTRANSISTOR_ERR_UNEXPECTED_PID LIBTRANSISTOR_RESULT(1012)
#define LIBTRANSISTOR_ERR_UNEXPECTED_COPY_HANDLES LIBTRANSISTOR_RESULT(1013)
#define LIBTRANSISTOR_ERR_UNEXPECTED_MOVE_HANDLES LIBTRANSISTOR_RESULT(1014)
#define LIBTRANSISTOR_ERR_ALREADY_A_DOMAIN LIBTRANSISTOR_RESULT(1015)
#define LIBTRANSISTOR_ERR_CANT_SEND_OBJECT_ACROSS_DOMAINS LIBTRANSISTOR_RESULT(1016)
#define LIBTRANSISTOR_ERR_CANT_SEND_DOMAIN_OBJECT_TO_SESSION LIBTRANSISTOR_RESULT(1017)
#define LIBTRANSISTOR_ERR_TOO_MANY_OBJECTS LIBTRANSISTOR_RESULT(1018)
#define LIBTRANSISTOR_ERR_UNEXPECTED_DOMAIN_HEADER_COMMAND LIBTRANSISTOR_RESULT(1018)
#define LIBTRANSISTOR_ERR_UNEXPECTED_OBJECTS LIBTRANSISTOR_RESULT(1019)
#define LIBTRANSISTOR_ERR_CANT_CLOSE_SESSIONS_LIKE_DOMAIN_OBJECTS LIBTRANSISTOR_RESULT(1020)
#define LIBTRANSISTOR_ERR_MALFORMED_CLOSE_REQUEST LIBTRANSISTOR_RESULT(1021)
#define LIBTRANSISTOR_ERR_INVALID_IPC_REQUEST_MAGIC LIBTRANSISTOR_RESULT(1022)
#define LIBTRANSISTOR_ERR_CANT_SEND_SESSION_OBJECT_FROM_DOMAIN LIBTRANSISTOR_RESULT(1023)
#define LIBTRANSISTOR_ERR_CANT_SEND_DOMAIN_OBJECT_FROM_SESSION LIBTRANSISTOR_RESULT(1024)
#define LIBTRANSISTOR_ERR_UNEXPECTED_BUFFER_PROTECTION LIBTRANSISTOR_RESULT(1025)
#define LIBTRANSISTOR_ERR_REFUSAL_TO_CONVERT_BORROWED_OBJECT LIBTRANSISTOR_RESULT(1026)

// SM
#define LIBTRANSISTOR_ERR_SM_NOT_INITIALIZED LIBTRANSISTOR_RESULT(2001)
#define LIBTRANSISTOR_ERR_SM_SERVICE_NAME_TOO_LONG LIBTRANSISTOR_RESULT(2002)

// BSD
#define LIBTRANSISTOR_ERR_BSD_ERRNO_SET LIBTRANSISTOR_RESULT(3001)
#define LIBTRANSISTOR_ERR_BSD_BUFFER_TOO_SMALL LIBTRANSISTOR_RESULT(3002)
#define LIBTRANSISTOR_ERR_BSD_INVALID_MAGIC LIBTRANSISTOR_RESULT(3003)
#define LIBTRANSISTOR_ERR_BSD_UNRECOGNIZED_SOCKET_SERVICE LIBTRANSISTOR_RESULT(3004)
	
// NV
#define LIBTRANSISTOR_ERR_NV_INITIALIZE_FAILED LIBTRANSISTOR_RESULT(4001)
#define LIBTRANSISTOR_ERR_NV_OPEN_FAILED LIBTRANSISTOR_RESULT(4002)

// Parcel & Display
#define LIBTRANSISTOR_ERR_PARCEL_INVALID_BINDER_TYPE LIBTRANSISTOR_RESULT(5001)
#define LIBTRANSISTOR_ERR_PARCEL_DATA_TOO_BIG LIBTRANSISTOR_RESULT(5002)
#define LIBTRANSISTOR_ERR_PARCEL_DATA_UNDERRUN LIBTRANSISTOR_RESULT(5003)
#define LIBTRANSISTOR_ERR_DISPLAY_FENCE_TOO_MANY_FDS LIBTRANSISTOR_RESULT(5004)
#define LIBTRANSISTOR_ERR_DISPLAY_GRAPHIC_BUFFER_LENGTH_MISMATCH LIBTRANSISTOR_RESULT(5005)
#define LIBTRANSISTOR_ERR_SURFACE_CONNECT_FAILED LIBTRANSISTOR_RESULT(5006)
#define LIBTRANSISTOR_ERR_SURFACE_DEQUEUE_BUFFER_FAILED LIBTRANSISTOR_RESULT(5007)
#define LIBTRANSISTOR_ERR_SURFACE_QUEUE_BUFFER_FAILED LIBTRANSISTOR_RESULT(5008)
#define LIBTRANSISTOR_ERR_SURFACE_INVALID_STATE LIBTRANSISTOR_RESULT(5009)
	
// GPU
#define LIBTRANSISTOR_ERR_GPU_BUFFER_UNALIGNED LIBTRANSISTOR_RESULT(6001)

// HID
#define LIBTRANSISTOR_ERR_HID_BAD_STRUCTURE LIBTRANSISTOR_RESULT(7001)

// FS
#define LIBTRANSISTOR_ERR_FS_INTERNAL_ERROR LIBTRANSISTOR_RESULT(8001)
#define LIBTRANSISTOR_ERR_FS_OUT_OF_DIR_ENTRIES LIBTRANSISTOR_RESULT(8002)
#define LIBTRANSISTOR_ERR_FS_NAME_TOO_LONG LIBTRANSISTOR_RESULT(8003)
#define LIBTRANSISTOR_ERR_FS_NOT_A_DIRECTORY LIBTRANSISTOR_RESULT(8004)
#define LIBTRANSISTOR_ERR_FS_NOT_A_FILE LIBTRANSISTOR_RESULT(8005)
#define LIBTRANSISTOR_ERR_FS_NOT_FOUND LIBTRANSISTOR_RESULT(8006)
#define LIBTRANSISTOR_ERR_FS_INVALID_PATH LIBTRANSISTOR_RESULT(8007)
#define LIBTRANSISTOR_ERR_FS_PATH_TOO_DEEP LIBTRANSISTOR_RESULT(8008)
#define LIBTRANSISTOR_ERR_FS_PATH_EXISTS LIBTRANSISTOR_RESULT(8009)

// AM
#define LIBTRANSISTOR_ERR_AM_WORKAROUND_ACTIVE LIBTRANSISTOR_RESULT(9001)

// IPC Server
#define LIBTRANSISTOR_ERR_IPCSERVER_INVALID_SESSION_STATE LIBTRANSISTOR_RESULT(10001)
#define LIBTRANSISTOR_ERR_IPCSERVER_TOO_MANY_SESSIONS LIBTRANSISTOR_RESULT(10002)
#define LIBTRANSISTOR_ERR_IPCSERVER_NO_SUCH_OBJECT LIBTRANSISTOR_RESULT(10003)
#define LIBTRANSISTOR_ERR_IPCSERVER_OBJECT_NOT_ACTIVE LIBTRANSISTOR_RESULT(10004)
#define LIBTRANSISTOR_ERR_IPCSERVER_SESSION_OBJECT_WAS_DOMAIN LIBTRANSISTOR_RESULT(10005)
#define LIBTRANSISTOR_ERR_IPCSERVER_CANT_SEND_ROOT_OBJECT LIBTRANSISTOR_RESULT(10006)
#define LIBTRANSISTOR_ERR_IPCSERVER_NO_SUCH_COMMAND LIBTRANSISTOR_RESULT(10007)

// Homebrew ABI
#define HOMEBREW_ABI_RESULT(code) MAKE_RESULT(MODULE_HOMEBREW_ABI, code)
#define HOMEBREW_ABI_UNRECOGNIZED_KEY(key) HOMEBREW_ABI_RESULT(100 + key)
#define HOMEBREW_ABI_KEY_NOT_PRESENT(key)  HOMEBREW_ABI_RESULT(200 + key)
#define HOMEBREW_ABI_KEY_INVALID(key)      HOMEBREW_ABI_RESULT(300 + key)
