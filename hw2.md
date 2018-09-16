# hw2 (2018-10-08 밤까지 제출)
p.281 프로그래밍 연습 7번 문제에 약간 더 기능을 더한 프로그램을 작성하는 두번째 과제이다.

어떤 문자열을 거꾸로 출력했을 때 원래와 같은 것을 palindrome이라고 한다.

입력받은 단어가 palindrome일 경우 7번 문제에서 요구하는 대로 단어를 거꾸로 출력한 후 그 다음 줄에 palindrome이라고 출력하라.
palindrome이 아닐 경우는 그냥 7번 문제애서 요구한 만큼만 단어를 거꾸로 출력한 후 프로그램을 종료하면 된다.

참고로 길이가 1인 모든 단어는 palindrome이다. 다른 palindrome의 예로는 pop, level, racecar 등이 있다.

단어는 최대 127글자라고 가정한다.
그러니까 127개의 글자로 이루어진 단어까지는 처리할 수 있어야 하지만 128글자로 된 단어는 처리하지 못해도 좋다.

## 실행예 (첫번째 줄은 입력이다)
```
a
a
palindrome
```

```
fan
naf
```

```
pop
pop
palindrome
```

```
lever
revel
```

```
level
level
palindrome
```
