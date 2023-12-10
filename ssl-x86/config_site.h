#define PJ_DLL 1
#define PJ_EXPORTING 1
#define PJSUA_DLL_EXPORTS 1
#define PJ_EXPORT_SPECIFIER __declspec(dllexport)
#define PJ_IMPORT_SPECIFIER __declspec(dllimport)
#define PJ_HAS_SSL_SOCK 1
#include <pj/config_site_sample.h>