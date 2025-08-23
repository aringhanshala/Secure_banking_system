#include <iostream>
#include <cstdlib>  // for system()
using namespace std;

// Stack class
class Stack {
private:
    int size;
    int *arr;
    int top;

public:
    // Constructor
    Stack(int s) {
        size = s;
        arr = new int[size];
        top = -1;
    }

    // Destructor
    ~Stack() {
        delete[] arr;
    }

    // Push function
    void push(int x) {
        if (top == size - 1) {
            cout << "Stack overflow!" << endl;
        } else {
            arr[++top] = x;
            cout << x << " pushed onto the stack" << endl;
            print();
        }
    }

    // Pop function
    int pop() {
        if (top == -1) {
            cout << "Stack underflow!" << endl;
            return -1;
        } else {
            int val = arr[top--];
            cout << val << " popped from the stack" << endl;
            return val;
        }
    }

    // IsEmpty function
    bool isEmpty() {
        return (top == -1);
    }

    // Size function
    int getSize() {
        return top + 1;
    }

    // Print function
    void print() {
        cout << "Stack: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Call bash intro script
    system("bash /home/ubuntu/intro.sh");

    int n;
    cout << "Enter the size of the stack: ";
    cin >> n;

    Stack st(n);

    int choice, value;
    do {
        cout << "\nPress:\n1 to push\n2 to pop\n3 to check size\n4 to check empty\n5 to print stack\n6 to exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter a value to push: ";
            cin >> value;
            st.push(value);
            break;

        case 2:
            st.pop();
            break;

        case 3:
            cout << "Current stack size: " << st.getSize() << endl;
            break;

        case 4:
            if (st.isEmpty())
                cout << "Stack is empty" << endl;
            else
                cout << "Stack is not empty" << endl;
            break;

        case 5:
            st.print();
            break;

        case 6:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 6);

    return 0;
}

