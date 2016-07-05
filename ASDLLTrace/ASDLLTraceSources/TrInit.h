/*	===================================================================
	TrInit.h
	Copyright (C) 1990 - 2000 AbyreSoft - All rights reserved.
	===================================================================	*/

#ifndef TrInit_h
#define TrInit_h

/*	------------------------------------------------------------------- */
#include "OSWinInc.h"

/*	------------------------------------------------------------------- */
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*	------------------------------------------------------------------- */
extern char	sAppName[128];

/*	------------------------------------------------------------------- */
void	InitTraces(HINSTANCE anInstance);
void	CloseTraces(void);

/*	------------------------------------------------------------------- */
#ifdef __cplusplus
}
#endif /* __cplusplus */

/*	------------------------------------------------------------------- */
#endif /* TrInit_h */
