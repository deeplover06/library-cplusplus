#ifndef DBC844F0_9950_4ADE_9AD7_67453C5A0A7B
#define DBC844F0_9950_4ADE_9AD7_67453C5A0A7B

#endif /* DBC844F0_9950_4ADE_9AD7_67453C5A0A7B */
#include <iostream>
#include <time.h>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
#define MAX 100
/*
    Colore testo e sfondo
    Black    30	  40
    Red      31   41
    Green    32   42
    Yellow   33   43
    Blue     34   44
    Magenta  35   45
    Cyano    36   46
    White    37   47
    
    Text option
    Reset 0 Remove all styles
    Bold 1 Testo in grassetto
    Underline 4 Testo sottolineato
    Inverse 7 inverte i colori 
    Blod off 21 Testo normale
    Underline off 24 Testo normale
    Inverse off 27 Remove inverse
    */

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

void ran(int n)
{
    /*GENERATORE DI NUMERI CASUALI*/
    int nGen;
    srand(unsigned(time(NULL)));
    for (int i = 0; i < n; i++)
    {
        nGen = rand() % MAX + 1;
    }
}

void ins(int M, int v[])
{
    /*INSERMENTO NUMERI IN UN VETTORE*/
    //Chiede dimensione e vettore
    for (int i = 0; i < M; i++)
    {
        cout << "inserisci numero " << i + 1 << ": ";
        cin >> v[i];
    }
}

void ins_str(int M, string a[])
{
    /*INSERIMENTO DI UNA STRINGA UN ARRAY DI STRINGHE*/
    for (int i = 0; i < M; i++)
    {
        cout << "Inserisci nome " << i + 1 << " ";
        getline(cin, a[i]);
    }
}

float xcent(int perc, float num)
{
    /*CALCOLO '%' */
    //Chiede la percentuale da calc, e il numero da calc
    float resto;
    resto = (float)(perc * num) / MAX;
    return resto;
}

void ins_Rand(int M, int v[])
{
    /*INSERMENTO DI NUEMRI RANDOM IN UN VETTORE*/
    //Chiede dimensione e vettore
    srand(unsigned(time(NULL)));
    for (int i = 0; i < M; i++)
    {
        v[i] = rand() % MAX + 1;
    }
}

void ordina(int dim, int v[])
{
    /*ORDINAMENTO*/
    //chiede in input la dimensione dell'array e l'array
    int temp;
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

void stampa(int dim, int v[])
{
    /*STAMPA VETTORE*/
    for (int i = 0; i < dim; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void stampa_str(int dim, string n[])
{
    /*STAMPA VET STRINGHE*/
    for (int i = 0; i < dim; i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;
}

int find(int ind, int x, int num[])
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

int find_str(int M, string ns, string name[])
{
    /*RICERCA POSIZIONE DI UN NOME ALL'INETRNO DI UN ARRAY DI STRINGHE*/
    int p;
    bool trv = false;
    //Nel caso si vuole modificare l'output basta cambiare il contenuto di messaggio o mes2
    string messaggio = "Il nome ", mes2 = " si trv alla ps: ";
    for (int i = 0; i < M && !trv; i++)
    {
        if (name[i] == ns)
        {
            p = i;
            trv = true;
        }
    }
    if (trv)
    {
        cout << messaggio << ns << mes2 << p << endl;
    }
    else
        cout << "Non trovato\n";
    return p;
}

int find_Bin(int n, int x, int v[])
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

int maxV(int M, int v[])
{
    /*RICERCA DEL MAX IN UN ARRAY*/
    //Chiede la dimensione e il vettore da controllare
    int max = v[0];
    for (int i = 1; i < M; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    return max;
}

int quantiMax(int M, int v[])
{
    /* Quante volte si ripete il numero max */
    int cont;
    int max = v[0];
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

int minV(int M, int v[])
{
    /*RICERCA DEL MIN IN UN ARRAY*/
    //Chiede la dimensione e il vettore da controllare
    int min = v[0];
    for (int i = 1; i < M; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
    }
    return min;
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

void color(string word, string back, string frase)
{
    /*COLORE*/
    //Primo valore colore parola, sfondo parola
    string tot = "\033[" + back + ";" + word + "m" + frase + "\033[0m\n";
    //viene chisto il colore delle lettere, lo sofondo e la frase da stampare;
    cout << tot;
}
