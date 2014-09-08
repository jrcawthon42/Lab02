#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
#include <iostream>
using namespace std;

//made struct a class
class ReadFile {
//made the global variable private
private:
	bool _eof;
	ifstream input_file;
	bool closed;

//made class methods public
public:
	
	ReadFile(const char* file_name); //constructor
	virtual ~ReadFile(); //destructor
	String* readLine();
	bool eof();
	void close();
	
};
#endif
