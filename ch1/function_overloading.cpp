import <iostream>;
import <string>;

using namespace std;

void print(int);
void print(double);
void print(string);
void user();

int main() {
  user();
}

void user() {
  print(42);
  print(9.65);
  print("Barcelona");
}




void print(int i) {
  cout << "integer" << endl;
  cout << i << endl;
}

void print(double d) {
  cout << "double" << endl;
  cout << d << endl;
}

void print(string s) {
  cout << "string" << endl;
  cout << s << endl;
}
