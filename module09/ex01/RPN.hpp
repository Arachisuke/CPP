#ifndef RPN_HPP
#define RPN_HPP

#include <list>
#include <stack>
#include <string>

class RPN {
public:
    RPN();
    RPN(const RPN& other);
    RPN& operator=(const RPN& other);
    ~RPN();

    int calculate(const std::string& expression);

private:
    std::stack<int, std::list<int> > _stack;
    bool isOperator(char c) const;
    int applyOperator(char op, int a, int b) const;
};

#endif

// a efface
//

// du coup la t'as bien valide relis le reteste le en bal et puis basta c'est valide bro.


// a efface