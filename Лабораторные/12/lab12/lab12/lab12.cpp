// Course: Programming technologies (ANSI C)
// Lab 12. Input-output operations.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 04.09.2012 Modified: 01.10.2012
// Description: Program entry point.

#include <stdio.h>
#include <windows.h>

void main(int argc, char *argv[]){
	TCHAR sizeDirectory[MAX_PATH + 4];
	TCHAR temp[MAX_PATH];
	TCHAR tempArgument[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, sizeDirectory);
	for(int i = 1; i < argc; i++) {
		MultiByteToWideChar(CP_ACP, 0, argv[i], -1, tempArgument, MAX_PATH);
		wcsncpy(temp, sizeDirectory, MAX_PATH);
		wcsncat(temp, L"\\", wcslen(L"\\"));
		wcsncat(temp, tempArgument,	wcslen(tempArgument));
		CreateDirectory(temp, NULL);
	}
	wcsncat(sizeDirectory, L"\\*",4);
	HANDLE Find = INVALID_HANDLE_VALUE;
	WIN32_FIND_DATA FindData;
	Find = FindFirstFile(sizeDirectory, &FindData);
	FILE * f = fopen("output.txt", "w");
	char tempc[MAX_PATH];
	do {
		if (FindData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
			if (wcscmp(L"...", FindData.cFileName) == 0 || wcscmp(L".", FindData.cFileName) == 0 || 
				wcscmp(L"..", FindData.cFileName) == 0) continue;
			WideCharToMultiByte(CP_REGION, 0, FindData.cFileName, -1, tempc, sizeof(tempc), NULL, NULL);
			fprintf(f, "%s\n",tempc);
		}
	} while (FindNextFile(Find, &FindData) != 0);
	fclose(f);
}