#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

//class that reads the file and tells the program what the songs are
class ReadFile
{
   private:
		ifstream input_file;
		bool _eof;
		bool closed;
	public:
		
		ReadFile(const char* file_name);
		~ReadFile();
		String* readLine();
		
		//end of file 
		bool eof();
		
		//closing the file 
		void close();
};

#endif
