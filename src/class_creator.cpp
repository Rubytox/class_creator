#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 2 || static_cast<string>(argv[1]) == "-h" || static_cast<string>(argv[1]) == "--help") {
        cerr << "Usage: " << argv[0] << " class_name [parent_class]" << endl;
        exit(EXIT_FAILURE);
    }


    /*
     * WRITING IN HEADER FILE
     */
    ofstream header_file(static_cast<string>(argv[1]) + ".h", ios_base::out);

    header_file << "#pragma once" << endl << endl;
    string parent = argc == 3 ? " : public " + static_cast<string>(argv[2]) : "";
    header_file << "class " << argv[1] << parent << endl;
    header_file << "{" << endl;
    header_file << "public:" << endl;
    header_file << "    " << argv[1] << "();" << endl;
    header_file << "    ~" << argv[1] << "();" << endl << endl;
    header_file << "private:" << endl << endl;
    header_file << "};" << endl;

    header_file.close();

    /*
     * WRITING IN SOURCE FILE
     */
    ofstream source_file(static_cast<string>(argv[1]) + ".cpp", ios_base::out);

    source_file << "#include \"" << argv[1] << ".h\"" << endl << endl;
    source_file << argv[1] << "::" << argv[1] << "()" << endl;
    source_file << "{" << endl << "}" << endl << endl;
    source_file << argv[1] << "::~" << argv[1] << "()" << endl;
    source_file << "{" << endl << "}" << endl << endl;

    source_file.close();

    return EXIT_SUCCESS;
}
