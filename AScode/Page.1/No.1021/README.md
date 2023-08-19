<hr>

# [Bronze IV] No.1021: 암호화 알고리즘 #2 

## [[LINK]/](http://ascode.org/problem.php?id=1021)/No.1021 

### 사용 언어 / 성능 요약 / 분류 

C **/** 메모리: 1120 KB, 시간: 2 ms **/** 구현, 문자열, 비트마스 <br>
C++ **/** 메모리: 2240 KB, 시간: 2 ms **/** 구현, 문자열, 비트마스 <br>

<hr>

### 문제 설명 

나는 지금 현재 보안 프로그램을 제작을 하여야 한다고 한다. <br>
암호화 할 값과 암호화 하는 키 값이 주어지면 XOR 암호화를 통하여 암호화를 해본다. <br>
암호화 프로그램을 만들어 보도록 하자. <br>

### 입력 설명 

첫번째 줄에는 테스트 케이스(0 < TestCase <= 10) 갯수가 들어오며 <br>
두번째 줄에는 암호화 할 데이터(0 < 데이터 길이 < 1024) 값이 들어온다. <br>
세번째 줄에는 암호화하는 키(0 <  키 길이 < 512) 값이 들어 오며 이 이후로는 <br>
두번째 줄과 세번째 줄이 반복한다. <br>
<br>
데이터의 길이와 키 길이가 맞지 않을 경우에는 <br>
키를 재사용한다. <br>
ex) <br>
값 : 12345 <br>
키 : 12 <br>
결과 : 키를 12121 로 변경후 진행 <br>

### 출력 설명 

Xor 암호화한 결과값을 출력한다. <br>

<hr>

### 입력 예시

<details><summary>CLICK ME</summary>
<pre>
<strong>2
aaaaa
bcd

bcd</strong>
</pre>
</details>

### 출력 예시

<details><summary>CLICK ME</summary>
<pre>
<strong>
aaaaa</strong>
</pre>
</details>

<hr>
