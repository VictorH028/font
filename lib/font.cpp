#include "font.h"
#include <cstdlib>
#include <filesystem>

namespace fs = std::filesystem;

/*
.*     
 */
void font::font::backup_font(){
     if (fs::exists(m_ori)) {
        fs::rename(m_ori,m_back);
     };
};
/*
.*     
 */
void  font::font::font::restore_font(){
   if (fs::exists(m_back)) {
       std::cout << "[*] Restoring" << std::endl;
       fs::rename(fs::path{m_back}, fs::path{m_ori});
   } else {
       std::cout << "[+]  You already have the restored file" << std::endl;
       };
};


/*
.*     
 */
void  font::font::change(std::string &p){
     backup_font();
     if (fs::exists(p)) {
        std::cout << "si" << std::endl;
        fs::copy(p, m_ori);
    }else {
        std::cout << "the feli does not exists" << std::endl;
    };
};