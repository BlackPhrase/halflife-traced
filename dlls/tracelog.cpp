/// @file

#include <cstdio>

#include "tracelog.h"

class CTraceLog
{
public:
	CTraceLog(const char *asFileName)
	{
		mpLogFile = fopen(asFileName, "w");
	};
	
	~CTraceLog()
	{
		if(mpLogFile)
		{
			fflush(mpLogFile);
			fclose(mpLogFile);
		};
	};
	
	void Write(const char *asMsg)
	{
		fputs(asMsg, mpLogFile);
	};
private:
	FILE *mpLogFile{nullptr};
};

CTraceLog gTraceLog("trace.log");

void TraceLog(const char *asMsg, ...)
{
	va_list vArgList;
	char sFormatted[1024]{};
	
	va_start(vArgList);
	vsprintf(sFormatted, asMsg, vArgList);
	va_end(vArgList);
	
	Write(sFormatted);
};