/*--------------------------------------------------------------------------*\
 * Copyright (c) 1999-2016 SoDevLog - All rights reserved.
 *--------------------------------------------------------------------------*
 * pmTrace.c - Written by B. Raby
 *--------------------------------------------------------------------------*
 * Reuse va_start() and va_end() to add trace for floating numbers.
 * It leaves no choice there is a carriage return at each end of the line.
\*--------------------------------------------------------------------------*/

#include "pmXEnv.h"

/*---------------------------------------------------------------------*/

#ifdef PM_USE_TRACES

/*---------------------------------------------------------------------*/

#include <windows.h>

#include <stdarg.h>
#include <stdio.h>
#include "pmTrace.h"

// Interface with ASTrace.dll
__declspec(dllimport) void __stdcall as_trace_STR(WORD aModule, char* aString);

#define SIZE_MAX_BUFFER 256

/*---------------------------------------------------------------------*/

void pm_trace(WORD aModule, char *aFormatString, ...)
{
    va_list  theArgs;
    char     theBuffer[SIZE_MAX_BUFFER];

    memset(theBuffer, 0, SIZE_MAX_BUFFER);
    va_start(theArgs, aFormatString);
    _vsnprintf(theBuffer, SIZE_MAX_BUFFER - 1, aFormatString, theArgs);

    as_trace_STR(aModule, theBuffer);
}

/*---------------------------------------------------------------------*/

void pm_trace0(char *aFormatString, ...)
{
    va_list  theArgs;
    char     theBuffer[SIZE_MAX_BUFFER];

    memset(theBuffer, 0, SIZE_MAX_BUFFER);
    va_start(theArgs, aFormatString);
    _vsnprintf(theBuffer, SIZE_MAX_BUFFER - 1, aFormatString, theArgs);

    as_trace_STR(MODULE_TRACE0, theBuffer);
}

/*---------------------------------------------------------------------*/

void pm_trace1(char *aFormatString, ...)
{
    va_list  theArgs;
    char     theBuffer[SIZE_MAX_BUFFER];

    memset(theBuffer, 0, SIZE_MAX_BUFFER);
    va_start(theArgs, aFormatString);
    _vsnprintf(theBuffer, SIZE_MAX_BUFFER - 1, aFormatString, theArgs);

    as_trace_STR(MODULE_TRACE1, theBuffer);
}

/*---------------------------------------------------------------------*/

void pm_trace2(char *aFormatString, ...)
{
    va_list  theArgs;
    char     theBuffer[SIZE_MAX_BUFFER];

    memset(theBuffer, 0, SIZE_MAX_BUFFER);
    va_start(theArgs, aFormatString);
    _vsnprintf(theBuffer, SIZE_MAX_BUFFER - 1, aFormatString, theArgs);

    as_trace_STR(MODULE_TRACE2, theBuffer);
}

/*---------------------------------------------------------------------*/

void pm_trace3(char *aFormatString, ...)
{
    va_list  theArgs;
    char     theBuffer[SIZE_MAX_BUFFER];

    memset(theBuffer, 0, SIZE_MAX_BUFFER);
    va_start(theArgs, aFormatString);
    _vsnprintf(theBuffer, SIZE_MAX_BUFFER - 1, aFormatString, theArgs);

    as_trace_STR(MODULE_TRACE3, theBuffer);
}

/*---------------------------------------------------------------------*/

#endif /* PM_USE_TRACES */
