def main():
    A, B, C, D, E = [int(input()) for _ in range(5)]
    
    print(abs(A) * C + D + B * E if A < 0 else (B - A) * E)

if __name__ == '__main__':
    main()
