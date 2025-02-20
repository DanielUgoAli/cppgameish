#include <iostream>
#include <fstream>

// using namespace std;

void write_to_file(std::string filename, std::string content){
    std::ofstream File(filename);
    File << content;
    File.close();
}

void read_from_file(std::string filename){
    std::string text;
    std::ifstream File(filename);
    while(std::getline(File, text)){
        std::cout << text;
    }
    File.close();
}


int main(void){
    std::string name1 = "file.txt";
    std::string name2 = "random_file.txt";

    write_to_file(name1, "Files can be tricky, but it is fun enough!");
    read_from_file(name2);
    return 0;
}
