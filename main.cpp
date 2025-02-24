#include <fstream>
#include <string>
using namespace std;
string currentLineData;
ifstream mainTppFile("app.tpp");
int integers[50];
double doubles[50];
string strings[50];
#include "variables.h"
#include "math.h"

int main() {
    while (getline (mainTppFile, currentLineData)) {
        if (currentLineData.contains("int")) {
            newInt();
        }
        if (currentLineData.contains("double")) {
            newDouble();
        }
        if (currentLineData.contains("string")) {
            newString();
        }
        if (currentLineData.contains("math (")) {
            math();
        }
    }
    return 0;
}