#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>

std::unordered_map<std::string, std::string> syntaxMapping = {
    {"int", "int"},
    {"float", "float"},
    {"double", "float"},  // Map double to float in Python
    {"char", "str"},
    {"std::cout", "print"},
    {"<<", ","},
    {"std::cin", "input"},
    {">>", "="},
    {"for", "for"},
    {"while", "while"},
    {"if", "if"},
    {"else", "else"},
};

std::string transpileToPython(const std::string& cppCode) {
    std::istringstream iss(cppCode);
    std::string line;
    std::string pythonCode;

    while (std::getline(iss, line)) {
        std::istringstream lineStream(line);
        std::string word;
        std::vector<std::string> pythonTokens;

        while (lineStream >> word) {
            if (syntaxMapping.count(word) > 0) {
                pythonTokens.push_back(syntaxMapping[word]);
            } else {
                pythonTokens.push_back(word);
            }
        }

        std::copy(pythonTokens.begin(), pythonTokens.end(), std::ostream_iterator<std::string>(pythonCode, " "));
        pythonCode += "\n";
    }

    return pythonCode;
}

int main() {
    std::ifstream inputFile("input.cpp");
    if (!inputFile) {
        std::cout << "Failed to open input file!" << std::endl;
        return 1;
    }

    std::stringstream buffer;
    buffer << inputFile.rdbuf();
    std::string cppCode = buffer.str();

    std::string pythonCode = transpileToPython(cppCode);

    std::ofstream outputFile("output.py");
    if (!outputFile) {
        std::cout << "Failed to open output file!" << std::endl;
        return 1;
    }
    outputFile << pythonCode;
    outputFile.close();

    std::cout << "Transpilation completed successfully. Python code saved in output.py" << std::endl;

    return 0;
}

