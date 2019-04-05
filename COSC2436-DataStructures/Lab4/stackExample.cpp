 #include"iostream"
    #define MAX_SIZE 5
    using namespace std;
    class Mystack
    {
    private:
        int A[MAX_SIZE];
        int top;
    public:
        Mystack();
        void push(int x);
        void pop();
        void topElement();
        void print();
        void isEmpty();
    };
        Mystack::Mystack()
        {
            top = -1;
        }
        void Mystack::push(int x)
        {
            if(top == MAX_SIZE-1)
            {
                cout << "Stack Overflow"<< endl;
                return;
            }
            else
            {
                top++;
                A[top] = x;
            }
        }
        void Mystack::pop()
        {
            if (top != -1)
            {
                top--;
            }
            else
            {
                cout << "Stack Underflow" << endl;
                return;
            }
        }
        void Mystack::isEmpty()
        {
            if (top == -1)
            {
                cout << "Is Empty"<< endl;
            }
            else
            {
                cout << "Not Empty" << endl;
            }
        }
        void Mystack::topElement()
        {
            cout<<"The top element is : "<< A[top];
        }
        void Mystack::print()
        {
            for (int i = 0; i <=top; i++)
            {
                cout << "top:  " << A[i]<< endl;
            }
        }
    int main()
    {
        Mystack s1;
        int num,ch = 1;
        while (ch >0)
        {
            cout << "\n1. PUSH" << endl;
            cout << "2. TOP" << endl;
            cout << "3. IsEmpty" << endl;
            cout << "4. POP" << endl;
            cout << "5. EXIT" << endl;
            cout << "6. Print" << endl;
            cout << "Enter the choice"<<endl;
            cin >> ch;
            switch (ch)
            {
            case 1:
                cout << "Enter the number to be pushed" << endl;
                cin >> num;
                s1.push(num);
                break;
            case 2:
                cout << "Get the TOP Element" << endl;
                s1.topElement();
                break;
            case 3:
                cout << "Check Empty" << endl;
                s1.isEmpty();
                break;
            case 4:
                cout << "POP the element" << endl;
                s1.pop();
                break;
            case 5: exit(0);
            case 6:
                s1.print();
                break;
            }
        }
        system("pause");
    }
