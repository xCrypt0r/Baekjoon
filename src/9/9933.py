"""
9933. 민균이의 비밀번호

작성자: xCrypt0r
언어: Python 3
사용 메모리: 29,380 KB
소요 시간: 68 ms
해결 날짜: 2020년 9월 25일
"""

def main():
    N = int(input())
    words = [input() for _ in range(N)]

    for i in range(N):
        for j in range(i, N):
            if words[i][::-1] == words[j]:
                print(len(words[i]), words[i][len(words[i]) // 2])

if __name__ == '__main__':
    main()