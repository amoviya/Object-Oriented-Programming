#include<iostream>
using namespace std;

// Forward declaration for the vector class
class vector; 

// Forward declaration for the friend function
class matrices;
vector vector_matrices_sangam(vector * v1, matrices * m1);

// Corrected class name from 'vecttor' to 'vector'
class vector{
private:
    int arr2[2];
public:
    vector(int a, int b){
        this->arr2[0] = a;
        this->arr2[1] = b;
    }
    void get_vector(void){
        cout << "The vector is " << arr2[0] << " " << arr2[1] << endl;
    }
    // Corrected friend declaration for the function to access private members
    friend vector vector_matrices_sangam(vector * v1, matrices * m1); 
};

class matrices{
private:
    int arr[2][2];
public:
    matrices(int a, int b, int c, int d){
        this->arr[0][0] = a;
        this->arr[0][1] = b;
        this->arr[1][0] = c;
        this->arr[1][1] = d;
    }
    void get_matrices(){
        cout << "The matrix: " << arr[0][0] << " " << arr[0][1] << " " << arr[1][0] << " " << arr[1][1] << endl;
    }
    // The friend declaration is correct here, it just needs to be a friend of the vector class as well.
    friend vector vector_matrices_sangam(vector * v1, matrices * m1);
};

// Non-member function
vector vector_matrices_sangam(vector * v1, matrices * m1){
    vector v2(0, 0);
    // Corrected the matrix-vector multiplication logic and removed the syntax error '->>'
    v2.arr2[0] = m1->arr[0][0] * v1->arr2[0] + m1->arr[0][1] * v1->arr2[1];
    v2.arr2[1] = m1->arr[1][0] * v1->arr2[0] + m1->arr[1][1] * v1->arr2[1];

    return v2;
}

int main(){
    matrices m1(1, 2, 3, 4);
    m1.get_matrices();
    
    // Corrected class name
    vector v1(2, 8), v3(0, 0);
    v1.get_vector();
    v3 = vector_matrices_sangam(&v1, &m1);
    v3.get_vector(); // Added this to see the result
    return 0;
}