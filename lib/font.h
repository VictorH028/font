//directivas para asegurar que no se incluya  varias
//veses en un archivo .cpp
#ifndef _FONT
#define _FONT

#include <iostream>
#include <filesystem>
#include <string>

#define BACK "/data/data/com.termux/files/home/.termux/font.ttf.bak"
#define ORI  "/data/data/com.termux/files/home/.termux/font.ttf"


namespace _font {
   class ter_font{
       public://identificador
	  void show_help();
	  void backup_font();
	  void restore_font();
};

}

#endif 
