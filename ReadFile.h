#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
#include <iostream>
using namespace std;
class ReadFile {

private:
	bool _eof;
	ifstream input_file;
	bool closed;

public:
	//ReadFile* ReadFile::createReadFile(const char* file_name);
	ReadFile(const char* file_name);
	virtual ~ReadFile();
	String* readLine();
	bool eof();
	void close();
	/*
	void ReadFile::destroyReadFile(ReadFile* rf)
	{
		close(rf);
		delete[] rf;
	};

	String* readLine(ReadFile* rf)
	{
		

		if (rf->closed) return NULL;
		if (rf->_eof) return NULL;

		string text;
		rf->_eof = !(getline(rf->input_file, text));

		String* str = new String((const char*)text.c_str());
		return str;
	};

	bool eof(ReadFile* rf)
	{
		

		return rf->_eof;
	};

	void close(ReadFile* rf)
	{
		

		if (!rf->closed)
		{
			rf->input_file.close();
			rf->closed = true;
		}
	};*/
};
#endif
