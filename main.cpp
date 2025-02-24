#include <fstream>
#include <string>
using namespace std;
string currentLineData;
ifstream mainTppFile("app.tpp");
int integers[50];
#include "variables.h"

int main() {
    while (getline (mainTppFile, currentLineData)) {
        if (currentLineData.contains("int")) {
            newInt();
        }
    }
    return 0;
}