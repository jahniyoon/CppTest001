// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>         // 전처리기 지시문, 꼭대기에 위치함. 앞에서 처리한다.
                            // #include 안에 <,> 안에 적어주는 것이 헤더파일
                            // 없으면 실행할 수 없다. 

void MyNewPrint(int number) // 숫자를 출력하기 위한 함수
{
    printf("입력 값은 %d 입니다. \n", number);
}

int plusTwonumbers(int number1, int number2)
{
    printf("입력 값은 %d, %d 입니다. \n", number1, number2);
    return number1+number2;
}

int multiplenumbers(int number1, int number2, int number3)
{
    printf("입력 값은 %d, %d, %d 입니다. \n", number1, number2, number3);
    return number1 * number2 * number3;
}


int main()
{
    int number = 10;

    std::cout << "Hello World!\n";
    printf("hello world! \" \n");

    printf("123 123 hello world!!! \n");
    printf("hello world! \n");
    printf("hello world! %d \n", number-2);

    MyNewPrint(100);        // 실제로 함수를 사용하는 줄에서 함수를 부른다. (call)

    printf("두 수의 합은 %d 입니다. \n\n", plusTwonumbers(5, 7));
    printf("세 수의 곱은 %d 입니다. \n\n", multiplenumbers(3, 2, 5));

  

        // Comment 주석 이 라인은 프로그램에 영향을 주지 않는다.
        // 내가 필요한 글자를 마음대로 적으면 된다.

        // 한줄 주석이라고 한다.

        /* 
        여러줄 주석이라고 한다.
        여러줄 주석
        이 라인들은 프로그램에 영향을 주지 않는다.
        */
}

// return 0;


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
