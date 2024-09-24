#include <iostream>
using namespace std;

// Class to represent a node in the polynomial linked list
class Node {
public:
    int coeff;  // Coefficient of the term
    int exp;    // Exponent of the term
    Node* next; // Pointer to the next node

    // Constructor to create a new node
    Node(int c, int e) : coeff(c), exp(e), next(nullptr) {}
};

// Class to represent a polynomial as a linked list of nodes
class Polynomial {
private:
    Node* head;

public:
    // Constructor to initialize an empty polynomial
    Polynomial() : head(nullptr) {}

    // Function to insert a term into the polynomial
    void insertTerm(int coeff, int exp) {
        Node* newNode = new Node(coeff, exp);
        
        if (!head) {
            head = newNode;
            return;
        }
        
        Node* temp = head;
        // Insert the new node at the end of the list
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to display the polynomial
    void display() const {
        Node* temp = head;
        bool isFirst = true;  // To avoid printing + for the first term
        while (temp != nullptr) {
            if (!isFirst && temp->coeff >= 0) {
                cout << " + ";
            }
            if (temp->exp == 0) {
                cout << temp->coeff;  // No need for x^0
            } else if (temp->exp == 1) {
                cout << temp->coeff << "x";  // No need for x^1
            } else {
                cout << temp->coeff << "x^" << temp->exp;
            }
            temp = temp->next;
            isFirst = false;
        }
        cout << endl;
    }

    // Function to add another polynomial to this polynomial
    Polynomial addPolynomials(const Polynomial& other) const {
        Polynomial result;
        Node* p1 = head;
        Node* p2 = other.head;

        // Traverse both linked lists
        while (p1 != nullptr && p2 != nullptr) {
            if (p1->exp == p2->exp) {
                // Add coefficients if exponents are equal
                int sumCoeff = p1->coeff + p2->coeff;
                if (sumCoeff != 0) {
                    result.insertTerm(sumCoeff, p1->exp);
                }
                p1 = p1->next;
                p2 = p2->next;
            } else if (p1->exp > p2->exp) {
                // Add term from p1 if its exponent is greater
                result.insertTerm(p1->coeff, p1->exp);
                p1 = p1->next;
            } else {
                // Add term from p2 if its exponent is greater
                result.insertTerm(p2->coeff, p2->exp);
                p2 = p2->next;
            }
        }

        // If p1 has remaining terms, add them to result
        while (p1 != nullptr) {
            result.insertTerm(p1->coeff, p1->exp);
            p1 = p1->next;
        }

        // If p2 has remaining terms, add them to result
        while (p2 != nullptr) {
            result.insertTerm(p2->coeff, p2->exp);
            p2 = p2->next;
        }

        return result;
    }
};

int main() {
    // Create first polynomial: 2x^8 - 5x^7 - 3x^2 + 4
    Polynomial poly1;
    poly1.insertTerm(2, 8);
    poly1.insertTerm(-5, 7);
    poly1.insertTerm(-3, 2);
    poly1.insertTerm(4, 0);

    // Create second polynomial: 5x^8 + 4x^6 + 2x^2 + x - 1
    Polynomial poly2;
    poly2.insertTerm(5, 8);
    poly2.insertTerm(4, 6);
    poly2.insertTerm(2, 2);
    poly2.insertTerm(1, 1);
    poly2.insertTerm(-1, 0);

    // Display the polynomials
    cout << "Polynomial 1: ";
    poly1.display();
    cout << "Polynomial 2: ";
    poly2.display();

    // Add the two polynomials
    Polynomial sum = poly1.addPolynomials(poly2);

    // Display the result
    cout << "Sum: ";
    sum.display();

    return 0;
}
