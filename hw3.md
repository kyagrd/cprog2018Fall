# hw4 (TODO 출제중, 제출날짜 아직 미정)

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

## 아래와 같이 출력하는 `void printpoly(const int[], int)` 함수 작성 (4점)
```c
printpoly(poly1, 10); printf("\n");
```

```
5 +2x +3x^2 +7x^5 +8x^6 +x^7 +4x^9
```

```c
printpoly(poly1, 10); printf("\n");
```

```
-x +2x^2 -3x^3 +4x^4 -5x^8 +x^9
```

## 두 다항식의 곱을 구하는 함수를 작성하라. (1점)
```c
int* multpoly(const int* p1, int n1, const int* p2, int n2, int* dest)
{
    // 함수 내용을 작성하라
    return dest;
}
```

예컨대 위에 나온 두 다항식을 곱한 결과로 나오는 다항식은 다음과 같으며
<img src="https://latex.codecogs.com/gif.latex?-&space;5&space;x&space;&plus;&space;8&space;x^2&space;-&space;14&space;x^3&space;&plus;&space;20&space;x^4&space;-&space;x^5&space;&plus;&space;5&space;x^6&space;&plus;&space;6&space;x^7&space;-&space;31&space;x^8&space;&plus;&space;x^9&space;&plus;&space;12&space;x^{10}&space;&plus;&space;15&space;x^{11}-&space;12&space;x^{12}&space;-&space;19&space;x^{13}&space;-&space;33&space;x^{14}&space;&plus;&space;3&space;x^{15}&space;&plus;&space;x^{16}&space;-&space;20&space;x^{17}&space;&plus;&space;4&space;x^{18}" title="- 5 x + 8 x^2 - 14 x^3 + 20 x^4 - x^5 + 5 x^6 + 6 x^7 - 31 x^8 + x^9 + 12 x^{10} + 15 x^{11}- 12 x^{12} - 19 x^{13} - 33 x^{14} + 3 x^{15} + x^{16} - 20 x^{17} + 4 x^{18}" />

위 내용을 배열로 초기화한다면 다음과 같다
```c
int poly[19] = {0,-5,8,-14,20,-1,5,6,-31,1,12,15,-12,-19,-33,3,1,-20,4};
```
