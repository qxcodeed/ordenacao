#include <iostream>
#include <ctime>
#include <cstdlib> //rand
#include "libs/ed_sort.h"

using namespace std;

//cores rgbcymkw
//red, green, blue, cyan, yellow, magenta, black, white

void minimum_sort(vector<int>& vet){
    for(int i = 0; i < (int) vet.size() - 1; i++){
        for(int j = i + 1; j < (int) vet.size(); j++){
            view_show(vet, {i, j}, "gy");
            if(vet[j] < vet[i]){
                std::swap(vet[i], vet[j]);
                view_show(vet, {i, j}, "yg");
            }
        }
    }
}

int main(){
    srand(time(NULL));
    const int qtd = 70;
    vector<int> vet(qtd, 0);

    int min = 10;
    int max = 400;

    for(int i = 0; i < qtd; i++)
        vet[i] = (rand() % (max - min + 1) + min);

    view_set_bar();
    view_set_faixa(0, qtd - 1);

    minimum_sort(vet);

    view_lock();
    return 0;
}





















