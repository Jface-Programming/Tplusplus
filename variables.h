#ifndef VARIABLES_H
#define VARIABLES_H
#include <iostream>
#include <string>
int varName;
void newInt() {
    varName = 0;
    string intNameString = currentLineData.substr(currentLineData.find_first_not_of("int ") - 1);
    varName = stoi(intNameString);
    getline(mainTppFile, currentLineData);
    string intDataString = currentLineData.substr(currentLineData.find_first_not_of("= "));
    int intData = stoi(intDataString);
    integers[varName] = intData;
}

#endif //VARIABLES_H
