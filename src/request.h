#include <map>
#include <string>

using namespace std;

namespace hxfcgi {
	
	class Request {
		public:
			Request();
			bool headerSent();
			void printHeaders();
			void addHeader(string type,string value);
			void print(string msg);
			void setReturnCode(int code);
		
		private:
			map<string,string> header;
			bool header_sent;
			string codeToHeader(int r);	
	};
	
}
