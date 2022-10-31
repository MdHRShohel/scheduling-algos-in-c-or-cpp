# include <iostream>
using namespace std;

int main() {

  char op;
  float number1, number2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two number to be calculated: ";
  cin >> number1 >> number2;

  switch(op) {

    case '+':
      cout << number1 << " + " << number2 << " = " << number1 + number2;
      break;

    case '-':
      cout << number1 << " - " << number2 << " = " << number1 - number2;
      break;

    case '*':
      cout << number1 << " * " << number2 << " = " << number1 * number2;
      break;

    case '/':
      cout << number1 << " / " << number2 << " = " << num1 / number2;
      break;

    default:
      
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
//by shimmer12
