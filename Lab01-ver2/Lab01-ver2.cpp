#include <iostream>
using namespace std;
int plenty1[20], plenty2[20], plenty3[20],Plenty1R[20],Plenty2R[20];
int k = 0;
int j = 0;
int l = 0;
int main(){
setlocale(LC_ALL, "Russian");
int n1;
Try1:
cout << " Введите требуемое количество элементов в множестве(1):  ";
cin >> n1;
    if (n1 > 19) {
        cout << "Ошибка! Максимальное количество элементов = 19" << endl;
        goto Try1;
    }
cout << "Множество(1) выглядит следующим образом: " << endl;
int size1 = n1;
for (int i = 0; i < n1; i++) {
TryAgain:
bool Povtor = false;
int zz1 = rand() % 19 - 9;
        for (int j = 0; j < i; j++) {
            if (plenty1[j] == zz1) {
                Povtor = true;
            }
        }
        if (Povtor == false) {
            plenty1[i] = zz1;
        }
        else {
            goto TryAgain;
        }

        cout << " " << plenty1[i];
    }
    //
    int n2;
    cout << endl;
Try11:
    cout << "Сколько чисел вы хотите ввести в множество(2) ?" << endl;
    cin >> n2;
    if (n2 > 19) {
        cout << "Ошибка! Максимальное количество элементов = 19" << endl;
        goto Try11;
    }
    int size2 = n2;
    if (n2 < 20) {
        cout << "Заполняйте множество(2)" << endl;
        for (int i = 0; i < n2; i++) {
        Try2:
            bool Povtor2 = false;
            int zz2;
            cout << i + 1 << ": ";
            cin >> zz2;
            for (int j = 0; j < i; j++) {
                if (zz2 == plenty2[j]) { Povtor2 = true; }
            }
            if ((zz2 > 9) or (zz2 < -9)) { cout << "Ошибка! Число не входит в промежуток [-9;9]. Попробуйте снова." << endl; goto Try2; }
            if (Povtor2 == false) { plenty2[i] = zz2; }
            else { cout << "Числа не могут повторяться! Попробуйте снова." << endl; goto Try2; }
        }


    }
    else { cout << "Ошибка! Нельзя внести в множество(2) более 19 различных чисел из промежутка [-9;9] " << endl; }
    cout << "Множество(2) выглядит следующим образом: " << endl;
    for (int i = 0; i < n2; i++) {
        cout << plenty2[i] << " ";
    }
    cout << endl;

    cout << "===============================================" << endl;
    cout << "Создание множества(3). Выберите условие:" << endl;

    int plenty4[20];
    for (int i = 0; i <= 19; i++) {
        plenty4[i] = i - 9;
    }
CaseAgain:
    int a;
    cout << "Введите 1 - все отрицательные числа" << endl;
    cout << "Введите 2 - все положительные числа" << endl;
    cout << "Введите 3 - все четные числа" << endl;
    cout << "Введите 4 - все нечетные числа" << endl;
    cout << "Введите 5 - все числа Кратные числу Х" << endl;
    cin >> a;
    int size3 = 0;
    switch (a) {
    case 1:
        size3 = 9;
        for (int i = 0; i < 9; i++) {
            plenty3[i] = plenty4[i];
        }
        cout << "Множество(3) выглядит следующим образом: " << endl;
        for (int i = 0; i < 9; i++) {
            cout << plenty3[i] << " ";
        }
        goto Next;
        break;
        ///
    case 2:
        size3 = 9;
        cout << endl;
        for (int i = 0; i < 9; i++) {
            plenty3[i] = plenty4[i + 10];
        }
        cout << "Множество(3) выглядит следующим образом: " << endl;
        for (int i = 0; i < 9; i++) {
            cout << plenty3[i] << " ";
        }
        goto Next;
        break;
        //
    case 3:
        size3 = 9;
        cout << "Множество(3) выглядит следующим образом: " << endl;
        for (int i = 0; i < 19; i++) {
            if (plenty4[i] % 2 == 0) {
                plenty3[j] = plenty4[i];
                cout << plenty3[j] << " ";
                j++;
            }
        }
        goto Next;
        break;


        //
    case 4:
        size3 = 10;
        cout << "Множество(3) выглядит следующим образом: " << endl;
        for (int i = 0; i < 19; i++) {
            if (plenty4[i] % 2 != 0) {
                plenty3[k] = plenty4[i];
                cout << plenty3[k] << " ";
                k++;
            }
        }
        goto Next;
        break;

    case 5:

        int X;
    again:
        cout << "Введите число Х" << endl;
        cin >> X;
        cout << "Множество(3) выглядит следующим образом: " << endl;
        if ((X == 0) or (X > 9) or (X < -9)) {
            cout << "Ошибка! Введите любое число из промежутка [-9;0)⋂(0;9] ";
            goto again;
        }
        for (int i = 0; i < 19; i++) {
            if (plenty4[i] % X == 0) {
                plenty3[l] = plenty4[i];
                cout << plenty3[l] << " ";
                l++;
                size3++;
            }
        }
        goto Next;
        break;
    default: goto CaseAgain;
    }

Next:


int sizeR = 0;
int R[19];
NextPrimer:
int z1 = 0;
int z2 = 0;
int z3 = 0;
int size1R = 0;
int size2R = 0;
    cout << endl << "=============================" << endl;
    cout << "Вводите пример" << endl;
    cout << "=============================" << endl;
    cout << "Примечение: сначала выбирается первое множество, затем второе множество, операция между ними, а результат записывается в множество(4)" << endl;

    cout << "Введите 1 - Множество(1)           [A]" << endl;
    cout << "Введите 2 - Множество(2)           [B]" << endl;
    cout << "Введите 3 - Множество(3)           [C]" << endl;
    cout << "Введите 4 - Множество(4).          [R]" << endl;
    cout << "Введите 5, если второе множество не требуется" << endl << endl;

    cin >> z1;
    if (z1 == 1) { cout << "Первое множество = A"; }
    if (z1 == 2) { cout << "Первое множество = B"; }
    if (z1 == 3) { cout << "Первое множество = C"; }
    if (z1 == 4) { cout << "Первое множество = R"; }
    cout << endl;
    
    cin >> z2;
    if (z2 == 1) { cout << "Второе множество = A"; }
    if (z2 == 2) { cout << "Второе множество = B"; }
    if (z2 == 3) { cout << "Второе множество = C"; }
    if (z2 == 4) { cout << "Второе множество = R"; }
    cout << endl;

    cout << "Какую операцию нужно произвести? Ответ будет автоматически сохранен в множество(4)" << endl;
    cout << "Введите 1 - Обьединение             [u]" << endl;
    cout << "Введите 2 - Пересечение             [n]" << endl;
    cout << "Введите 3 - Разность                [/]" << endl;
    cout << "Введите 4 - Симетрическая разность  [|>]" << endl;
    cout << "Введите 5 - Дополнение              [-]" << endl;
    cin >> z3;   // переменная z3 отвечает за операцию, которая будет производиться над множествами
    // =============================================================================================
    if (z1 == 1) {
        for (int i = 0; i < size1; i++) {
        Plenty1R[i] = plenty1[i];
        }
    size1R = size1;
    }

    if (z1 == 2) {
        for (int i = 0; i < size2; i++) {
        Plenty1R[i] = plenty2[i];
        }
    size1R = size2;
    }
                                                      // узнаем сколько чисел в первом множество 
    if (z1 == 3) {
        for (int i = 0; i < size3; i++) {
        Plenty1R[i] = plenty3[i];
        }
    size1R = size3;
    }

    if (z1 == 4) {
        for (int i = 0; i < sizeR; i++) {
        Plenty1R[i] = R[i];
        }
    size1R = sizeR;
    }
    // =============================================================================================
    if (z2 == 1) {
        for (int i = 0; i < size1; i++) {

            Plenty2R[i] = plenty1[i];
        }
        size2R = size1;
    }

    if (z2 == 2) {
        for (int i = 0; i < size2; i++) {
            Plenty2R[i] = plenty2[i];
        }
        size2R = size2;
    }
                                                    // Узнаем сколько чисел во втором множестве
    if (z2 == 3) {
        for (int i = 0; i < size3; i++) {
            Plenty2R[i] = plenty3[i];
        }
        size2R = size3;
    }

    if (z2 == 4) {
        for (int i = 0; i < sizeR; i++) {
            Plenty2R[i] = R[i];
        }
        size2R = sizeR;
    }
    if (z2 == 5) {
        size2R = 0;
    }
  
    cout << "В первом множестве " << size1R << " чисел" << endl;
    for (int i=0; i < size1R; i++) {
        cout << Plenty1R[i] << " ";
    }
    cout << endl;
   
    cout << "Во втором множестве " << size2R << " чисел" << endl;
    for (int i=0; i < size2R; i++) {
        cout << Plenty2R[i] << " ";
    }
    cout << endl;
    cout << endl << "Результат записан в множество(4)" << endl;
    sizeR = 0;
    // =============================================================================================
    if (z3 == 1) {
        for (int i = 0; i < size1R; i++) {
            R[i] = Plenty1R[i];
            sizeR++;
        }

        for (int i = 0; i < size2R; i++) {
        bool net = true;
        for (int j = 0; j < size1R; j++) {
            if (Plenty2R[i] == Plenty1R[j]) {           // Обьединение
                net = false;
            }
        }
            if (net == true) {
            R[sizeR] = Plenty2R[i];
            sizeR++;               
            }
        }
    }
    // =============================================================================================
    if (z3 == 2) {
        for (int i = 0; i < size1R; i++) {
            for (int j = 0; j < size2R; j++) {
                if (Plenty2R[j] == Plenty1R[i]) {
                    R[sizeR] = Plenty2R[j];        
                                                       //  Пересечение
                    sizeR++;
                }
                                        
            }
        }
    }
    // =============================================================================================
    if (z3 == 3) {
        for (int i = 0; i < size1R; i++) {
            bool razn = false;
            for (int j = 0; j < size2R; j++) {
                if (Plenty2R[j] == Plenty1R[i]) {
                razn=true;
                }        
                                                       //  Разность
            }
            if (razn == false) {
                R[sizeR] = Plenty1R[i];
                sizeR++;
            }
        }

    }
    // =============================================================================================
    if (z3 == 4) {
        for (int i = 0; i < size1R; i++) {
            bool razn = false;
            for (int j = 0; j < size2R; j++) {
                if (Plenty2R[j] == Plenty1R[i]) {
                    razn = true;
                }
                //  Разность
            }
            if (razn == false) {
                R[sizeR] = Plenty1R[i];
                sizeR++;
            }
        }                                         // Симметрическая разность
        for (int i = 0; i < size2R; i++) {
            bool razn = false;
            for (int j = 0; j < size1R; j++) {
                if (Plenty2R[i] == Plenty1R[j]) {
                    razn = true;
                }
                //  Разность
            }
            if (razn == false) {
                R[sizeR] = Plenty2R[i];
                sizeR++;
            }
        }
    }
    // =============================================================================================
    if (z3 == 5) {
        int Vse[19];
        for(int i=0;i<19;i++){
            Vse[i] = i - 9;
    }
        for (int i = 0; i < 19; i++) {                   
            bool Dopol = false;
            for (int j = 0; j < size1R; j++) {
                if (Plenty1R[j] == Vse[i]) {        // Дополнение
                    Dopol = true;
                }
            }
            if (Dopol == false) {
                R[sizeR] = Vse[i];
                sizeR++;
            }
        }
    }
    // =============================================================================================
    for (int i = 0; i < sizeR; i++) {
        cout << R[i] << " ";
    }                     // Вывод результата на экран и переход к записыванию следующего примера
    goto NextPrimer;
    return 0;
    // =============================================================================================
}

