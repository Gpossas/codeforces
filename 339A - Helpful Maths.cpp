#include <iostream>

using namespace std;

#define MAX 100

void extractingNumbersFromString(string s, int array[]);
void creatingArrayWithInts(int i, int *count, string s, int array[]);
void insertionSort(int array[]);
void printingSortedResult(int array[]);

int main(void){
    string s;
    int array[MAX] = { 0 };

    cin >> s;

    extractingNumbersFromString(s, array);
    
    
    insertionSort(array);
    //sort(array, array+count);

    printingSortedResult(array);
}

void extractingNumbersFromString(string s, int array[]){
    int count = 0, i = 0;

    while (s[i]){
        creatingArrayWithInts(i, &count, s, array);
        i++;
    }
}

void creatingArrayWithInts(int i, int *count, string s, int array[]){
    //obs: passamos o endereço d ecount para atualizar quando voltar a função, senão ficaria pegando apenas o valor inicializado
    if (s[i] != '+'){
        //nós vamos avançar de posição apenas se entrar no if, por isso é [count++] e não [i]
        array[(*count)++] = s[i] - '0';
    }
}

void insertionSort(int array[]){
    int i = 1;

    while(array[i] != 0){
        int marker = array[i];
        int current = i-1;

        while (marker < array[current] && current >= 0){
            array[current+1] = array[current];
            current--;
        }  

        array[current+1] = marker;

        i++;
    }

}

void printingSortedResult(int array[]){
    int i = 1;

    cout << array[0];
    while (array[i] != 0){
        cout << '+' << array[i]; 
        i++;
    }
}