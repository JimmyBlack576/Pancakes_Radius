#include <iostream>

using namespace std;

void show_arr(int arr[], const int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        cout << "  ";
    }
    cout << '\n';
}

int main() {

    setlocale(LC_ALL, "ru");

    const int size = 10;
    int radius[size] = { 1,5,7,9,8,6,3,4,2,8 };
    int count = 0,pan,final;
    //Вывод массива на экран
    do {
        show_arr(radius, size);
        cout << "После какой оладьи ставим лопатку? \n";
        cin >> pan;
        pan--;
        //Сортировка пузырьковым методом
       
            for (int i = pan; i < pan+1; i++)
            {
                if (radius[i] < radius[i + 1])
                {
                    int temp;
                    temp = radius[i];
                    radius[i] = radius[i + 1];
                    radius[i + 1] = temp;
                    count++;
                }

            }
        
        show_arr(radius, size);
        pan = 0;
        cout << "Массив отсортирован? 1 - да/ 2 - нет \n";
        cin >> final;

    } while (final!=1);
//Вывод отсортированного массива
    show_arr(radius, size);
cout << "Количество изменений массива: " << count << '\n';
}