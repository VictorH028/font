 #include "font.h"

using namespace _font;

 void ter_font::backup_font(){
     std::__fs::filesystem::copy(ORI,BACK);
     std::remove(ORI);
};
void  ter_font::restore_font(){
  std::remove(ORI);
  std::__fs::filesystem::copy(BACK, ORI);
  std::remove(BACK);
};
void ter_font::show_help(){
    std::cout<<"Usage:\n\tfont [OPTIONS] [PATH]"<<std::endl;
    std::cout<<"OPTIONS:"<<std::endl;
    std::cout<<"\t--change      <path to fontfile.ttf>"<<std::endl;
    std::cout<<"\t--restore     (revert to previous font)"<<std::endl;
    std::cout<<"\t--help        display this help and exit"<<std::endl;
};

