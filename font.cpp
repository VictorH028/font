#include <filesystem>
#include <iostream>
#include <string>
#define BACK "/data/data/com.termux/files/home/.termux/font.ttf.bak"
#define ORI  "/data/data/com.termux/files/home/.termux/font.ttf"

void backup_font(){
     std::__fs::filesystem::copy(ORI,BACK);
     std::remove(ORI);
};
void  restore_font(){
  std::remove(ORI);
  std::__fs::filesystem::copy(BACK, ORI);
  std::remove(BACK);
};
void show_help(){
    std::cout<<"Usage:\n\tfont [OPTIONS] [PATH]"<<std::endl;
    std::cout<<"OPTIONS:"<<std::endl;
    std::cout<<"\t--change      <path to fontfile.ttf>"<<std::endl;
    std::cout<<"\t--restore     (revert to previous font)"<<std::endl;
    std::cout<<"\t--help        display this help and exit"<<std::endl;
};

int main(int argc,  char *argv[]){
    std::string options[]{"--help","--change","--restore"};
    int done = false;
    while (!done) {
       if (argc == 1) {
	   show_help();
	   done=true;
       }else if (argv[1]==options[0]) {
           show_help();
	   done=true;
       }else if (argv[1]==options[1]) {
         backup_font();
	 std::__fs::filesystem::copy(argv[2], ORI);
	 done=true;
       }else if (argv[1]==options[2]) {
         restore_font();
	 done=true;
       }else {
          show_help();
	    done=true;
       }
   done=true; 
    }

return 0;
}
