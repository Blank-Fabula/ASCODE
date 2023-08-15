<hr>

# [] No.1005: 시분할 연습 #2

## [[LINK]/](http://ascode.org/problem.php?id=1005)/No.1005 

### 사용 언어 / 성능 요약 / 분류 

C **/** 메모리:  KB, 시간:  ms **/** 구현 <br>
C++ **/** 메모리:  KB, 시간:  ms **/** 구현 <br>

<hr>

### 문제 설명 

시분할 연습 #1 에서는 제한된 주기의 갯수를 통하여 출력을 하는 연습을 하였다. <br>
그리고 만약 구조체를 이용하여 문제를 해결을 하였다면은 시분할 연습 #2 또한 쉽게 해결 가능하다. <br>

### 입력 설명 

첫번째 줄에는 테스트 케이스가 들어온다. 0 < TestCase < 10 (정수이다.) <br>
두번째 줄에서는 진행할 시간과 주기의 갯수가 들어온다.   0 < T(시간) < 10000, 0 < C(주기) <= 10 <br>
세번째 줄 부터 들어오는 모든 주기의 값들은 10000을 넘지 않는다. <br>
네번째 줄 부터는 두번째의 입력의 반복이다. <br>

### 출력 설명 

주기가 똑같은 경우에는 <br>
아스키 코드가 작은 A가 가장 먼저 출력이 되고 <br>
Z가 가장 늦게 출력이 된다. <br>

주기가 1일 경우 매번 출력이 된다. <br>

<hr>

### 입력 예시

<details><summary>CLICK ME</summary>
<pre>
<strong>2
10 3
1 3 2
15 4
4 1 2 3</strong>
</pre>
</details>

### 출력 예시

<details><summary>CLICK ME</summary>
<pre>
<strong>AACABACAABCAACABAC
BBCBDABCBBCDBABCBDBCBABCDBBCBD</strong>
</pre>
</details>

<hr>
