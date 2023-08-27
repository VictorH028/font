#include "lib/font.h"
#include "lib/optparse.h"
#include <cstdlib>
#include <regex>



void k_boon(int signum){
  std::cout << "Hola mindo\n"; 
}


int main(int argc,  char *argv[]){
  
    const std::string usage = "Usage: %prog [OPCION]... "; 
    const std::string version = "";
    const std::string dect  = "";

    optparse::OptionParser parser = optparse::OptionParser()
    .usage(usage)
    .version(version)
    .description(dect);

    parser.add_option("--change")
     .metavar("PATH")
     .help("change font");

    parser.add_option("--restore")
      .action("store_false")
      .help("resver to previous font");
      
    const optparse::Values &options = parser.parse_args(argc, argv);
    const std::vector<std::string> args = parser.args();

    font::font fon;

    if(size(args) != 1){
      std::cout << parser.usage() << std::endl;
      exit(0);
    }
    // buscando 
    std::string _arg;    
    for (std::vector<std::string>::const_iterator it = args.begin(); it != args.end(); ++it)
    {
        _arg = *it;
    }
    // (exprecion regular)
    const std::regex txt_ttf{".+([a-z]+)\\.ftt"};
    if(std::regex_match(_arg, txt_ttf)){  
      fon.change(_arg);
  }else {
      parser.error("file.ftt");
  }
  if (options.get("restore")) {
     fon.restore_font();
  }
        return 0;
}