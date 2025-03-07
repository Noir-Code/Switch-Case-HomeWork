#include <iostream>
#include <cmath>
#include <ctime>
#include <Windows.h>
#include <cstdlib>
using namespace std;

void printMenu();
float sum(float num1, float num2);
float sub(float num1, float num2);
float multi(float num1, float num2);
float div(float num1, float num2);
int mod(int num1, int num2);
int power(int num, int power);
double root(double num);
float exponential( float x , int n = 10);
double sinFun (double degree);
double cosFun (double degree);
int fact (int num);
double logFun (double num);
double varianceFun (float arr[] , int number);
float aveFun (float arr[] , int number);
void multiTeach (int num1 , int num2 , int answer);
void printTrianTopArray ();
void printTrianBotArray();
void printShapeMenu ();
void printFlower ();
void printSmFace();
void printHeart();
void printBoat();
void printHouse();
void printSpaceShip();
void SwitchCaseMenu();

int main() {
    SwitchCaseMenu();
}


void SwitchCaseMenu () {
    srand(time(0));
	char a , aa , aaa; // a for while loop , aa for switch , aaa for shape switch
	while (true){
		printMenu();

		cout << " Please choose one of the options above :  ";
		cin >> aa;
        float num1 , num2;
        int Num1 , Num2;
        float* arr ;
        switch (aa) {

            case '+':
                cout << " Please enter two numbers = " ;
                cin >> num1 >> num2;
                cout << " The result is = " << sum(num1 , num2) << endl;
                break;

            case '-':
                cout << " Please enter two numbers = " ;
                cin >> num1 >> num2;
                cout << " The result is = " << sub(num1 , num2) << endl;
                break;

            case '*':
                cout << " Please enter two numbers = " ;
                cin >> num1 >> num2;
                cout << " The result is = " << multi(num1 , num2) << endl;
                break;

            case '/':
                cout << " Please enter two numbers = " ;
                cin >> num1 >> num2;
                cout << " The result is = " << div(num1 , num2) << endl;
                break;

            case '%':
                cout << " Please enter two numbers = " ;
                cin >> Num1 >> Num2;
                cout << " The result is = " << mod(Num1 , Num2) << endl;
                break;

            case 's':
            case 'S':
                cout << " Please enter a number = " ;
                cin >> num1 ;
                cout << " The result is = " << root(num1) << endl;
                break;

            case '$':
                cout << " Please enter a degree = ";
                cin >> num1;
                cout << " The result is = " << sinFun(num1) << endl;
                break;

            case'e':
            case'E':
                cout << " Please enter a number = ";
                cin >> num1 ;
                cout << " The result is = " << exponential(num1) << endl;
                break;

            case '#':
                cout << " Please enter a degree = ";
                cin >> num1;
                cout << " The result is = " << cosFun (num1) << endl;
                break;

            case 'p':
            case 'P':
                cout << " Please enter a number = " ;
                cin >> Num1;
                cout << " Please enter power = " ;
                cin >> Num2;
                cout << " The result is = " << power (Num1 , Num2) << endl;
                break;

            case 'l':
            case 'L':
                cout << " Please enter a number = ";
                cin >> num1;
                cout << " The result is = " << logFun(num1) << endl;
                break;

            case 'f':
            case 'F':
                cout << " Please enter a number = ";
                cin >> Num1 ;
                cout << " The result is = " << fact (Num1) << endl;
                break;

            case 'v':
            case 'V':
                cout << " How many numbers do you want to enter? ";
                cin >> Num1;
                arr = new float [Num1];
                for (int i = 0 ; i < Num1 ; i++){
                    cout << " Please enter a number = ";
                    cin >> arr[i];
                }
                cout << " The result is = " << varianceFun (arr , Num1) << endl;
                break;

            case '^':
                printTrianTopArray();
                break;

            case '>':
                printTrianBotArray();
                break;

            case 'a':
            case 'A':
                cout << " How many numbers do you want to enter? ";
                cin >> Num1;
                arr = new float [Num1];
                for (int i = 0 ; i < Num1 ; i++){
                    cout << " Please enter a number = " ;
                    cin >> arr [i];
                }
                cout << " The result is = " << aveFun (arr , Num1) << endl;
                break;

            case 'M':
            case 'm':
                Num1 = rand() % 100 ;
                Num2 = rand() % 100 ;
                int result;
                cout << " What is the answer of " << Num1 << " * " << Num2 << " ? " ;
                cin >> result ;
                multiTeach(Num1 , Num2 , result) ;
                break;

            case 'G':
            case 'g':
                cout << endl;
                printShapeMenu();
                cout << endl;

                cout << "Please choose one of the number of options above :  ";
                cin >> aaa;

                switch (aaa) {
                    case '1':
                        printFlower();
                        cout << endl;
                        break;

                    case '2':
                        printSmFace();
                        cout << endl;
                        break;

                    case '3':
                        printHeart();
                        cout << endl;
                        break;

                    case '4':
                        printBoat();
                        cout << endl;
                        break;

                    case '5':
                        printHouse();
                        cout << endl;
                        break;

                    case '6':
                        printSpaceShip();
                        cout << endl;
                        break;

                    default:
                        cout << " You have enter the wrong key !" << endl;
                }
                break;

            default:
                cout << " You have enter the wrong key !" << endl;
        }

		cout << " If you want to continue please enter 'Y' and if you don't want enter 'N' : ";
		cin >> a;
        delete[] arr;
		if (a == 'Y' || a == 'y')
			system("cls");
		else if (a == 'N' || a == 'n')
			break;
		else {
			cout << " You have the wrong value , we will take that as yes " << endl;
			Sleep(3000);
			system("cls");
		}

	}
}


void printMenu() {

	cout << endl<< "\t";
	for (int i = 0; i < 15; i++)
		cout << "  ";
	cout << endl  << "\t"
		<< "# 1. For sum enter ' + '" << endl << "\t"
		<< "# 2. For sub enter ' - '" << endl << "\t"
		<< "# 3. For div enter ' / '" << endl << "\t"
		<< "# 4. For mod enter ' % '" << endl << "\t"
		<< "# 5. For multi enter ' * '" << endl << "\t"
		<< "# 6. For root enter ' s '" << endl << "\t"
		<< "# 7. For sin enter ' $ '" << endl << "\t"
		<< "# 8. For exponential (E^x) enter ' e '" << endl << "\t"
		<< "# 9. For cos enter ' # '" << endl << "\t"
		<< "# 10. For power enter ' p '" << endl << "\t"
		<< "# 11. For log enter ' l '" << endl << "\t"
		<< "# 12. For factorial enter ' f '" << endl << "\t"
		<< "# 13. For variance enter ' v '" << endl << "\t"
		<< "# 14. For triangular top array enter ' ^ ' " << endl << "\t"
		<< "# 15. For triangular bottom array enter ' > '" << endl << "\t"
		<< "# 16. For ave enter ' a '" << endl << "\t"
		<< "# 17. For teaching the product of multiplication enter ' M '" << endl << "\t"
		<< "# 18. For print a shape enter ' G '" << endl << "\t";

	for (int i = 0; i < 15; i++)
		cout << "  ";
	cout << endl << endl;
}
float sum(float num1, float num2) {
	return num1 + num2;
}
float sub(float num1, float num2) {
	return num1 - num2;
}
float multi(float num1, float num2) {
	return num1 * num2;
}
float div(float num1, float num2) {
	return num1 / num2;
}
int mod(int num1, int num2) {
	return num1 % num2;
}
int power(int num, int power) {
	int multi = 1;
	for (int i = 1; i <= power;i++)
		multi *= num;
	return multi;
}
double root(double num) {
	return sqrt(num);
}
float exponential(float x , int n ) {
    float sum = 1.0f; // initialize sum of series

    for (int i = n - 1; i > 0; --i)
        sum = 1 + x * sum / i;

    return sum;
}
double sinFun (double degree){
    return sin(degree);
}
double cosFun (double degree){
    return cos(degree);
}
double logFun (double num){
    return log(num);
}
int fact (int num){
    if (num == 1 || num == 0)
        return 1;
    return num * fact(num - 1);
}
double varianceFun (float arr[] , int number ){
    float sum = 0 , ave , var;
    for (int i = 0 ; i < number ; i++)
        sum += arr[i];
    ave = sum / number;

    float* arr2 = new float [number];
    sum = 0;

    for (int i = 0 ; i< number ; i++){
        arr2[i] = arr[i] - ave;
        sum +=arr2[i]* arr2[i];
    }
    var = sum / number;
    return var;
}
float aveFun (float arr[] , int number){
    int sum = 0 , ave;
    for (int i = 0 ; i < number ; i++)
        sum += arr[i];
    ave = sum / number;
    return ave ;
}
void multiTeach (int num1 , int num2 , int answer){
    int result = num1 * num2;
    if (result == answer)
        cout << " Your answer is correct " << endl;
    else
        cout << " Your is wrong , the correct answer is = " << result << endl;
}
void printTrianTopArray (){
    int arr [10][10];
    srand(time(0));
    for (int i = 0 ; i < 10 ; i++){
        for (int j = 0 ; j < 10 ; j++){
            if (i == j )
                arr[i][j] = 9;
            else if (i > j)
                arr[i][j] = 0;
            else
                arr[i][j] = (rand() % 9) + 1;
        }
    }
    for (int i = 0 ; i < 10 ; i++){
        for (int j = 0 ; j < 10 ; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}
void printTrianBotArray (){
    int arr [10][10];
    srand(time(0));
    for (int i = 0 ; i < 10 ; i++){
        for (int j = 0 ; j < 10 ; j++){
            if (i == j )
                arr[i][j] = 9;
            else if (i < j)
                arr[i][j] = 0;
            else
                arr[i][j] = (rand() % 9) + 1;
        }
    }
    for (int i = 0 ; i < 10 ; i++){
        for (int j = 0 ; j < 10 ; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void printShapeMenu (){

    cout <<"\t" << " 1. Will draw a flower ." << endl << "\t"
        << " 2. Will draw a smiling face ." << endl<< "\t"
        << " 3. Will draw a heart ." << endl << "\t"
        << " 4. Will draw a boat ." << endl << "\t"
        << " 5. Will draw a house ." << endl << "\t"
        << " 6. Will draw a space ship ." << endl;
}
void printFlower (){
    cout << endl;
    for (int i = 0 ; i < 9 ; i++){
        cout << "\t";
        for (int j = 0 ; j < 9 ; j++){
            if ( i == 1 && (j== 3 || j== 5))
                cout << char(219);
            else if (i == 2 && j == 4)
                cout << char(219);
            else if ( i == 3 && (j== 3 || j== 5))
                cout << char(219);
            else if ((i == 4 || i == 5) && (j == 4))
                cout << char(219);
            else if (i == 6 && (j>= 2 && j <= 6))
                cout << char(219);
            else if ((i == 7 || i == 8) && (j>=3 && j <=5))
                cout << char (219);
            else
                cout << char (177);
        }
        cout << endl;
    }
}
void printSmFace(){
    cout << endl;
    for (int i = 0 ; i < 9 ; i++){
        cout << "\t";
        for (int j = 0; j < 9; j++) {
            if ((i == 2 || i == 3) && (j == 2 || j == 3 || j == 5 || j == 6))
                cout << char(219);
            else if (i == 5 && ((j == 1 || j == 2 || j == 6 || j == 7)))
                cout << char(219);
            else if (i == 6 && ((j == 2 || j == 6)))
                cout << char(219);
            else if (i == 7 && (j >= 3 && j <= 5))
                cout << char(219);
            else
                cout << char(177);
        }
        cout << endl;
    }
}
void printHeart(){
    cout << endl;
    for (int i = 0; i < 9; i++) {
        cout << "\t";
        for (int j = 0; j < 9; j++) {
            if (i == 1 && (j == 2 || j == 6))
                cout << char(219);
            else if (i == 2 && (j != 0 && j != 4 && j != 8))
                cout << char(219);
            else if ((i == 3 || i == 4) && (j > 0 && j < 8))
                cout << char(219);
            else if (i == 5 && (j >= 2 && j <= 6))
                cout << char(219);
            else if (i == 6 && (j == 3 || j == 4 || j == 5))
                cout << char(219);
            else if (i == 7 && j == 4)
                cout << char(219);
            else
                cout << char(177);
        }
        cout << endl;
    }
}
void printBoat(){
    cout << endl;
    for (int i = 0; i < 9; i++) {
        cout << "\t";
        for (int j = 0; j < 9; j++) {
            if (i == 1 && j == 4)
                cout << char(219);
            else if (i == 2 && (j == 4 || j == 5))
                cout << char(219);
            else if (i == 3 && (j >= 4 && j <= 6))
                cout << char(219);
            else if (i == 4 && (j >= 4 && (j >= 4 && j <= 7)))
                cout << char(219);
            else if (i == 5)
                cout << char(219);
            else if (i == 6 && (j != 0 && j != 8))
                cout << char(219);
            else if (i == 7 && (j >= 2 && j <= 6))
                cout << char(219);
            else
                cout << char(177);
        }
        cout << endl;
    }
}
void printHouse(){
    cout << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (i == 0 && j == 4)
                cout << char(219);
            else if (i == 1 && (j >= 3 && j <= 5))
                cout << char(219);
            else if (i == 2 && (j >= 2 && j <= 6))
                cout << char(219);
            else if (i == 3 && (j >= 1 && j <= 7))
                cout << char(219);
            else if ((i == 4 || i == 5) && (j >= 2 && j <= 6))
                cout << char(219);
            else if (i >= 6 && (j >= 2 && j <= 6)) {
                if (j == 4) {
                    cout << char(177);
                    continue;
                }
                cout << char(219);
            }
            else
                cout << char(177);
        }
        cout << endl;
    }
}
void printSpaceShip(){
    cout << endl;
    for (int i = 0; i < 9; i++) {
        cout << "\t";
        for (int j = 0; j < 9; j++) {
            if (i == 0 && j == 4)
                cout << char(219);
            else if (i== 1 && (j>= 3 && j <=5))
                cout << char(219);
            else if (i == 2 && (j == 3 || j == 5))
                cout << char(219);
            else if (i == 3 && (j>= 3 && j <=5))
                cout << char(219);
            else if (i == 4 && (j>=2 && j<=6))
                cout << char(219);
            else if (i == 5 && (j!=0 && j!=8))
                cout << char(219);
            else if (i==6 && (j>= 3 && j <=5))
                cout << char (219);
            else if (i == 7 && (j == 3 || j == 5))
                cout << char(219);
            else if (i==8 && (j == 2 || j == 6) )
                cout << char (219);
            else
                cout << char (177);
        } cout << endl;
    }
}
