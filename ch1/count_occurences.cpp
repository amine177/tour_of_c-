import <iostream>;

using namespace std;

int count_x(const char* p, char x) {
    if (p == nullptr)
        return 0;
    int count = 0;
    while (*p) {
        if (*p == x)
            ++count;
        ++p;
    }
    return count;
}

int main(int argc, char** argv) {

    if (argc < 2) {
        cout << "Not enough arguments" << endl;
        cout << argv[0] << " s1 x" << endl;
        return 1;
    }

    cout << count_x(argv[1], *argv[2]) << " occurence(s) of " << *argv[2]
        << " in " << argv[1] << endl;

    return 0;
}
