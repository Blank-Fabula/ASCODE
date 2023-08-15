<hr>

# [] No.1004: 시분할 연습 #1 

## [[LINK]/](http://ascode.org/problem.php?id=1004)/No.1004 

### 사용 언어 / 성능 요약 / 분류 

C **/** 메모리:  KB, 시간:  ms **/** 구현 <br>
C++ **/** 메모리:  KB, 시간:  ms **/** 구현 <br>

<hr>

### 문제 설명 

차차라는 학생은 매트릭스라는 영화에 나오는 숫자들이 내려오는 장면을 구현해 보고 싶다. <br>
하지만 그것을 구현하기 위해선 우리들이 사용하는 방식으로는 불가능할 것같다. <br>
A와 B, C 문자들이 주기적으로 출력을 하는 프로그램을 구현해보자. <br>
반복문과 구조체를 활용을 하면은 매우 쉽게 해결할수 있을것 같다. <br>

### 입력 설명 

첫번째 줄에는 테스트 케이스가 들어온다. 0 < TestCase < 10 (정수이다) <br>
두번째 줄에는 진행할 시간이 들어온다.  0 < T < 1000 <br>
세번째 줄 부터는 A의 주기, B의 주기 C의 주기의 값이 들어온다.  0 < A, B, C < 1000 <br>
네번째 줄 부터는 두번째~세번째의 입력이 반복된다. <br>
모든 숫자는 양수이다. <br>

### 출력 설명 

A B C가 주기가 같을 경우에 우선순위는 <br>
A가 최우선 출력, <br>
B가 2순위, <br>
C가 마지막에 출력된다. <br>

주기가 1일 경우 매번 출력된다. <br>

<hr>

### 입력 예시

<details><summary>CLICK ME</summary>
<pre>
<strong>2
10
1 3 2
15
4 1 2</strong>
</pre>
</details>

### 출력 예시

<details><summary>CLICK ME</summary>
<pre>
<strong>AACABACAABCAACABAC
BBCBABCBBCBABCBBCBABCBBCB</strong>
</pre>
</details>

<hr>
