import <iostream>;

using std::cout;
using std::endl;

struct Vector {
    double* elem; // allocate the pointer to the first element of the vector
                  // subsequent elements will be added afterwards
    size_t sz;    // number of sequential elements in the vector
    size_t n_elem;
};

void vector_init(Vector& v, int s) {
    v.elem = new double[s];
    v.sz = s;
    v.n_elem = 0;
    cout << "init end" << endl;
}

void vector_push(Vector& v, double elem) {
    if (v.n_elem < v.sz)
        v.elem[v.n_elem++] = elem;
    else {
        auto new_elems_ptr = new double[v.sz + 1];
        for (auto i = 0; i < v.sz; i++)
            new_elems_ptr[i] = v.elem[i];
        v.elem = new_elems_ptr;
        v.sz++;
        v.elem[++v.n_elem] = elem;
    }
}


void apply(Vector& v, std::ostream& os_obj) {
    for (auto i = 0; i < v.n_elem; i++)
        os_obj << v.elem[i];
}

int main() {

   Vector v;

    vector_init(v, 5);
    vector_push(v, 1);
    vector_push(v, 2);
    vector_push(v, 3);
    vector_push(v, 4);
    vector_push(v, 5);

    enumerate_elements(v, cout);

    return 0;
}
