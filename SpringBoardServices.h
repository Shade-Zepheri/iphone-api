#ifndef SPRINGBOARDSERVICES_H_
#define SPRINGBOARDSERVICES_H_

#include <mach/port.h>

#ifdef __cplusplus
extern "C" {
#endif

void SBAddStatusBarItem(mach_port_name_t serverPort, const char *displayIdentifier, const char *iconName);
mach_port_name_t SBSSpringBoardServerPort(void);

#ifdef __cplusplus
}
#endif

#endif/*SPRINGBOARDSERVICES_H_*/
