#include <iostream>
#include<algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    //1
    /*const int rows = 4, columns = 5;
    int num[rows][columns]{
        {3, 7, 1, 9, 2},
        {4, 6, 8, 2, 5},
        {9, 3, 6, 1, 4},
        {5, 2, 7, 4, 8}
    };
    int a;
    cout << "Сортування по стовпцям(1) сортування всього масиву(2)";
    cin >> a;
    if (a == 1) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                sort(num[j], num[j] + columns);
                cout << num[i][j] << " ";
            }
        }
    }
    else if (a == 2) {
        int a;
        a = rows * columns;
        for (int i = 0; i < a-1; i++) {
            for (int j = 0; j < a-i-1; j++) {
                if (num[0][j] > num[0][j + 1]) {
                    int b=num[0][j];
                    num[0][j] = num[0][j + 1];
                    num[0][j + 1] = b;

                }
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                cout << num[i][j] << " ";
            }
        }
    }*/
    //2
    /*const int rows = 3, columns = 4;
    int num[rows][columns]{
        {3,5,6,7},
        {12,1,1,1},
        {0,7,12,1}
    };
    int finSum=0, allSum=0;
    for (int i = 0; i < rows; i++) {
        int sumRow = 0;
        for (int j = 0; j < 4; j++) {
            cout << num[i][j] << "  ";
            sumRow += num[i][j];
        }
        allSum += sumRow;
        finSum = allSum;
        cout << " | " << sumRow << endl;
    }
    cout << "--------------------" << endl;
    for (int j = 0; j < columns; j++) {
        int sumCol = 0;
        for (int i = 0; i < 3; i++) {
            sumCol += num[i][j];
        }
        cout << sumCol << "  ";
    }
    cout << "| " << finSum;*/
    //3
    /*const int rows1 = 5, columns1 = 10, rows2 = 5, columns2 = 5;

    int arr1[rows1][columns1], arr2[rows2][columns2];

    cout << "First arr:\n";
    cout <<left;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++) {
            arr1[i][j] = rand() % 50;
            cout <<setw(3) << arr1[i][j];
        }
        cout << "\n";
    }

    cout << "\nSecond arr:\n";
    int r1 = 0, c1 = 0;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < columns2; j++) {
            int n = arr1[r1][c1];
            c1++;
            if (c1 >= columns1) {
                c1 = 0;
                r1++;
            }
            n += arr1[r1][c1];
            arr2[i][j] = n;
            cout << setw(3) << arr2[i][j];
            c1++;
            if (c1 >= columns1) {
                c1 = 0;
                r1++;
            }
        }
        cout << "\n";
    }*/
    //4
    /*const int a=5, b=5, z=5;
    int ara[a][b][z]{}, w;
    cout << "Введіть перше значення масиву: ";
    cin >> w;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int r = 0; r < 5; r++) {
                ara[i][j][r] = w;
                w++;
                cout << ara[i][j][r] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }*/
    //5
cout << "Гра Хрестики Нолики" << endl;
vector<string> num{ "1", "2", "3", "4", "5", "6", "7", "8", "9" };
cout << "\t\t | " << num[0] << " | " << num[1] << " | " << num[2] << " | " << endl;
cout << "\t\t -------------" << endl;
cout << "\t\t | " << num[3] << " | " << num[4] << " | " << num[5] << " | " << endl;
cout << "\t\t -------------" << endl;
cout << "\t\t | " << num[6] << " | " << num[7] << " | " << num[8] << " | " << endl;
srand((time(0)));
int move = 0;

while (true) {


    int gamer;
    cin >> gamer;
    gamer--;

    if (num[gamer] == "\033[32mX\033[0m" || num[gamer] == "\033[31mO\033[0m") {
        cout << "Занято" << endl;
        continue;
    }
    else {
        num[gamer] = "\033[32mX\033[0m";
        move++;
    }
    cout << "\t\t | " << num[0] << " | " << num[1] << " | " << num[2] << " | " << endl;
    cout << "\t\t -------------" << endl;
    cout << "\t\t | " << num[3] << " | " << num[4] << " | " << num[5] << " | " << endl;
    cout << "\t\t -------------" << endl;
    cout << "\t\t | " << num[6] << " | " << num[7] << " | " << num[8] << " | " << endl;
    if (num[0] == num[1] and num[1] == num[2] or num[0] == num[4] and num[4] == num[8] or
        num[0] == num[3] and num[3] == num[6] or num[0] == num[1] and num[1] == num[2] or
        num[1] == num[4] and num[4] == num[7] or num[2] == num[5] and num[5] == num[8] or
        num[2] == num[4] and num[4] == num[6] or num[3] == num[4] and num[4] == num[5] or
        num[6] == num[7] and num[7] == num[8]) {
        cout << "\033[1;32mВи виграли!\033[0m";
        break;
    }
    if (move == 9) {
        cout << "\033[1;33mНичья!\033[0m" << endl;
        break;
    }

    int comp;
    do {
        comp = rand() % 9;
    } while (num[comp] == "\033[32mX\033[0m" || num[comp] == "\033[31mO\033[0m");

    num[comp] = "\033[31mO\033[0m";
    move++;
    cout << endl;
    cout << "\t\t | " << num[0] << " | " << num[1] << " | " << num[2] << " | " << endl;
    cout << "\t\t -------------" << endl;
    cout << "\t\t | " << num[3] << " | " << num[4] << " | " << num[5] << " | " << endl;
    cout << "\t\t -------------" << endl;
    cout << "\t\t | " << num[6] << " | " << num[7] << " | " << num[8] << " | " << endl;
    if (num[0] == num[1] and num[1] == num[2] or num[0] == num[4] and num[4] == num[8] or
        num[0] == num[3] and num[3] == num[6] or num[0] == num[1] and num[1] == num[2] or
        num[1] == num[4] and num[4] == num[7] or num[2] == num[5] and num[5] == num[8] or
        num[2] == num[4] and num[4] == num[6] or num[3] == num[4] and num[4] == num[5] or
        num[6] == num[7] and num[7] == num[8]) {
        cout << "\033[31mВи програли!\033[0m";
        break;
    }
    if (move == 9) {
        cout << "\033[1;33mНичья!\033[0m" << endl;
        break;
    }
}
}

