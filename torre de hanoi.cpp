// torre de hanoi.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stack>

using namespace std;

stack <string> mostraPilhas(stack <string> coluna1, stack <string> coluna2, stack <string> coluna3, stack <string> aux1, stack <string> aux2, stack <string> aux3, string espa, int difer)
{
    cout << endl << endl << endl;
    if (coluna1.size() > coluna2.size() && coluna1.size() > coluna3.size())
    {
        while (!coluna1.empty())
        {

            difer = 12 - (coluna1.top().length() / 2);

            while (difer != 0)
            {
                cout << espa;
                difer--;
            }
            cout << coluna1.top() ;

            difer = 12 - (coluna1.top().length() / 2);

            while (difer != 0)
            {
                cout << espa;
                difer--;
            }

            aux1.push(coluna1.top());

            if (coluna2.size() != 0) {
                if (coluna1.size() == coluna2.size())
                {
                    difer = 12 - (coluna2.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }
                    cout << coluna2.top();

                    difer = 12 - (coluna2.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }
                    aux2.push(coluna2.top());
                    coluna2.pop();
                }
                else
                {
                    cout << "                        ";
                }
            }
            else {
                cout << "                        ";
            }
            if (coluna3.size() != 0) {
                if (coluna1.size() == coluna3.size())
                {
                    difer = 12 - (coluna3.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }
                    cout << coluna3.top();

                    aux3.push(coluna3.top());
                    coluna3.pop();
                }
                else
                {
                    cout << "                        ";
                }
            }
            else {
                cout << "                        ";
            }
            coluna1.pop();
            cout << endl;
        }
    }
    if (coluna2.size() > coluna1.size() && coluna2.size() > coluna3.size())
    {
        while (!coluna2.empty())
        {
            if (coluna1.size() != 0) {
                if (coluna2.size() == coluna1.size())
                {
                    difer = 12 - (coluna1.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }
                    cout << coluna1.top();

                    difer = 12 - (coluna1.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }

                    aux1.push(coluna1.top());
                    coluna1.pop();
                }
                else
                {
                    cout << "                        ";
                }
            }
            else {
                cout << "                        ";
            }

            difer = 12 - (coluna2.top().length() / 2);

            while (difer != 0)
            {
                cout << espa;
                difer--;
            }
            cout << coluna2.top();

            difer = 12 - (coluna2.top().length() / 2);

            while (difer != 0)
            {
                cout << espa;
                difer--;
            }

            aux1.push(coluna2.top());


            if (coluna3.size() != 0) {
                if (coluna2.size() == coluna3.size())
                {
                    difer = 12 - (coluna3.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }
                    cout << coluna3.top();

                    aux3.push(coluna3.top());
                    coluna3.pop();
                }
                else
                {
                    cout << "                        ";
                }
            }
            else {
                cout << "                        ";
            }
            coluna2.pop();
            cout << endl;
        }
    }
    if (coluna3.size() > coluna2.size() && coluna3.size() > coluna1.size())
    {
        while (!coluna3.empty())
        {
            if (coluna1.size() != 0) {
                if (coluna3.size() == coluna1.size())
                {
                    difer = 12 - (coluna1.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }
                    cout << coluna1.top();

                    difer = 12 - (coluna1.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }

                    aux3.push(coluna1.top());
                    coluna1.pop();
                }
                else
                {
                    cout << "                        ";
                }
            }
            else {
                cout << "                        ";
            }

            if (coluna2.size() != 0) {
                if (coluna3.size() == coluna2.size())
                {
                    difer = 12 - (coluna2.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }
                    cout << coluna2.top();

                    difer = 0;

                    difer = 12 - (coluna2.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }

                    aux2.push(coluna2.top());
                    coluna2.pop();

                }
                else
                {
                    cout << "                        ";
                }
            }
            else {
                cout << "                        ";
            }

            difer = 12 - (coluna3.top().length() / 2);

            while (difer != 0)
            {
                cout << espa;
                difer--;
            }
            cout << coluna3.top();

            aux1.push(coluna3.top());

            coluna3.pop();
            cout << endl;
        }
    }
    if (coluna3.size() == coluna2.size() && coluna3.size() > coluna1.size())
    {
        while (!coluna3.empty())
        {
            if (coluna1.size() != 0) {
                if (coluna3.size() == coluna1.size())
                {
                    difer = 12 - (coluna1.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }
                    cout << coluna1.top();

                    difer = 12 - (coluna1.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }

                    aux3.push(coluna1.top());
                    coluna1.pop();
                }
                else
                {
                    cout << "                        ";
                }
            }
            else {
                cout << "                        ";
            }

            if (coluna2.size() != 0) {
                if (coluna3.size() == coluna2.size())
                {
                    difer = 12 - (coluna2.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }
                    cout << coluna2.top();

                    difer = 12 - (coluna2.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }

                    aux2.push(coluna2.top());
                    coluna2.pop();
                }
                else
                {
                    cout << "                        ";
                }
            }
            else {
                cout << "                        ";
            }

            difer = 12 - (coluna3.top().length() / 2);

            while (difer != 0)
            {
                cout << espa;
                difer--;
            }
            cout << coluna3.top();

            aux1.push(coluna3.top());

            coluna3.pop();
            cout << endl;
        }
    }
    if (coluna1.size() == coluna2.size() && coluna1.size() > coluna3.size())
    {
        while (!coluna1.empty())
        {
            difer = 12 - (coluna1.top().length() / 2);

            while (difer != 0)
            {
                cout << espa;
                difer--;
            }
            cout << coluna1.top();

            difer = 12 - (coluna1.top().length() / 2);

            while (difer != 0)
            {
                cout << espa;
                difer--;
            }

            aux1.push(coluna1.top());

            if (coluna2.size() != 0) {
                if (coluna1.size() == coluna2.size())
                {
                    difer = 12 - (coluna2.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }
                    cout << coluna2.top();

                    difer = 12 - (coluna2.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }

                    aux2.push(coluna2.top());
                    coluna2.pop();
                }
                else
                {
                    cout << "                        ";
                }
            }
            else {
                cout << "                        ";
            }
            if (coluna3.size() != 0) {
                if (coluna1.size() == coluna3.size())
                {
                    difer = 12 - (coluna3.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }
                    cout << coluna3.top();

                    aux3.push(coluna3.top());
                    coluna3.pop();
                }
                else
                {
                    cout << "                        ";
                }
            }
            else {
                cout << "                        ";
            }
            coluna1.pop();
            cout << endl;
        }
    }
    if (coluna1.size() == coluna2.size() && coluna1.size() == coluna3.size())
    {
        while (!coluna1.empty())
        {
            difer = 12 - (coluna1.top().length() / 2);

            while (difer != 0)
            {
                cout << espa;
                difer--;
            }
            cout << coluna1.top();

            difer = 12 - (coluna1.top().length() / 2);

            while (difer != 0)
            {
                cout << espa;
                difer--;
            }

            aux1.push(coluna1.top());

            if (coluna2.size() != 0) {
                if (coluna1.size() == coluna2.size())
                {
                    difer = 12 - (coluna2.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }
                    cout << coluna2.top();

                    difer = 12 - (coluna2.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }

                    aux2.push(coluna2.top());
                    coluna2.pop();
                }
                else
                {
                    cout << "                        ";
                }
            }
            else {
                cout << "                        ";
            }
            if (coluna3.size() != 0) {
                if (coluna1.size() == coluna3.size())
                {
                    difer = 12 - (coluna3.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }
                    cout << coluna3.top();


                    aux3.push(coluna3.top());
                    coluna3.pop();
                }
                else
                {
                    cout << "                        ";
                }
            }
            else {
                cout << "                        ";
            }
            coluna1.pop();
            cout << endl;
        }
    }
    if (coluna3.size() == coluna1.size() && coluna3.size() > coluna2.size())
    {
        while (!coluna3.empty())
        {
            if (coluna1.size() != 0) {
                if (coluna3.size() == coluna1.size())
                {
                    difer = 12 - (coluna1.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }
                    cout << coluna1.top();

                    difer = 12 - (coluna1.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }

                    aux3.push(coluna1.top());
                    coluna1.pop();
                }
                else
                {
                    cout << "                        ";
                }
            }
            else {
                cout << "                        ";
            }

            if (coluna2.size() != 0) {
                if (coluna3.size() == coluna2.size())
                {
                    difer = 12 - (coluna2.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }
                    cout << coluna2.top();

                    difer = 12 - (coluna2.top().length() / 2);

                    while (difer != 0)
                    {
                        cout << espa;
                        difer--;
                    }

                    aux2.push(coluna2.top());
                    coluna2.pop();
                }
                else
                {
                    cout << "                        ";
                }
            }
            else {
                cout << "                        ";
            }

            difer = 12 - (coluna3.top().length() / 2);

            while (difer != 0)
            {
                cout << espa;
                difer--;
            }
            cout << coluna3.top();

            aux1.push(coluna3.top());

            coluna3.pop();
            cout << endl;
        }
    }

    cout << "           T1                      T2                      T3\n\n\n";

    while (!aux1.empty())
    {
        coluna1.push(aux1.top());
        aux1.pop();
    }

    while (!aux2.empty())
    {
        coluna2.push(aux2.top());
        aux2.pop();
    }

    while (!aux3.empty())
    {
        coluna3.push(aux3.top());
        aux3.pop();
    }

    return coluna1, coluna2, coluna3;

}

int main()
{
    string espa = " ";
    int difer = 0;
    stack <string> coluna1, aux1;
    stack <string> coluna2, aux2;
    stack <string> coluna3, aux3;
    string nome;
    bool jogada = false;
    int discoE;
    int discoS;
    int discos;
    int jogadas;
    int resp;
    bool entrar = false;

    bool novo = false;

    cout << "=============TORRE DE HANOI=============\n\n";
    cout << "1)Iniciar\n2)Regras\n3)Sair do jogo\n";
    while (!entrar)
    {
        cin >> resp;
        if (resp == 1)
        {
            system("cls");
            entrar = true;
        }
        else if (resp == 2)
        {
            system("pause");
            system("cls");
            cout << "O objectivo deste jogo consiste em deslocar todos os discos da haste onde se encontram para uma haste diferente, respeitando as seguintes regras:\nMovimentar uma so peca (disco) de cada vez.\nUma peca maior nao pode ficar acima de uma menor.\nNao eh permitido movimentar uma peca que esteja abaixo de outra.\n\n\n";
            system("pause");
            system("cls");
            cout << "=============TORRE DE HANOI=============\n\n";
            cout << "1)Iniciar\n2)Regras\n3)Sair do jogo\n";
        }
        else if (resp == 3)
        {
            cout << "Agradecemos por jogar\n\n";
            entrar = true;
            novo = true;
        }
        else {
            cout << "resposta invalida, tente novamente\n";
        }
    }

    while (!novo)
    {
        jogadas = 0;
        cout << "Insira seu primeiro nome\n";
        cin >> nome;
        cout << "\n\n\n" << nome << ", com quantos discos voce gostaria de jogar? (inserir numero maior que 3)\n";
        cin >> discos;

        if (discos < 3)
        {
            cout << "numero inserido eh menor que 3, o jogo iniciara com 3 colunas\n";
            discos = 3;
        }
        system("pause");
        system("cls");
        aux1.push("* ");
        while (discos != aux1.size())
        {
            aux1.push(aux1.top() + "* ");
        }

        while (!aux1.empty())
        {
            coluna1.push(aux1.top());
            aux1.pop();
        }

        mostraPilhas(coluna1, coluna2, coluna3, aux1, aux2, aux3, espa, difer);

        while (!jogada)
        {
            cout << nome << ", voce gostaria de movimentar o primeiro disco de que coluna\n1)T1\n2)T2\n3)T3\n\n";
            cin >> discoS;
            switch (discoS) {
            case 1:
                    if (coluna1.empty())
                    {
                        cout << "Coluna vazia\n";
                        break;
                    }
                    cout << "Para qual coluna\n2)T2\n3)T3\n\n";
                    cin >> discoE;

                        switch (discoE)
                        {
                        case 2:
                            if (!coluna2.empty())
                            {
                                if (coluna1.top().length() > coluna2.top().length())
                                {
                                    cout << "Impossivel fazer alteracao\n";
                                }

                                else {
                                    coluna2.push(coluna1.top());
                                    coluna1.pop();
                                    jogadas++;
                                }
                            }
                            else {
                                coluna2.push(coluna1.top());
                                coluna1.pop();
                                jogadas++;
                            }
                            break;
                        case 3:
                            if (!coluna3.empty())
                            {
                                if (coluna1.top().length() > coluna3.top().length())
                                {
                                    cout << "Impossivel fazer alteracao\n";
                                }

                                else {
                                    coluna3.push(coluna1.top());
                                    coluna1.pop();
                                    jogadas++;
                                }
                            }
                            else {
                                coluna3.push(coluna1.top());
                                coluna1.pop();
                                jogadas++;
                            }
                            break;
                        default:
                            cout << "Valor invalido\n";
                        }
                    
                    break;

                case 2:
                    if (coluna2.empty())
                    {
                        cout << "Coluna vazia\n";
                        break;
                    }
                    cout << "Para qual coluna\n1)T1\n3)T3\n\n";
                    cin >> discoE;

                        switch (discoE)
                        {
                        case 1:
                            if (!coluna1.empty())
                            {
                                if (coluna2.top().length() > coluna1.top().length())
                                {
                                    cout << "Impossivel fazer alteracao\n";
                                }

                                else {
                                    coluna1.push(coluna2.top());
                                    coluna2.pop();
                                    jogadas++;
                                }
                            }
                            else {
                                coluna1.push(coluna2.top());
                                coluna2.pop();
                                jogadas++;
                            }

                            break;
                        case 3:
                            if (!coluna3.empty())
                            {
                                if (coluna2.top().length() > coluna3.top().length())
                                {
                                    cout << "Impossivel fazer alteracao\n";
                                }

                                else {
                                    coluna3.push(coluna2.top());
                                    coluna2.pop();
                                    jogadas++;
                                }
                            }
                            else {
                                coluna3.push(coluna2.top());
                                coluna2.pop();
                                jogadas++;
                            }
                            break;
                        default:
                            cout << "Valor invalido\n";
                        }
                    
                    break;

                case 3:
                    if (coluna3.empty())
                    {
                        cout << "Coluna vazia\n";
                        break;
                    }
                    cout << "Para qual coluna\n1)T1\n2)T2\n\n";
                    cin >> discoE;
                        switch (discoE)
                        {
                        case 1:
                            if (!coluna1.empty())
                            {
                                if (coluna3.top().length() > coluna1.top().length())
                                {
                                    cout << "Impossivel fazer alteracao\n";
                                }

                                else {
                                    coluna1.push(coluna3.top());
                                    coluna3.pop();
                                    jogadas++;
                                }
                            }
                            else {
                                coluna1.push(coluna3.top());
                                coluna3.pop();
                                jogadas++;
                            }
                            break;
                        case 2:
                            if (!coluna2.empty())
                            {
                                if (coluna3.top().length() > coluna2.top().length())
                                {
                                    cout << "Impossivel fazer alteracao\n";
                                }

                                else {
                                    coluna2.push(coluna3.top());
                                    coluna3.pop();
                                    jogadas++;
                                }
                            }
                            else {
                                coluna2.push(coluna3.top());
                                coluna3.pop();
                                jogadas++;
                            }
                            break;
                        default :
                            cout << "Valor invalido\n";
                        }
                    
                    break;
                    default:
                    cout << "Valor invalido\n";
                
            }

            system("pause");
            system("cls");

            mostraPilhas(coluna1, coluna2, coluna3, aux1, aux2, aux3, espa, difer);

            if (coluna3.size() == discos)
            {
                jogada = true;
            }
        }

        cout << jogadas << " jogadas feitas" << endl;

        cout << "Parabens, " << nome << ", voce conseguiu\n\n";

        cout << nome << ", voce gostaria de jogar novamente?\n1)Sim\n2)Nao\n";
        cin >> resp;

        if (resp == 1)
        {
            system("pause");
            system("cls");
        }
        else if (resp == 2)
        {
            cout << "Agradecemos por jogar\n\n\n\n";
            novo = true;
        }

    }
}



