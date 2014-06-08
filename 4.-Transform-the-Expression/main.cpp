#include <iostream>
#include <stack>
#include <queue>
#include <string>

//#define STDIN 1

using namespace std;

/*
top
    Access next element (public member function )

push
    Insert element (public member function )

pop
    Remove top element (public member function )
*/

string convert(string input) {
    stack<char> stackOperator;
    queue<char> queueOutput; //have output
    string operators = "+-*/^";
    string res;
    for (int i = 0; i < input.size(); i++) {
        if (isalpha(input[i])) { //If it is an operand, push it to the output
            queueOutput.push(input[i]); 
        } 
        else if (operators.find(input[i]) != string::npos) {
            /* If it's an operator - check for precedence if the top of the stack is an operator and it has higher precedence than current operator 
            then pop the stack and push onto output, continue until condition is false. Then push in the current operator into stack.
            */
            while (stackOperator.size() > 0 && operators.find(stackOperator.top()) != string::npos 
                                 && (operators.find(input[i]) <= operators.find(stackOperator.top()))) {
                queueOutput.push(stackOperator.top());
                stackOperator.pop();
            }     
            stackOperator.push(input[i]);
        } 
        else if (input[i] == '(') { // If it is a left bracket, push onto stack
            stackOperator.push('(');
        }
        else if (input[i] == ')') { // If it is a right bracket, keep popping the stack and pushing into the output until a left bracket is encountered
            while (!stackOperator.empty()) {
                if (stackOperator.top() == '(') {
                    stackOperator.pop();
                    break;
                }       
                queueOutput.push(stackOperator.top());
                stackOperator.pop();
            }
        }
    }

    while (!stackOperator.empty()) { //keep popping the stack and pushing into the output 
        queueOutput.push(stackOperator.top());
        stackOperator.pop();
    }

    while (!queueOutput.empty()) { // make the string
        res += queueOutput.front();
        queueOutput.pop();
    }

    return res; 
}

int main() {
#ifdef STDIN
    int no;
    cin >> no;
    string str;
    while (no--) {
        cin >> str;
        cout << convert(str) << endl;
    }
#endif

#ifndef STDIN
    cout << convert("(a+(b*c))") << endl;
    cout << convert("((a+t)*((b+(a+c))^(c+d)))") << endl;
#endif
return 0;
}
