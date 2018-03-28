// Hello. This is the program I wrote for the preparation for the entrance exam.
#include <iostream>
#include <string>
using namespace std;

int summOfNumberSeries (int, int);
int settingArraySize ();
void arrayFilling (int [], int);
void arrayPrinting(int [], int);
void arrayReversing(int [], int);
int wheelCounting (int, int);
void analysisOfNumbers (int, int, int);
int sumByCondition (int, int);
void arraysProcessing (int [], int [], int);

int main()
//{
//    cout << "hello world" << endl;
//    cout << "hello \nworld" << endl;
//    cout << 12892323+454665768 << endl;
//    return 0;
//}
//{
//    int num;
//    cout << "Hey, enter the number: ";
//    cin >> num;
//    cout << "Great job! If we add one then: " << ++num;
//    return 0;
//}
//{
//    int num1, num2;
//    cout << "Enter first number: ";
//    cin >> num1;
//    cout << "Enter second number: ";
//    cin >> num2;
//    int summ = num1 + num2;
//    cout << "Exelent! Sum of numbers = " << summ << endl;
//    return 0;
//}
//{
//    int totalKmPeerDay;
//    cout << "Hello. How many kilometers do you walk a day on average? ";
//    cin >> totalKmPeerDay;
//    if (totalKmPeerDay <= 3)
//    {
//        cout << "This is a very small distance" << endl;
//    }
//    if (totalKmPeerDay > 3 && totalKmPeerDay < 20)
//    {
//        cout << "Well done!" << endl;
//    }
////    if (totalKmPeerDay >3)
////        if (totalKmPeerDay <20)
////    {
////        cout << "Well done!" << endl;
////    }
//    if (totalKmPeerDay >= 20)
//    {
//        cout << "You are marathon runner!!!" << endl;
//    }
//    return 0;
//}
// Task 8, 18
//{
//    int floorNumber;
//    int truePassword = 1337;
//    int userEnteredPassword;
//    cout << "Enter the floor number, please: ";
//    cin >> floorNumber;
//    if (floorNumber < 1 || floorNumber > 9)
//        {
//            while (floorNumber < 1 || floorNumber > 9)
//        {
//            cout << "Enter correct floor number, please!: ";
//            cin >> floorNumber;
//        }
//        }
//    switch (floorNumber)
//    {
//        case 1:
//        case 2:
//        case 3:
//        case 7:
//        case 8:
//        case 9:
//            cout << "Ok";
//            break;
//        case 4:
//        case 5:
//        case 6:
//            {
//                cout << "Restricted area, please enter the password: ";
//                cin >> userEnteredPassword;
//                if (userEnteredPassword == truePassword)
//                    {
//                      cout << "Ok";
//                    }
//                else
//                    {
//                     cout << "Wrong password!";
//                    }
//            break;
//            }
//        default:
//            cout << "Wrong floor";
//            break;
//    return 0;
//    }
//}
//{
//    int bag1, bag2, bag3 ,bag4, bag5, numberOfHeavyBags = 0;
//    cout << "Enter weight of first bag: ";
//    cin >> bag1;
//    cout << "Enter weight of second bag: ";
//    cin >> bag2;
//    cout << "Enter weight of third bag: ";
//    cin >> bag3;
//    cout << "Enter weight of fourth bag: ";
//    cin >> bag4;
//    cout << "Enter weight of fifth bag: ";
//    cin >> bag5;
//    if  (bag1 > 20)
//        numberOfHeavyBags++;
//    if  (bag2 > 20)
//        numberOfHeavyBags++;
//    if  (bag3 > 20)
//        numberOfHeavyBags++;
//    if  (bag4 > 20)
//        numberOfHeavyBags++;
//    if  (bag5 > 20)
//        numberOfHeavyBags++;
//    cout << "Total number of heavy bags: " << numberOfHeavyBags;
//    return 0;
//}
// Task 12
//{
//    int numberOfStars;
//    cout << "How many stars do you want to print: ";
//    cin >> numberOfStars;
//    for (int i = 0; i < numberOfStars; i++)
//        cout << "*" << endl;
//    int counter = 0;
//    while (counter < numberOfStars)
//    {
//        cout << "*";
//        counter++;
//    }
//    return 0;
//}
//
//{
//    int userNumber;
//    cout << "Enter the number: ";
//    cin >> userNumber;
//    for (int counter = 1; counter < userNumber; counter+=1)
//        cout << counter << ", ";
//    cout << userNumber;
//    return 0;
//}
//{
//    int userNumber;
//    cout << "Enter the number: ";
//    cin >> userNumber;
//    for (int counter = userNumber; counter > 1; counter-=1)
//        cout << counter << ", ";
//    cout << "1";
//    return 0;
//}
//{
//    int userNumber;
//    cout << "Enter the number: ";
//    cin >> userNumber;
//    for (int counter = 2; counter < userNumber; counter+=2)
//        cout << counter << " ";
//    if (userNumber %  2 == 0)
//        cout << userNumber;
//    return 0;
//}
// task 13
//{
//    int sizeOfSquare;
//    cout << "Enter size of sqare: ";
//    cin >> sizeOfSquare;
//    for (int i = 1; i <= sizeOfSquare; i++)
//    {
//        for (int i = 1; i <= sizeOfSquare; i++)
//        {
//        cout << "*";
//        }
//    cout << endl;
//    }
//    return 0;
//}
// task 14
//{
//    int sizeOfTriangle;
//    cout << "Enter size of triangle: ";
//    cin >> sizeOfTriangle;
//    for (int i = 1; i <= sizeOfTriangle; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//        cout << "*";
//        }
//    cout << endl;
//    }
//    return 0;
//}
//{
//    int sizeOfTriangle;
//    cout << "Enter size of triangle: ";
//    cin >> sizeOfTriangle;
//    for (int i = sizeOfTriangle; i >= 1; i--)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//        cout << "*";
//        }
//    cout << endl;
//    }
//    return 0;
//}
// Task 15
//{
//    int sizeOfChristmasTree;
//    cout << "Enter size of ChristmasTree: ";
//    cin >> sizeOfChristmasTree;
//    int numberOfSpacesInRow = sizeOfChristmasTree;
//    for (int i = 1; i <= sizeOfChristmasTree-1; i++)
//    {
//        numberOfSpacesInRow--;
//        for (int k = numberOfSpacesInRow; k >= 0; k--)
//        {
//            cout << " ";
//        }
//        for (int j = 1; j <= i*2 - 1; j++)
//        {
//            cout << "*";
//        }
//        cout << endl;
//    }
//    for (int k = sizeOfChristmasTree-1; k >= 0; k--)
//        {
//            cout << " ";
//        }
//    cout << "*";
//    return 0;
//}
// Task 16
//{
//    int maxNumber, sumOfNumbers;
//    cout << "Enter the number: ";
//    cin >> maxNumber;
//// This is a formula called the triangular number, https://en.wikipedia.org/wiki/Triangular_number
//// I checked it manually a few times and I convinced that it is correct so I do not calculate this number in a loop
//    sumOfNumbers = (maxNumber*(maxNumber + 1))/2;
//    cout << "The sum of all numbers from 1 to your number is: " << sumOfNumbers << endl;
//    return 0;
//}
//  Task 16a
//{
//    int number, sumOfNumbers = 0;
//    cout << "Enter the number: ";
//    cin >> number;
//    while (number != 0)
//    {
//        sumOfNumbers = sumOfNumbers + number;
//        cout << "Enter the number or enter '0' to stop entering: ";
//        cin >> number;
//    }
//    cout << "Sum of your numbers is: " << sumOfNumbers << endl;
//    return 0;
//
//}
// Task 17
//{
//    int number, maxNumber = 0;
//        cout << "Enter the number: ";
//        cin >> number;
//        while (number != 0)
//        {
//            if (number > maxNumber)
//            {
//                maxNumber = number;
//            }
//            cout << "Enter the number or enter '0' to stop entering: ";
//            cin >> number;
//        }
//        cout << "Max number is: " << maxNumber << endl;
//        return 0;
//}
// Task 17a
//{
//    int number, maxEvenNumber = 0;
//        cout << "Enter the number: ";
//        cin >> number;
//        while (number != 0)
//        {
//            if ((number > maxEvenNumber) && (number % 2 == 0))
//            {
//                maxEvenNumber = number;
//            }
//            cout << "Enter the number or enter '0' to stop entering: ";
//            cin >> number;
//        }
//        cout << "Max even number is: " << maxEvenNumber << endl;
//        return 0;
//}
// Task 19
//{
//    string number;
//    int sumOfDigits = 0;
//    cout << "Enter three-digit number: ";
//    cin >> number;
//    for (int i = 0; i < number.length(); i++)
//        {
////          sumOfDigits += static_cast<int>(number[i]) - 48;
//            sumOfDigits += (number[i] - '0');
//        }
//    cout << "Sum of digits is: " << sumOfDigits << endl;
//    return 0;
//}
// Task 23
//{
//    int houses[10];
//    int numberOfYourHouse;
//    int flagForSuccess = 0;
//    for (int i = 0; i < 10; i++)
//    {
//        cout << "Enter house number, please: ";
//        cin >> houses[i];
//    }
//    cout << "Enter number of your house: ";
//    cin >> numberOfYourHouse;
//    for (int i = 0; i < 10; i++)
//    {
//        if (houses[i] == numberOfYourHouse)
//            {
//                cout << "I know that house number.";
//                flagForSuccess++;
//                break;
//            }
//    }
//    if (flagForSuccess == 0)
//        cout << "I don't know that house number.";
//    return 0;
//}
// Task 24
//{
//    int cardsBalance [10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
//    int cardNumber;
//    int incomingTranzactionSum;
//    int totalBalance = 0;
//    while (true)
//    {
//        cout << "Enter card number: ";
//        cin >> cardNumber;
//        while (cardNumber > 10 || cardNumber < 1)
//        {
//            cout << "Such card does not exist! Please enter correct number: ";
//            cin >> cardNumber;
//        }
//        cout << "How much money do you want to put?: ";
//        cin >> incomingTranzactionSum;
//        while (incomingTranzactionSum > 1000 || incomingTranzactionSum < -1000)
//        {
//            cout << "Recommended sum is between -1000 and 1000. Try again: ";
//            cin >> incomingTranzactionSum;
//        }
//        cardsBalance [cardNumber - 1] += incomingTranzactionSum;
//        for (int j = 0; j < 10; j++)
//        {
//            cout << cardsBalance[j] << " ";
//        }
//        cout << endl;
//        for (int i = 0; i < 10; i++)
//        {
//            totalBalance += cardsBalance[i];
//        }
//        cout << "Total balance on your cards is:" << totalBalance << endl;
//        totalBalance = 0;
//    }
//    return 0;
//
//}
// Task 25
//{
//    int starsInRows [20];
//    for (int i=0; i < 20; i++)
//        starsInRows [i] = 0;
//    int numberOfStarsInRow;
//    cout << "Enter an odd number: ";
//    cin >> numberOfStarsInRow;
//    if (numberOfStarsInRow != 0)
//    {
//        int counter = 1;
//        do
//        {
//            starsInRows [counter] = numberOfStarsInRow;
//            cout << "Enter an odd number or enter '0' to stop: ";
//            cin >> numberOfStarsInRow;
//            counter++;
//            if (numberOfStarsInRow == 0)
//                break;
//        }
//        while (counter <= 20);
//    }
//    int maxStarsInRow = 0;
//    for (int i = 1; i <= 20; i++)
//    {
//        if (starsInRows [i] > maxStarsInRow)
//            maxStarsInRow = starsInRows [i];
//    }
//    for (int j = 1; j <= 20; j++)
//    {
//        if (starsInRows [j] == 0)
//            break;
//        int numberOfSpaces = (maxStarsInRow - starsInRows [j]) / 2;
//        for (int i = 1; i <= numberOfSpaces; i++)
//            cout << " ";
//        for (int h = 1; h <= starsInRows [j]; h++)
//            cout << "*";
//        cout << endl;
//    }
//    return 0;
//}
// Task 29
//{
//    int a, b;
//    cout << "Enter A number: ";
//    cin >> a;
//    cout << "Enter B number: ";
//    cin >> b;
//    cout << "Sum of numbers from A to B is: " << summOfNumberSeries(a, b);
//    return 0;
//}
//
//int summOfNumberSeries (int a, int b)
//{
//    int sumOfNumbers = 0;
//    if (a > b)
//    {
//        for (int i = b; i <= a; i++)
//            sumOfNumbers += i;
//        return sumOfNumbers;
//    }
//    else
//    {
//        for (int j = a; j <= b; j++)
//            sumOfNumbers += j;
//        return sumOfNumbers;
//    }
//
//}
// Task 30
//{
//    int a = settingArraySize();
//    int m[a];
//    arrayFilling (m, a);
//    arrayPrinting(m, a);
//    arrayReversing(m, a);
//    cout << "Here is reversed array: " << endl;
//    arrayPrinting(m, a);
//    return 0;
//}
//int settingArraySize()
//{
//    int sizeOfArray;
//    cout << "Enter size of array: ";
//    cin >> sizeOfArray;
//    return sizeOfArray;
//}
//void arrayFilling(int m[], int a)
//{
//    for (int i = 1; i <= a; i++)
//    {
//        cout << "Enter " << i << " element of massive: ";
//        cin >> m[i];
//    }
//}
//void arrayPrinting(int m[], int a)
//{
//     for (int j = 1; j <= a; j++)
//        cout << m [j] << " ";
//    cout << endl;
//}
//void arrayReversing(int m[], int a)
//{
//    for (int i = 1; i <= a/2; i++)
//    {
//        int temp = m[i];
//        m[i] = m[a-i+1];
//        m[a-i+1] = temp;
//        temp = 0;
//    }
//}
// Solving examples of tasks from the description of exam
// Task 1
//{
//    int bicycleScore = 0;
//    int carScore = 0;
//    cout << "Enter the number of bicycles: ";
//    cin >> bicycleScore;
//    cout << "Enter the number of cars: ";
//    cin >> carScore;
//    cout << "Total score of wheels is: " << wheelCounting (bicycleScore, carScore) << endlw
//    ;
//    return 0;
//}
//int wheelCounting (int bicycleScore, int carScore)
//{
//    int totalScore = bicycleScore*2 + carScore*4;
//    return totalScore;
//}
// Task 2
//{
//    int number1;
//    int number2;
//    int number3;
//    cout << "Enter first number: ";
//    cin >> number1;
//    cout << "Enter second number: ";
//    cin >> number2;
//    cout << "Enter third number: ";
//    cin >> number3;
//    analysisOfNumbers (number1, number2, number3);
//    return 0;
//}
//void analysisOfNumbers (int number1, int number2, int number3)
//{
//    int sumOfNnumbers = number1 + number2 + number3;
//    if (sumOfNnumbers > 0 && sumOfNnumbers < 100)
//    {
//        cout << "1 " << "Sum is between a range 0-100." << endl;
//    }
//    else
//    {
//        int maxNumber = 0;
//        int m[3] = {number1, number2, number3};
//        for (int i = 0; i < 3; i++)
//        {
//            if (m[i] > maxNumber)
//            {
//                maxNumber = m[i];
//            }
//        }
//        cout << maxNumber << " Sum is not between a range 0-100. Max number has been printed previous." << endl;
//    }
//    if (number1 == number2 && number2 == number3)
//        cout << "-1 " << "Numbers are equal.";
//}
// Task 3
//{
//    int number1;
//    int number2;
//    cout << "Enter first number: ";
//    cin >> number1;
//    cout << "Enter second number: ";
//    cin >> number2;
//    cout << sumByCondition (number1, number2);
//    return 0;
//}
//int sumByCondition (int number1, int number2)
//{
//    int sumOfNumbers = 0;
//    for (int i = number1; i <= number2; i++)
//    {
//        if (i%5 == 0 || i%number1 == 0 || i%number2 == 0)
//            sumOfNumbers += i;
//    }
//    return sumOfNumbers;
//}
// Task 4
{
    int length = 5;
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {5, 4, 3, 2, 1};
    arraysProcessing (a, b, length);
    arrayPrinting(a, length);
    arrayPrinting(b, length);
    return 0;
}
void arraysProcessing (int a[], int b[], int lenght)
{
    int tempArray[5] = {0, 0, 0 ,0 ,0};
    for (int i = 0; i < lenght; i++)
        tempArray[i] = a[i] + b[i];
    for (int j = 0; j < lenght; j++)
        a[j] = a[j] - b[j];
    for (int k = 0; k < lenght; k++)
        b[k] = tempArray[k];
}
void arrayPrinting(int m[], int a)
{
     for (int j = 0; j < a; j++)
        cout << m [j] << " ";
    cout << endl;
}

