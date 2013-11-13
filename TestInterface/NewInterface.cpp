// NewInterface.cpp : Implementation of CNewInterface

#include "stdafx.h"
#include "NewInterface.h"
#include "OpenCVFunctions.h"
#include <comutil.h>

// CNewInterface



STDMETHODIMP CNewInterface::get_InputPath(BSTR* pVal)
{
	// TODO: Add your implementation code here
	*pVal = inputDirectory.Copy();
	return S_OK;
}


STDMETHODIMP CNewInterface::put_InputPath(BSTR newVal)
{
	// TODO: Add your implementation code here
	inputDirectory = newVal;
	return S_OK;
}


STDMETHODIMP CNewInterface::get_OutputPath(BSTR* pVal)
{
	// TODO: Add your implementation code here
	*pVal = outputDirectory.Copy();
	return S_OK;
}


STDMETHODIMP CNewInterface::put_OutputPath(BSTR newVal)
{
	// TODO: Add your implementation code here
	outputDirectory = newVal;
	return S_OK;
}


STDMETHODIMP CNewInterface::Erode(void)
{
	// TODO: Add your implementation code here
	char* input = _com_util::ConvertBSTRToString(inputDirectory);
	char* output  ="C:/Users/Public/Pictures/Sample Pictures/Output.jpg";

	OpenCVFunctions func = OpenCVFunctions();
	func.Erode(input,output);
	outputDirectory = output;

	return S_OK;
}


STDMETHODIMP CNewInterface::Sharpen(void)
{
	// TODO: Add your implementation code here
	char* input = _com_util::ConvertBSTRToString(inputDirectory);
	//char* output  ="C:/Users/Public/Pictures/Sample Pictures/Output.jpg";
	char* output = "F:/Sem7/FYP/temp/Output.jpg";
	OpenCVFunctions func = OpenCVFunctions();
	func.Sharpen(input,output);
	outputDirectory = output;
	return S_OK;
}


STDMETHODIMP CNewInterface::Brighten(void)
{
	// TODO: Add your implementation code here
	char* input = _com_util::ConvertBSTRToString(inputDirectory);
	//char* output  ="C:/Users/Public/Pictures/Sample Pictures/Output.jpg";
	char* output = "F:/Sem7/FYP/temp/Output.jpg";
	OpenCVFunctions func = OpenCVFunctions();
	func.Brighten(input,output);
	outputDirectory = output;
	return S_OK;
}
