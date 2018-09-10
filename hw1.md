# hw1
첫번째 과제는 10/2일 밤까지입니다.
GitLab의 cprog 저장소 아래 `hw1` 하위 디렉토리에 `main.c`와 `hw1.cbp`가 올라온 내용으로 채점합니다.
프로그램이 컴파일되지 않거나 잘못된 방식으로 출력하여 정답 결과와 일치하는 테스트 케이스가 하나도 나오지 않으면 제출하지 않은 것과 마찬가지로 0점입니다.
채점 방식은 테스트 입력을 여러 개 생성하여 그것과 정확히 일치하는 것만큼 점수를 매기게 됩니다.

다음 프로그램을 완성하시오.
단 `main` 함수는 변경하지 말 것.

```c
#include <stdio.h>

void triR(void) {
  // 이 함수를 완성하시오. (첫번째 과제: 4점)
}

void triL(void) {
  // 이 함수를 완성하시오 (두번째 과제: 1점)
}

void dias(void) {
  // 이 함수를 완성하시오 (두번째 과제: 1점)
}

int main(void)
{
  int n;
  scanf("%d", &n); // 1,2,3 중 하나를 입력받는다
  switch (n)
  {
    case 1: triR(); break;
    case 2: triL(); break;
    case 3: dias(); break;
    default: return -1;
  }
  return 0;
}
```


## 실행 예
다음 실행 예들에서 처음 나오는 수 세 개는 입력이다.

### 첫번째 함수
```
1
4
1
Hello world

1
22
333
4444
333
22
1
Bye world
```

```
1
3
3
Hello world

1
22
333
22
1

1
22
333
22
1

1
22
333
22
1
Bye world
```


### 두번째 함수
```
2
4
1
Hello world
....
...1
..22
.333
4444
.333
..22
...1
Bye world
```

```
2
3
3
Hello world
...
..1
.22
333
.22
..1
...
..1
.22
333
.22
..1
...
..1
.22
333
.22
..1
Bye world
```

### 세번째 함수
```
 3
 4
 1
Hello world
....
...11
..2222
.333333
44444444
.333333
..2222
...11
Bye world
```

```
3
3
3
Hello world
...
..11
.2222
333333
.2222
..11
...
..11
.2222
333333
.2222
..11
...
..11
.2222
333333
.2222
..11
Bye world
```

### 두번째, 세번째 입력 중에 0이 있거나 둘 다 1인 경우들
```
1
0
3
Hello world
Bye world
```

```
2
3
0
Hello world
Bye world
```

```
3
0
0
Hello world
Bye world
```

```
1
1
1
Hello world

1
Bye world
```

```
2
1
1
Hello world
.
1
Bye world
```

```
3
1
1
Hello world
.
11
Bye world
```
