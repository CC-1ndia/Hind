

#ifndef __STUB_HANDLER_H__
#define __STUB_HANDLER_H__

#include "StdAfx.h"

typedef struct SCoreHeader {
	DWORD HeaderLength;		// 552
	DWORD SectionLength;	// 498176
	DWORD FullLength;		// 498728
	DWORD dw4;				// 90
	DWORD dw5;				// 498818 (FullLength + dw4)
	DWORD dw6;				// 4587
	DWORD dw7[130];			// {0}
	DWORD dw137;			// 1
	DWORD dw138;			// 0
} TCoreHeader;

void Core_Load(void);
void Core_Crypt(BYTE *lpStream, DWORD dwLength);
BOOL Core_GetDLL(LPVOID *ppCore, INT32 *pCoreLen);

#endif