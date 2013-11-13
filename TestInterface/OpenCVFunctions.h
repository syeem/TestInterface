#pragma once
class OpenCVFunctions
{
public:
	OpenCVFunctions(void);
	~OpenCVFunctions(void);
	
	static double Erode(char* InStr, char* OutStr);
	static double Brighten(char* InStr, char* OutStr);
	static double Sharpen(char* InStr, char* OutStr);

};

