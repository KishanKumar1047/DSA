#include <iostream>
using namespace std;

// Define a Node structure to represent each term in the polynomial
struct Node {
    int coeff;  // Coefficient of the term
    int exp;    // Exponent of the term
    Node* next; // Pointer to the next node

    // Constructor to create a new node
    Node(int c, int e) {
        coeff = c;
        exp = e;
        next = nullptr;
    }
};

// Function to insert a term into the polynomial list
void insertTerm(Node*& poly, int coeff, int exp) {
    Node* newNode = new Node(coeff, exp);
    
    if (!poly) {
        poly = newNode;  // Insert at the head if the list is empty
        return;
    }
    
    Node* temp = poly;
    // Insert the new term at the end of the list
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the polynomial
void displayPoly(Node* poly) {
    bool isFirst = true;  // To avoid printing + for the first term
    while (poly != nullptr) {
        if (!isFirst && poly->coeff >= 0) {
            cout << " + ";
        }
        if (poly->exp == 0) {
            cout << poly->coeff;  // No need for x^0
        } else if (poly->exp == 1) {
            cout << poly->coeff << "x";  // No need for x^1
        } else {
            cout << poly->coeff << "x^" << poly->exp;
        }
        poly = poly->next;
        isFirst = false;
    }
    cout << endl;
}

// Function to add two polynomials represented by linked lists
Node* addPolynomials(Node* poly1, Node* poly2) {
    Node* result = nullptr;  // Resultant polynomial

    // Traverse both linked lists
    while (poly1 != nullptr && poly2 != nullptr) {
        if (poly1->exp == poly2->exp) {
            // Add coefficients if exponents are equal
            int sumCoeff = poly1->coeff + poly2->coeff;
            if (sumCoeff != 0) {
                insertTerm(result, sumCoeff, poly1->exp);
            }
            poly1 = poly1->next;
            poly2 = poly2->next;
        } else if (poly1->exp > poly2->exp) {
            // Add term from poly1 if its exponent is greater
            insertTerm(result, poly1->coeff, poly1->exp);
            poly1 = poly1->next;
        } else {
            // Add term from poly2 if its exponent is greater
            insertTerm(result, poly2->coeff, poly2->exp);
            poly2 = poly2->next;
        }
    }

    // If poly1 has remaining terms, add them to result
    while (poly1 != nullptr) {
        insertTerm(result, poly1->coeff, poly1->exp);
        poly1 = poly1->next;
    }

    // If poly2 has remaining terms, add them to result
    while (poly2 != nullptr) {
        insertTerm(result, poly2->coeff, poly2->exp);
        poly2 = poly2->next;
    }

    return result;
}

int main() {
    // Create first polynomial: 2x^8 - 5x^7 - 3x^2 + 4
    Node* poly1 = nullptr;
    insertTerm(poly1, 2, 8);
    insertTerm(poly1, -5, 7);
    insertTerm(poly1, -3, 2);
    insertTerm(poly1, 4, 0);

    // Create second polynomial: 5x^8 + 4x^6 + 2x^2 + x - 1
    Node* poly2 = nullptr;
    insertTerm(poly2, 5, 8);
    insertTerm(poly2, 4, 6);
    insertTerm(poly2, 2, 2);
    insertTerm(poly2, 1, 1);
    insertTerm(poly2, -1, 0);

    // Display the polynomials
    cout << "Polynomial 1: ";
    displayPoly(poly1);
    cout << "Polynomial 2: ";
    displayPoly(poly2);

    // Add the two polynomials
    Node* sum = addPolynomials(poly1, poly2);

    // Display the result
    cout << "Sum: ";
    displayPoly(sum);

    return 0;
}
