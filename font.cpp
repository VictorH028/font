#include "lib/font.h"
//nombe de espacio 
using namespace _font;

int main(int argc,  char *argv[]){
    ter_font fon;
    std::string options[]{"--help","--change","--restore"};
    int done = false;
    while (!done) {
       if (argc == 1) {
      fon.show_help();
	   done=true;
       }else if (argv[1]==options[0]) {
      fon.show_help();
	   done=true;
       }else if (argv[1]==options[1]) {
       fon.backup_font();
	 std::__fs::filesystem::copy(argv[2], ORI);
	 done=true;
       }else if (argv[1]==options[2]) {
      fon.restore_font();
	 done=true;
       }else {
      fon.show_help();
	    done=true;
       }
   done=true; 
    }

return 0;
}
