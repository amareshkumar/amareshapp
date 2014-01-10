#include "programming.h"

//Joice Joy's work
string programming_questions::Reverse(string str)
{
	size_t uiSize = str.size();

	for (int i = 0; i < uiSize; ++i)
	{
		while (isspace(str[i]) && i < uiSize) ++i;

		int j = i;
		while ((!isspace(str[j])) && j < uiSize) ++j;

		int k = i;
		i = j;
		--j;

		while (k < j)
		{
			swap(str[k], str[j]);
			++k;
			--j;
		}
	}
	return str;
}
