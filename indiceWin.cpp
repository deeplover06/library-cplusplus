//  indiceWin.cpp
//  Autore:Francesco Pio Nocerino
//  indice della libreria "myLib.h"
#include <iostream>
#include <stdlib.h>
#include "myLib.h"
using namespace std;
#define M 20 //Linee max da fare
#define LINE 38
void figlet();   //STAMPA FIGLET
void figletes(); //STAMPA FIGLET DI ES
int main()
{
    int s, v[2] = {3, 7}; //vettore esempio
    char s1;              //scelta
    do
    {
        /*MENU*/
        figlet();
        cout << endl;
        cout << "1.Disegnare linee\n";
        linea(LINE, '-');
        cout << "\n2.Carattere -> intero\n";
        cout << "3.Sleep\n";
        cout << "4.Colore testo\n";
        linea(LINE, '-');
        cout << "\n5.Max vettore\n";
        cout << "6.Min vettore\n";
        cout << "7.Numeri Random\n";
        cout << "8.Calcolo Percentuale\n";
        cout << "9.Media Vettore\n";
        cout << "10.Conta N numeri\n";
        linea(LINE, '-');
        cout << "\n11.Inserimento numeri -> vettore\n";
        cout << "12.Insermento numeri random -> vettore\n";
        cout << "13.Insermento in array di stringhe\n";
        cout << "14.Stampa Array di numeri\n";
        cout << "15.Stampa Array stringa\n";
        cout << "16.Stampa Figlet\n";
        linea(LINE, '-');
        cout << "\n17.Ordinamento\n";
        cout << "18.Ordina durante l'esecuzione\n";
        cout << "19.Ricerca Lineare\n";
        cout << "20.Ricerca Licotomica\n";
        cout << "21.Ricerca in una stringa\n";
        linea(LINE, '-');
        cout << endl;
        cin >> s;
        //Prende 1 secondo di pausa e pulisce la console per un migliore utilizzo finale
        sleep(1);
        system("cls");
        switch (s)
        {
            /*SELEZIONE*/
        case 1:
            cout << "Disegnare line\n";
            cout << "Nome: "
                 << "linea(int n, char s)" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Come si vede nell'esmpio questo funzione è ingrado di creare delle line\n";
            linea(10, '*');
            cout << endl;
            cout << "-La funzione richiede un intero ovvero il numero di caratteri da stampare e il tipo di carattere da stampare\n";
            break;

        case 2:
            cout << "Caratteri -> intero\n";
            cout << "Nome: "
                 << "ctoi(char b)" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Come si vede nell'esempio questa funzione è in grado di convertire un carattere in un intero\n";
            cout << ctoi('3');
            cout << endl;
            cout << "-Il numero " << ctoi('3') << " corrisponde al numero 3\n";
            break;

        case 3:
            cout << "Sleep\n";
            cout << "Nome: "
                 << "sleep(int s)" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Questa funzione ferma i thread per in base ai secondi specificati\n";
            sleep(2);
            cout << "Sono passati 2 secondi\n";
            break;

        case 4:
            cout << "Colore testo\n";
            cout << "Nome: "
                 << "color(string '',string '',string ' ')" << endl
                 << "colorNum(string ' ',string ' ',int n)\n";
            linea(M, '-');
            cout << endl;
            cout << "-Come si vede nell'esempio stampa frasi o numeri a colori colore prodotto studiato per macchine UNIX \n";
            cout << color("1", "31", "Blod rosso") << endl;
            cout << color("32", "", "Testo verde") << endl;
            cout << color("4", "33", "Sotto lineato Giallo") << endl;
            cout << color("34", "", "Testo Blu") << endl;
            cout << colorNum("32", "1", 5) << endl;
            cout << colorNum("33", "4", 100) << endl;
            cout << "NB: per colorare un numero usare la funzione colorNum()\n";
            cout << "-Questa funzione richiede il colore del testo, lo sfondo e il testo da stampare tutto come stringa\n";
            cout << "-Abbimo varie tipologie di personallizzazione del testo nel caso consultare la tabella\n";
            break;

        case 5:
            cout << "Max vettore\n";
            cout << "Nome: "
                 << "maxV(int M, int v[])" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Come si vede nell'esempio questa funzione ricercara il massimo in un vettore\n";
            cout << maxV(2, v) << endl;
            cout << "-Questa funzione richiede la dimensione e il vettore\n";
            break;

        case 6:
            cout << "Min vettore\n";
            cout << "Nome: "
                 << "minV(int M, int v[])" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Come si vede nell'esempio questa funzione ricercara il minimo in un vettore\n";
            cout << minV(2, v) << endl;
            cout << "-Questa funzione richiede la dimensione e il vettore\n";
            break;

        case 7:
            cout << "Numeri Random\n";
            cout << "Nome: "
                 << "ran(int n)" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Come si vede nell'esempio questa funzione genera numeri casuali:\n";
            cout << ran(100);
            cout << "\n-Questa funzione richiede il numero massimo da estrarre\n";
            break;

        case 8:
            cout << "Calcolo percentuale\n";
            cout << "Nome: "
                 << "xcent(int perc, float num)" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Questa funzione permette il calcolo della percentuale\n";
            linea(M, '-');
            cout << endl;
            cout << "70 % 20=" << xcent(20, 70) << endl;
            cout << "-Questa funzione richiede la percentuale e il numero \n";
            break;

        case 9:
            cout << "Media Vettore\n";
            cout << "Nome: "
                 << "mediaV(int dim, float v[])" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Questa funzione permette di calcolare la media aritmetica di un vettore\n";
            cout << "-Questa funzione richiede la dimensione dell'array e l'array\n";
            break;

        case 10:
            cout << "Conta N numeri\n";
            cout << "Nome: \n"
                 << " contaSuff(int M,float n, float v[])" << endl
                 << " contaIsuff(int dim,float n,flaot v[])\n";
            linea(M, '-');
            cout << endl;
            cout << "-La prima funzione permette di contare quanti numeri sono maggiori di un numero X \n";
            cout << "-La seconda funzione permette di contare quanti numeri sono minori di un numero X \n";
            cout << "-Questa funzione richiede la dimensione dell'array, il numero x e l'array\n";
            break;

        case 11:
            cout << "Inserimento numeri -> vettore\n";
            cout << "Nome: "
                 << "ins(int M, int v[])" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Questa funzione permentte l'insermento di numeri all'inetrno di un vettore\n";
            cout << "-Questa funzione richiede la dimensione dell'array e l'array\n";
            break;

        case 12:
            cout << "Insermento numeri random -> vettore\n";
            cout << "Nome: "
                 << "ins_Rand(int M, int v[])" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Questa funzione permentte l'insermento di numeri random all'inetrno di un vettore\n";
            cout << "-Questa funzione richiede la dimensione dell'array e l'array\n";
            break;

        case 13:
            cout << "Insermento in array di stringhe\n";
            cout << "Nome: "
                 << "ins_str(int M, string a[])" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Questa funzione permentte l'insermento di stringhe all'interno di un array di setringhe\n";
            cout << "-Questa funzione richiede la dimensione dell'array e l'array\n";
            break;

        case 14:
            cout << "Stampa array di numeri\n";
            cout << "Nome: "
                 << "stampa(int dim, float v[])" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Questa funzione permentte la stampa di un array numeri interi/reali\n";
            cout << "-Questa funzione richiede la dimensione, l'array da stampare \n";
            break;

        case 15:
            cout << "Stampa Array stringa \n";
            cout << "Nome: "
                 << "stampa_str(int dim, string n[])" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Questa funzione permentte la stampa di un array numeri stringhe\n";
            cout << "-Questa funzione richiede la dimensione, l'array da stampare \n";
            break;
        case 16:
            cout << "Stampa Figlet\n";
            cout << "Nome: "
                 << "print_figlet(percorso file.txt)" << endl;
            linea(M, '-');
            cout << endl;
            figletes();
            cout << "-Questa funzione permette la stampa di figlet \n";
            cout << "-Questa funzione richiede il percorso del file "
                    "nomeFile.txt "
                    "\n ";
            break;

        case 17:
            cout << "Ordinamento\n";
            cout << "Nome: "
                 << "ordina(int dim, int v[])" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Questa funzione permentte l'ordinamento dei numeri all'interno di un array\n";
            cout << "-Questa funzione richiede la dimensione dell'array e l'array\n";
            break;

        case 18:
            cout << "Ordina durante l'esecuzione\n";
            cout << "Nome: "
                 << "always_Ordina(int M,int num[])" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Questa funzione permentte l'insermento dei numeri in un array e durante lo stesso inserimento l'ordinamento\n";
            cout << "-Questa funzione richiede la dimensione e l'array dove salvare i numeri\n";
            break;

        case 19:
            cout << "Ricerca lineare\n";
            cout << "Nome: "
                 << "find(int ind, int x, int num[])" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Questa funzione permentte il ritrovamento di un numero all'interno di un array\n";
            cout << "-Questa funzione richiede la dimensione, il numero da trovare e l'array \n";
            break;

        case 20:
            cout << "Ricerca Licotomica\n";
            cout << "Nome: "
                 << "find_Bin(int n, int x, int v[])" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Questa funzione permentte il ritrovamento di un numero all'interno di un array\n";
            cout << "-Questa funzione richiede la dimensione, il numero da trovare e l'array \n";
            break;

        case 21:
            cout << "Ricerca in una stringa\n";
            cout << "Nome: "
                 << "find_str(int n, int x, int v[])" << endl;
            linea(M, '-');
            cout << endl;
            cout << "-Questa funzione permentte il ritrovamento di una stringa all'interno di un array\n";
            cout << "-Questa funzione richiede la dimensione, e la parola da ricercare nell'array\n";
            break;

        default:
            cout << "Inserimento non valido\n";
            break;
        }
        //Richiesta se continuare con la visualizazzione o no?
        cout << "Vuoi continuare? (s/n) ";
        cin >> s1;
        //Prende 1 secondo si pausa e cancella la console
        sleep(1);
        system("cls");
    } while (s1 == 's');
    return 0;
}

void figlet()
{
    /*STAMPA FIGLET*/
    cout << "                     _       _   _           _ \n";
    cout << " _ __ ___    _   _  | |     (_) | |__       | |__  \n";
    cout << "| '_ ` _ \\  | | | | | |     | | | '_ \\      | '_ \\ \n";
    cout << "| | | | | | | |_| | | |___  | | | |_) |  _  | | | | \n";
    cout << "|_| |_| |_|  \\__, | |_____| |_| |_.__/  (_) |_| |_|\n";
    cout << "             |___/                                 \n";
}

void figletes()
{
    /*STAMPA FIGLET DI ES*/
    cout << "  ____           \n";
    cout << " / ___| _     _   \n";
    cout << "| |   _| |_ _| |_\n";
    cout << "| |__|_   _|_   _|\n";
    cout << " \\____||_|   |_|  \n";
}
