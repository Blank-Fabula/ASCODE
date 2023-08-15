<hr>

# [Silver II] No.1004: 나는 차차를 싫어해! 

## [[LINK]/](http://ascode.org/problem.php?id=1004)/No.1004 

### 사용 언어 / 성능 요약 / 분류 

C **/** 메모리: 1120 KB, 시간: 4 ms **/** 구현 <br>
C++ **/** 메모리: 2180 KB, 시간: 4 ms **/** 구현 <br>

<hr>

### 문제 설명 

gugugugu는 이번에 새로 나온 게임인 차차 퀘스트를 플레이하고 있다. <br>
대망의 첫 던전에 입장한 gugugugu. 하지만 매번 몬스터의 수를 몰라 죽고 마는데... <br>
gugugugu를 위해 던전 안에 있는 몬스터의 수를 세어 주는 프로그램을 작성하자. <br>

### 입력 설명 

첫 줄에 테스트 케이스의 수 T가 입력된다. <br>
다음 줄부터 T만큼, 던전 맵의 사이즈 W, H (1 <= W, H <= 32)와 gugugugu의 행동 범위 R (1 <= R <= 5), 그 다음 줄에 WxH의 던전 맵이 입력된다. <br>
던전 맵은 길이가 W인 문자열이 H줄 입력되며, 그 내용은 다음과 같다. <br>
<a>#</a> 빈 공간 <br>
@ 현재 gugugugu의 위치 <br>
대문자 A~Z 각 몬스터의 위치 <br>

### 출력 설명 

각 테스트 케이스 별로, 던전 안에 있는 몬스터의 수를 종류별로 세어서 아래와 같이 출력한다. (해당 몬스터가 하나도 없을 경우 그 줄은 생략한다) <br>
또, gugugugu의 위치를 기준으로 가로, 세로 R칸 이내의 몬스터의 전체 수를 세어서 아래와 같이 출력한다. (주위의 몬스터가 없으면 줄 전체를 생략한다) <br>
각 테스트 케이스의 출력 사이는 빈 줄로 구분한다. <br>
 <br>
 <br>
R=2일 때 판정 범위는 다음과 같다. <br>
 <br>
 <br>
####### <br>
#AAAAA# <br>
#AAAAA# <br>
#AA@AA# <br>
#AAAAA# <br>
#AAAAA# <br>
####### <br>
여기서 주위의 몬스터 수는 24이다. <br>

<hr>

### 입력 예시

<details><summary>CLICK ME</summary>
<pre>
<strong>2
5 5 1
##B#A
#####
##@G#
##GZG
###Z#
10 10 2
#####Z####
D####Z#Z##
D####@####
#######G##
######G###
###C######
##########
#G###AAA##
##BB######
##########</strong>
</pre>
</details>

### 출력 예시

<details><summary>CLICK ME</summary>
<pre>
<strong>A 1
B 1
G 3
Z 2
Monsters Nearby 3

A 3
B 2
C 1
D 2
G 3
Z 3
Monsters Nearby 5</strong>
</pre>
</details>

<hr>
