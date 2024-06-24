#include "windows.h"
#include "fstream"
#include "iostream"
using namespace std;

int main(int argc, char *argv[]){
    system ("chcp 65001>nul");

    //cout << "Pocet argumentu je: " << argc << endl;
    //for (int i = 0; i < argc; i++)
    //{
    //    cout << i << ". argument je " << argv[i] << endl;
    //}

    if (argc == 2){
        const char *cesta = argv[1];
        CreateDirectory(cesta,NULL);    //vytvoreni adresáře projektu
        ofstream sourceFile;
        string filePath = cesta;
        string filePathHeader = cesta;
        filePath += "\\main.cpp";
        filePathHeader += "\\color.h";
        cout << "cesta k souboru: " << filePath << endl;

        sourceFile.open(filePath);
        sourceFile << "#include \"iostream\"\n #include \"color.h\"\n using namespace std;\n\n  int main(int argc, char *argv[]){\nsystem (\"chcp 65001>nul\");\n  return 0;}\n"  ;
        sourceFile.close();

        sourceFile.open(filePathHeader);
        sourceFile << "#include \"iostream\"" << endl;
        sourceFile <<        "#define RESET \"\\033[0m\""<< endl;
        sourceFile <<        "#define BLACK \"\\033[30m\" /* Black */"<< endl;
        sourceFile <<        "#define RED \"\\033[31m\" /* Red */"<< endl;
        sourceFile <<        "#define GREEN \"\\033[32m\" /* Green */"<< endl;
        sourceFile <<        "#define YELLOW \"\\033[33m\" /* Yellow */"<< endl;
        sourceFile <<        "#define BLUE \"\\033[34m\" /* Blue */"<< endl;
        sourceFile <<        "#define MAGENTA \"\\033[35m\" /* Magenta */"<< endl;
        sourceFile <<        "#define CYAN \"\\033[36m\" /* Cyan */"<< endl;
        sourceFile <<        "#define WHITE \"\\033[37m\" /* White */"<< endl;
        sourceFile <<        "#define BOLDBLACK \"\\033[1m\\033[30m\" /* Bold Black */"<< endl;
        sourceFile <<        "#define BOLDRED \"\\033[1m\\033[31m\" /* Bold Red */"<< endl;
        sourceFile <<        "#define BOLDGREEN \"\\033[1m\\033[32m\" /* Bold Green */"<< endl;
        sourceFile <<        "#define BOLDYELLOW \"\\033[1m\\033[33m\" /* Bold Yellow */"<< endl;
        sourceFile <<        "#define BOLDBLUE \"\\033[1m\\033[34m\" /* Bold Blue */"<< endl;
        sourceFile <<        "#define BOLDMAGENTA \"\\033[1m\\033[35m\" /* Bold Magenta */"<< endl;
        sourceFile <<        "#define BOLDCYAN \"\\033[1m\\033[36m\" /* Bold Cyan */"<< endl;
        sourceFile <<        "#define BOLDWHITE \"\\033[1m\\033[37m\" /* Bold White */"<< endl;
        sourceFile.close();

        cout << "dobry";
    } else cout << "Zadaj si špatný počet parametrů\n";
    
    return 0;
}