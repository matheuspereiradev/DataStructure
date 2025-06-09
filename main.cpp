#include <iostream>
#include "Queue.h"
#include "Stack.h"
#include "LinkedList.h"

using namespace std;

void testQueue();

void testStack();

void testLinkedList();


int main() {
    testLinkedList();
    return 0;
}

void testLinkedList() {
    int op = 0;
    LinkedList list;
    cout << "===== Vamos testar a LinkedList =====" << endl;

    do {
        cout << "\nOPÇÕES" << endl;
        cout << "1 - ADICIONAR ELEMENTO" << endl;
        cout << "2 - REMOVER ELEMENTO" << endl;
        cout << "3 - EXIBIR ELEMENTO POR ÍNDICE" << endl;
        cout << "4 - EXIBIR TODOS ELEMENTOS" << endl;
        cout << "5 - TAMANHO DA LISTA" << endl;
        cout << "6 - PRIMEIRO ELEMENTO" << endl;
        cout << "7 - ÚLTIMO ELEMENTO" << endl;
        cout << "8 - SAIR" << endl;
        cout << "Escolha: ";
        cin >> op;

        switch (op) {
            case 1: {
                int valor, indice;
                cout << "Valor a adicionar: ";
                cin >> valor;
                cout << "Índice (ou -1 para final): ";
                cin >> indice;
                try {
                    list.add(valor, indice);
                    cout << "Elemento adicionado!" << endl;
                } catch (const exception &e) {
                    cout << "Erro: " << e.what() << endl;
                }
                break;
            }
            case 2: {
                int indice;
                cout << "Índice a remover (ou -1 para último): ";
                cin >> indice;
                try {
                    list.remove(indice);
                    cout << "Elemento removido!" << endl;
                } catch (const exception &e) {
                    cout << "Erro: " << e.what() << endl;
                }
                break;
            }
            case 3: {
                int indice;
                cout << "Índice do elemento: ";
                cin >> indice;
                try {
                    cout << "Elemento: " << list.get(indice) << endl;
                } catch (const exception &e) {
                    cout << "Erro: " << e.what() << endl;
                }
                break;
            }
            case 4: {
                list.print();
                break;
            }
            case 5: {
                cout << "Tamanho: " << list.getSize() << endl;
                break;
            }
            case 6: {
                try {
                    cout << "Primeiro: " << list.getFirst() << endl;
                } catch (const exception &e) {
                    cout << "Erro: " << e.what() << endl;
                }
                break;
            }
            case 7: {
                try {
                    cout << "Último: " << list.getLast() << endl;
                } catch (const exception &e) {
                    cout << "Erro: " << e.what() << endl;
                }
                break;
            }
            case 8: {
                cout << "Até mais!" << endl;
                break;
            }
            default: {
                cout << "Opção inválida!" << endl;
                break;
            }
        }
    } while (op != 8);
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
