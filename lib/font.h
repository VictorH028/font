//directivas para asegurar que no se incluya  varias
//veses en un archivo .cpp
#ifndef _FONT
#define _FONT

#include <iostream>
#include <filesystem>
#include <string>

// namespace fs = std::filesystem;

namespace font{
   class font{
       private:
    const char *m_back{"/data/data/com.termux/files/home/.termux/font.ttf.bak"};
    const char *m_ori{"/data/data/com.termux/files/home/.termux/font.ttf"};
	  void backup_font();
        public:
	  void restore_font();
    void change(std::string  &p);
    //void change(const char &URL);
  };
}

#endif 
