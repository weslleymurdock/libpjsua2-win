#define PJ_DLL 1
#define PJMEDIA_HAS_VIDEO 1
#define PJMEDIA_HAS_FFMPEG 1
#define PJMEDIA_HAS_FFMPEG_VID_CODEC 1
#define PJMEDIA_VIDEO_DEV_HAS_FFMPEG 1
#define PJMEDIA_VIDEO_DEV_HAS_SDL 1
#define PJ_EXPORTING 1
#define PJSUA_DLL_EXPORTS 1
#define PJ_EXPORT_SPECIFIER __declspec(dllexport)
#define PJ_IMPORT_SPECIFIER __declspec(dllimport)
#include <pj/config_site_sample.h>