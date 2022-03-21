#ifndef CF71767F_5BD6_42AC_B0E1_C219BCCE9F32
#define CF71767F_5BD6_42AC_B0E1_C219BCCE9F32

#include <iostream>
#include <time.h>
#include <vector>
#include <string.h>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
#include <map>
#include <sstream>
using namespace std;
#define EURO " €"

void linea(int n, char s);
int ctoi(char b);
int itoc(int b);
int ran(int nMax);

template <typename Type>
void carica(int dim, Type v[]);

template <typename Type>
void stampa(int dim, Type v[]);

float xcent(int perc, float num);

template <typename Type>
float mediaV(int dim, Type v[]);

template <typename Type>
int contaSuff(int dim, float n, Type v[]);

template <typename Type>
int contaInsuff(int dim, float n, Type v[]);

template <typename Type>
void ins_Rand(int M, int nMax, Type v[]);

template <typename Type>
void ordina(int dim, Type v[]);

template <typename Type>
void always_Ordina(int M, Type num[]);

template <typename Type>
int find(int ind, int x, Type num[]);

template <typename Type>
int find_Bin(int n, int x, Type v[]);

template <typename Type>
int maxV(int M, Type v[]);

template <typename Type>
int quantiMax(int M, Type v[]);

template <typename Type>
int minV(int M, Type v[]);

template <typename Type>
void scambio(Type &a, Type &b);

void sleep(int s);
string color(string word, string back, string frase);
string colorNum(string word, string back, int num);

void linea(int n, char s)
//stampa linee chiede un intero ovvero il numero di caratteri da stampare e un carattere
{
    for (int j = 0; j < n; j++)
    {
        cout << s;
    }
}

int ctoi(char b) //da carattere ad intero
{
    int i;
    i = (int)b;
    return i;
}

int itoc(int b)
{
    char v;
    v = (char)b;
    return b;
}

int ran(int nMax)
{
    /*GENERATORE DI NUMERI CASUALI*/
    int nGen;
    srand(unsigned(time(NULL)));
    nGen = rand() % nMax + 1;
    return nGen;
}

template <typename Type>
void carica(int dim, string out, Type v[])
{
    //Grazie a template saremo in grado di non specificare il tipo nella funzione
    for (int i = 0; i < dim; i++)
    {
        cout << out << i + 1 << ": ";
        cin >> v[i];
    }
}

template <typename Type>
void stampa(int dim, Type v[])
{
    //Grazie a template saremo in grado di non specificare il tipo nella funzione
    for (int i = 0; i < dim; i++)
    {
        cout << v[i] << " ";
    }
}

float xcent(int perc, float num)
{
    /*CALCOLO '%' */
    //Chiede la percentuale da calc, e il numero da calc
    const int cento = 100;
    float resto;
    resto = (float)(perc * num) / cento;
    return resto;
}

template <typename Type>
float mediaV(int dim, Type v[])
{
    /*MEDIA VETTORE*/
    //Chiede la dimenseione e il vettore
    float media = 0;
    for (int i = 0; i < dim; i++)
    {
        media += v[i];
    }
    media /= dim; //Calcola la media
    return media;
}

template <typename Type>
int contaSuff(int dim, float n, Type v[])
{
    /*CONTA SUFFICIENZE*/
    //Chiede la dimensione, il numero da controllare e il vettore
    int conta = 0;
    for (int i = 0; i < dim; i++)
    {
        if (v[i] >= n) //Controlla x quante volte un numero è maggiore all' vettore e' presente
            conta++;
    }
    return conta;
}

template <typename Type>
int contaInsuff(int dim, float n, Type v[])
{
    /*CONTA INSFUCCIENZE*/
    //Chiede la dimensione, il numero da controllare e il vettore
    int conta = 0;
    for (int i = 0; i < dim; i++)
    {
        if (v[i] < n) //Controlla x quante volte un numero minore all' vettore e' presente
            conta++;
    }
    return conta;
}

template <typename Type>
void ins_Rand(int M, int nMax, Type v[])
{
    /*INSERMENTO DI NUEMRI RANDOM IN UN VETTORE*/
    //Chiede dimensione e vettore
    srand(unsigned(time(NULL)));
    for (int i = 0; i < M; i++)
    {
        v[i] = rand() % nMax + 1;
    }
}

template <typename Type>
void ordina(int dim, Type v[])
{
    /*ORDINAMENTO*/
    //chiede in input la dimensione dell'array e l'array
    Type temp;
    for (int i = 0; i < dim - 1; i++)
    {
        for (int j = i + 1; j < dim; j++)
        {
            if (v[i] > v[j])
            {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}

template <typename Type>
void always_Ordina(int M, Type num[])
{
    /**SALVA IN UN VETTORE I NUMERI E DURANTE LO STESSO INSERMENTO LI ORDINA*/
    //Chiede in input i numeri da caricare nell'array
    int x, j;
    for (int i = 0; i < M; i++)
    {
        cout << "Inserisci numero " << i + 1 << ": ";
        cin >> x;
        j = 0;
        while (num[j] < x && j < i) //esce se ho trovato un elemento piu' grande oppure sono terminati gli elementi
        {
            j++; //posizione in cui inserire
        }
        //sposto a destra gli elementi da j ad i
        for (int y = i; y > j; y--)
        {
            num[y] = num[y - 1];
        }
        //inserisco in posizione j
        num[j] = x;
    }
}

template <typename Type>
int find(int ind, int x, Type num[])
{
    /*RICERCA LINEARE*/
    //Chiede in input la grandezza dell vettore, il numero da cercare e il vettore dove cercare
    bool trv = false;
    int p = 0;
    for (int i = 0; i < ind && !trv; i++)
    {
        if (num[i] == x)
        {
            trv = true;
            p = i;
        }
    }
    if (trv)
    {
        cout << "Il numero " << x << " si trv alla ps: " << p << endl;
    }
    else
        cout << "Numero inserito non trovato!\n";
    return p;
}

template <typename Type>
int find_Bin(int n, int x, Type v[])
{
    /**RICERCA BINARIA*/
    //chiede in input la dimensione, il vettore e il numero da cercare
    int indL = 0, indR = n - 1, indCalc;
    bool trv = false;
    ordina(n, v); //viene ordinato perchè la ricerca licotomica lo richiede
    do
    {
        indCalc = (indL + indR) / 2;
        if (v[indCalc] == x)
        {
            trv = true;
        }
        else
        {
            if (v[indCalc] > x)
                indR = indCalc - 1;
            else
                indL = indCalc + 1;
        }
    } while (!trv && indL <= indR);
    if (trv)
    {
        cout << "Il numero " << x << " si trv alla ps: " << indCalc << endl;
    }
    else
        cout << "Numero inserito non trovato!\n";
    return indCalc;
}

template <typename Type>
int maxV(int M, Type v[])
{
    /*RICERCA DEL MAX IN UN ARRAY*/
    //Chiede la dimensione e il vettore da controllare
    Type max = v[0];
    for (int i = 1; i < M; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    return max;
}

template <typename Type>
int quantiMax(int M, Type v[])
{
    /* Quante volte si ripete il numero max */
    int cont;
    Type max = v[0];
    for (int i = 1; i < M; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            cont = 1;
        }
        else
        {
            if (v[i] == max)
                cont++;
        }
    }
    return cont;
}

template <typename Type>
int minV(int M, Type v[])
{
    /*RICERCA DEL MIN IN UN ARRAY*/
    //Chiede la dimensione e il vettore da controllare
    Type min = v[0];
    for (int i = 1; i < M; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
    }
    return min;
}

template <typename Type>
void scambio(Type &a, Type &b)
{
    Type temp;
    temp = a;
    a = b;
    b = temp;
}

void sleep(int s)
{
    /*SLEEP*/
    //dati i secondi qst funzione fermera i thread per i secondi specificati
    this_thread::sleep_for(chrono::seconds(s));
}

void print_figlet(string nome)
{
    /*STAMPA FIGLET*/
    //Stampa un figlet messo in un file.txt, dato il percorso del file
    string txt;
    ifstream File(nome); //si consiglia di mettere il file .txt nella stessa cartella del .cpp
    while (getline(File, txt))
    {
        cout << txt << endl;
    }
    File.close();
}

string color(string word, string back, string frase)
{
    /*COLORE*/
    //Primo valore colore parola, sfondo parola
    string tot = "\033[" + back + ";" + word + "m" + frase + "\033[0m";
    //viene chisto il colore delle lettere, lo sofondo e la frase da stampare;
    return tot;
}

string colorNum(string word, string back, int num)
{
    /*COLORE*/
    //Primo valore colore parola, sfondo parola
    //Viene trasformato da numero in stringa per la stampa
    string frase = to_string(num);
    string tot = "\033[" + back + ";" + word + "m" + frase + "\033[0m";
    //viene chisto il colore delle lettere, lo sofondo e la frase da stampare;
    return tot;
}

#endif /* CF71767F_5BD6_42AC_B0E1_C219BCCE9F32 */
