def main():
    p1, s1 = map(int, input().split())
    s2, p2 = map(int, input().split())
    p, s = p1 + p2, s1 + s2

    if p == s:
        if p1 > s2: res = 'Esteghlal'
        elif p1 < s2: res = 'Persepolis'
        else: res = 'Penalty'
    elif p > s: res = 'Persepolis'
    else: res = 'Esteghlal'

    print(res)

if __name__ == '__main__':
    main()
