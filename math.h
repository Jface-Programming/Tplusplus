#ifndef MATH_H
#define MATH_H
string num1type;
string num2type;
string num3type;
string mathOperator;
string var1string;
string var2string;
string var3string;
int var1;
int var2;
int var3;
long double num1;
long double num2;
void math() {
    getline(mainTppFile, num1type);
    getline(mainTppFile, num2type);
    getline(mainTppFile, num3type);
    getline(mainTppFile, mathOperator);
    if (mathOperator.contains("+")) {
        getline(mainTppFile, var1string);
        getline(mainTppFile, var2string);
        getline(mainTppFile, var3string);
        var1 = stoi(var1string);
        var2 = stoi(var2string);
        var3 = stoi(var3string);
        if (num1type.contains("integer")) {
            num1 = integers[var1];
        }
        if (num1type.contains("double")) {
            num1 = doubles[var1];
        }
        if (num2type.contains("integer")) {
            num2 = integers[var2];
        }
        if (num2type.contains("double")) {
            num2 = doubles[var2];
        }
        if (num3type.contains("integer")) {
            integers[var3] = num1 + num2;
        }
        if (num3type.contains("double")) {
            doubles[var3] = num1 + num2;
        }
    }
    if (mathOperator.contains("*")) {
        getline(mainTppFile, var1string);
        getline(mainTppFile, var2string);
        getline(mainTppFile, var3string);
        var1 = stoi(var1string);
        var2 = stoi(var2string);
        var3 = stoi(var3string);
        if (num1type.contains("integer")) {
            num1 = integers[var1];
        }
        if (num1type.contains("double")) {
            num1 = doubles[var1];
        }
        if (num2type.contains("integer")) {
            num2 = integers[var2];
        }
        if (num2type.contains("double")) {
            num2 = doubles[var2];
        }
        if (num3type.contains("integer")) {
            integers[var3] = num1 + num2;
        }
        if (num3type.contains("double")) {
            doubles[var3] = num1 * num2;
        }
    }
    if (mathOperator.contains("-")) {
        getline(mainTppFile, var1string);
        getline(mainTppFile, var2string);
        getline(mainTppFile, var3string);
        var1 = stoi(var1string);
        var2 = stoi(var2string);
        var3 = stoi(var3string);
        if (num1type.contains("integer")) {
            num1 = integers[var1];
        }
        if (num1type.contains("double")) {
            num1 = doubles[var1];
        }
        if (num2type.contains("integer")) {
            num2 = integers[var2];
        }
        if (num2type.contains("double")) {
            num2 = doubles[var2];
        }
        if (num3type.contains("integer")) {
            integers[var3] = num1 + num2;
        }
        if (num3type.contains("double")) {
            doubles[var3] = num1 - num2;
        }
    }
}
#endif //MATH_H
