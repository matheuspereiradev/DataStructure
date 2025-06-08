#include <iostream>
#include "Queue.h"
#include "Stack.h"

using namespace std;

void testQueue();

void testStack();


int main() {
    testQueue();
    return 0;
}


void testQueue() {
    int op = 0;
    Queue queue;
    cout << "=====Vamos criar Filas=====" << endl;

    do {
        cout << "OPCOES" << endl;
        cout << "1- ADICIONAR" << endl;
        cout << "2- REMOVER" << endl;
        cout << "3- PICO" << endl;
        cout << "4- EXIBIR FILA" << endl;
        cout << "5- SAIR" << endl;
        cin >> op;

        switch (op) {
            case 1: {
                int valor;
                cout << "Adicionar numero" << endl;
                cin >> valor;
                queue.enqueue(valor);
                break;
            }
            case 2: {
                cout << "Elemento removido: " << queue.dequeue() << endl;
                break;
            }
            case 3: {
                cout << "Pico: " << queue.front() << endl;
                break;
            }
            case 4: {
                queue.printQueue();
                break;
            }
            case 5: {
                cout << "Até mais!" << endl;
                break;
            }
            default: {
                cout << "Opção invalida" << endl;
                break;
            };
        }
    } while (op != 5);
}

void testStack() {
    int op = 0;
    Stack stack;
    cout << "=====Vamos criar Pilhas=====" << endl;

    do {
        cout << "OPCOES" << endl;
        cout << "1- ADICIONAR" << endl;
        cout << "2- REMOVER" << endl;
        cout << "3- PICO" << endl;
        cout << "4- EXIBIR PILHA" << endl;
        cout << "5- SAIR" << endl;
        cin >> op;

        switch (op) {
            case 1: {
                int valor;
                cout << "Adicionar numero" << endl;
                cin >> valor;
                stack.push(valor);
                break;
            }
            case 2: {
                cout << "Elemento removido: " << stack.pop() << endl;
                break;
            }
            case 3: {
                cout << "Pico: " << stack.peek() << endl;
                break;
            }
            case 4: {
                stack.printStack();
                break;
            }
            case 5: {
                cout << "Até mais!" << endl;
                break;
            }
            default: {
                cout << "Opção invalida" << endl;
                break;
            };
        }
    } while (op != 5);
}
