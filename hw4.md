# hw4 (TODO 출제중, 11/2 밤까지)

다항식은 그 계수(coefficient)들의 배열로 나타낼 수 있다.
여기서는 계수들이 정수인 다항식만 고려한다.

예를 들어 최대 차수를 9로 한정한다고 가정자자.
이 때 다음과 같은 두 다항식을 

<img src="https://latex.codecogs.com/gif.latex?\dpi{110}&space;5&space;&plus;&space;2x&space;&plus;&space;3x^2&space;&plus;&space;7x^5&space;&plus;&space;8x^6&plus;x^7&plus;4x^9" title="5 + 2x + 3x^2 + 7x^5 + 8x^6+x^7+4x^9" />

<img src="https://latex.codecogs.com/gif.latex?x&space;&plus;&space;2x^2&space;&plus;&space;3&space;x^3&space;&plus;&space;4&space;x^4&space;&plus;&space;5x^8&space;&plus;&space;x^9" title="- x + 2x^2 - 3 x^3 + 4 x^4 - 5x^8 + x^9" />

아래와 같은 배열로 초기화할 수 있다.

```c
int poly1[10] = { 5, 2, 3, 0, 0, 7, 8, 1, 0, 4 };
int poly2[10] = { 0,-1, 2,-3, 4, 0, 0, 0,-5, 1 };
```

## 아래와 같이 출력하는 함수 작성 (4점)
함수의 프로토타입은 `void printpoly(int, const int[])`이며 이 함수를 이용한 코드를 실행한 출력 결과는 다음과 같다. 

```c
printpoly(10, poly1); printf("\n");
printpoly(10, poly2); printf("\n");
```

```
-x +2x^2 -3x^3 +4x^4 -5x^8 +x^9
5 +2x +3x^2 +7x^5 +8x^6 +x^7 +4x^9
```

추가로 뒷부분의 실행예도 살펴보라.


## 두 다항식의 곱을 구하는 함수를 작성하라. (1점)
```c
int* multpoly(int dest[],
              int n1, const int poly1[],
              int n2, const int poly2[])
{
    // 함수 내용을 작성하라
    return dest;
}
```

예컨대 위에 나온 두 다항식을 곱한 결과로 나오는 다항식은 다음과 같으며
<img src="https://latex.codecogs.com/gif.latex?-&space;5&space;x&space;&plus;&space;8&space;x^2&space;-&space;14&space;x^3&space;&plus;&space;20&space;x^4&space;-&space;x^5&space;&plus;&space;5&space;x^6&space;&plus;&space;6&space;x^7&space;-&space;31&space;x^8&space;&plus;&space;x^9&space;&plus;&space;12&space;x^{10}&space;&plus;&space;15&space;x^{11}-&space;12&space;x^{12}&space;-&space;19&space;x^{13}&space;-&space;33&space;x^{14}&space;&plus;&space;3&space;x^{15}&space;&plus;&space;x^{16}&space;-&space;20&space;x^{17}&space;&plus;&space;4&space;x^{18}" title="- 5 x + 8 x^2 - 14 x^3 + 20 x^4 - x^5 + 5 x^6 + 6 x^7 - 31 x^8 + x^9 + 12 x^{10} + 15 x^{11}- 12 x^{12} - 19 x^{13} - 33 x^{14} + 3 x^{15} + x^{16} - 20 x^{17} + 4 x^{18}" />

위 내용을 배열로 초기화한다면 다음과 같을 것이다.
```c
int poly[20] = {0,-5,8,-14,20,-1,5,6,-31,1,12,15,-12,-19,-33,3,1,-20,4};
```

당연히 이렇게 초기화하는 게 아니라 `poly1`과 `poly2`로부터 poly에 저런 값들이 저장되도록 계산해 내야 한다.

## 실행예
첫 두 줄은 입력이다
```
5 2 3 0 0 7 8 1 0 4              
0 -1 2 -3 4 0 0 0 -5 1
  5 +2x^1 +3x^2 +7x^5 +8x^6 +x^7 +4x^9
* -x^1 +2x^2 -3x^3 +4x^4 -5x^8 +x^9
------------------------------------------------------------
  -5x^1 +8x^2 -14x^3 +20x^4 -x^5 +5x^6 +6x^7 -31x^8 +x^9 +12x^10 +15x^11 -12x^12 -19x^13 -33x^14 +3x^15 +x^16 -20x^17 +4x^18
```

```
-1 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0
  -1
* 1
------------------------------------------------------------
  -1
```

```
0 0 0 0 0 0 0 0 0 0
1 0 0 0 0 0 0 0 0 0
  0
* 1
------------------------------------------------------------
  0
```

## 다음 코드를 완성하는 것이 목표이다
```c
#include <stdio.h>

#define N1 10
#define N2 10
#define N  20

void printpoly(int, const int []);

int* multpoly(int dest[],
              int n1, const int poly1[],
              int n2, const int poly2[]);

int main()
{
    int poly1[N1];
    int poly2[N2];
    int poly[N] = {}; // 모두 0으로 초기화

    for (int i=0; i<N1; ++i) scanf("%d", &poly1[i]); // poly1 입력 받기
    for (int i=0; i<N2; ++i) scanf("%d", poly2 + i); // poly2 입력 받기
    multpoly(poly, N1, poly1, N2, poly2); // poly에 poly1과 poly2의 곱을 저장

    printf("  "); printpoly(N1, poly1); printf("\n");
    printf("* "); printpoly(N2, poly2); printf("\n");
    printf("------------------------------------------------------------\n");
    printf("  "); printpoly(N, poly); printf("\n");

    return 0;
}


void printpoly(int n, const int poly[])
{
    // 이 함수를 작성하라 (4점)
}

int* multpoly(int dest[], int n1, const int poly1[], int n2, const int poly2[])
{
    // 아래 줄은 poly에 poly1을 그대로 복사하는 더미 구현이므로 수정하라 (1점)
    for(int i=0; i<n1; ++i) dest[i] = poly1[i];

    return dest;
}
```
