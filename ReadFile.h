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
	
};
#endif
