# hw3 (TODO 출제중, 제출날짜 아직 미정)

두 다항식(polynomial)의 곱을 구하는 프로그램을 작성하라.
계수들이 정수인 다항식만 고려한다.

다항식은 그 계수(coefficient)들의 배열로 나타낼 수 있다.
예를 들어 최대 차수를 9로 한정한다고 가정자자.
이 때 다음과 같은 다항식을 

<a href="https://www.codecogs.com/eqnedit.php?latex=\dpi{120}&space;5&space;&plus;&space;2x&space;&plus;&space;3x^2&space;&plus;&space;7x^5&space;&plus;&space;8x^6&plus;x^7&plus;4x^9" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\dpi{120}&space;5&space;&plus;&space;2x&space;&plus;&space;3x^2&space;&plus;&space;7x^5&space;&plus;&space;8x^6&plus;x^7&plus;4x^9" title="5 + 2x + 3x^2 + 7x^5 + 8x^6+x^7+4x^9" /></a>

아래와 같은 배열로 초기화할 수 있다.

```c
int poly[10] = { 5, 2, 3, 0, 0, 7, 8, 1, 0, 4 };
```
