#include <fstream>
#include <string>
using namespace std;
string currentLineData;
ifstream mainTppFile("app.tpp");
int integers[50];
double doubles[50];
string strings[50];
bool autoexit = false;
#include "variables.h"
#include "math.h"
#include "console.h"

int main() {
    while (autoexit == false) {
        while (getline(mainTppFile, currentLineData)) {
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
            if (currentLineData.contains("console (")) {
                console();
            }
            if (currentLineData.contains("system.setAutoExit(false)")) {
                autoexit = false;
            }
            if (currentLineData.contains("system.setAutoExit(true)")) {
                autoexit = true;
            }
        }
    }
    return 0;
}
