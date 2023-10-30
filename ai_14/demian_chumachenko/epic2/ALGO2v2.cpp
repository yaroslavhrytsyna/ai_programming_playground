#include <iostream>
#include <vector>

using namespace std;

int element_delete(int arr[], int size, int x1, int x2, int x3){
    int new_size = size;
    int i = 0;

    for(i; i < size; i++){
        if(arr[i] == x1 || arr[i] == x2 || arr[i] == x3){
            for(int j = i; j < size -1; j++ ){
                arr[j] = arr[j+1];
            }
        i--;    // 2 елемента підрят не перевірялись би
        new_size--;
        }
    }
    return new_size;
}

int main(){

    int N = 5;
    int arr[] = {5,4,3,2,1};
    int del_elem[3] = {4,5,6};

    int N_new = element_delete(arr, N, del_elem[0], del_elem[1], del_elem[2]);

    int *new_arr = new int[N_new];

    for(int i = 0; i < N_new; i++){
        new_arr[i] = arr[i];
    }

    int *final_arr = new int[N_new - 1];
    int final_N = N_new - 1;

    for(int i = 0; i < final_N; i++){
        final_arr[i] = new_arr[i] + new_arr[i+1];
    }

    cout << final_N << endl;

    for(int i = 0; i < final_N; i++){
        cout << final_arr[i] << " ";
    }

    return 0;
}