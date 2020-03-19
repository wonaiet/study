#pragma once
//return a part of a string
char* substring(const char* const s, int start, int end)
{
	char* pNewString = new char[end - start + 1];

	int j = 0; 
	for (int i = start; i < end; i++, j++)
	{
		pNewString[j] = s[i];
	}
	pNewString[j] = '\0'; //!!!without a null, sth bad might happen

	return pNewString;
}