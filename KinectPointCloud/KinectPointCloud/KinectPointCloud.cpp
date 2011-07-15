// KinectPointCloud.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include "MSR_NuiApi.h"
#include "MSR_NuiImageCamera.h"
#include "MSR_NuiProps.h"
#include "NuiImageBuffer.h"


int _tmain(int argc, _TCHAR* argv[])
{
	NuiInitialize(NUI_INITIALIZE_FLAG_USES_COLOR | NUI_INITIALIZE_FLAG_USES_DEPTH);

	return 0;
}

