#ifndef PARAMS_H
#define PARAMS_H
#include <QSettings>

// Encoding Params
#define FRAME_PER_SECOND 25 
#define GROUP_OF_PICTURES 15 
#define STREAM_BIT_RATE 512000
//#define STREAM_BIT_RATE 128000
#define MAX_EDGE_LENGTH 640

// Encoding and decoding buffer size
#define BUF_SIZE 10000000

// Codec

//#define ENCODING_STRING ("mpeg")
//#define ENCODING_CODEC (CODEC_ID_MPEG4)
//#define DECODING_CODEC (CODEC_ID_MPEG4)
//#define RAW_STREAM_FORMAT (PIX_FMT_YUV420P)

#define ENCODING_STRING ("h263")
#define ENCODING_CODEC (CODEC_ID_H263P)
#define DECODING_CODEC (CODEC_ID_H263)
#define RAW_STREAM_FORMAT (PIX_FMT_YUV420P)

//#define ENCODING_STRING ("h264")
//#define ENCODING_CODEC (CODEC_ID_H264)
//#define DECODING_CODEC (CODEC_ID_H264)
//#define RAW_STREAM_FORMAT (PIX_FMT_YUV420P)

//#define ENCODING_STRING ("mjpeg")
//#define ENCODING_CODEC (CODEC_ID_MJPEG)
//#define DECODING_CODEC (CODEC_ID_MJPEG)
//#define RAW_STREAM_FORMAT (PIX_FMT_YUVJ420P)

// ndn param
#define FRESHNESS 2
#define ALIVE_PERIOD 60
#define ANNOUNCE_INTERVAL 30
#define BROADCAST_PREFIX ("/ndn/broadcast/conference")
#define MAX_PACKET_SIZE 1024
#define PENDING_INTEREST_NUM ((STREAM_BIT_RATE) / (MAX_PACKET_SIZE) / 8)
#define CHECK_INTERVAL 10
#define CONSECUTIVE_LOSS_THRESHOLD (PENDING_INTEREST_NUM) 

#endif
