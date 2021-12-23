#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]){
    ofstream out;
    char *path = argv[1];
    if(argc==2 || argv[2][0] == 'c'&& argv[2][1] == 'p' && argv[2][2] == 'p'){
        strcat(path,".cpp");
        out.open(path);
        out<<"#include<iostream>\nusing namespace std;\nint main(){\n\tcout<<\"Hello, World\"<<endl;\n\treturn 0;\n}";
    }
    else if(argv[2][0] == 'p'&& argv[2][1] == 'y'){
        strcat(path,".py");
        out.open(path);
        out<<"print(\"Hello, World!\")"<<endl;
    }
    else if(argv[2][0] == 'c'){
        strcat(path,".c");
        out.open(path);
        out<<"#include<stdio.h>\nint main(){\n\tprintf(\"Hello, World!\");\n\treturn 0;\n}";
    }
    std::cout<<argv[2];
}