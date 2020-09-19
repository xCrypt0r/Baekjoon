def main():
    nums = []

    for _ in range(int(input())):
        nums.append(int(input()))

    missing = [str(i) for i in range(1, nums[-1] + 1) if i not in nums]

    print('good job' if not len(missing) else '\n'.join(missing))
    
if __name__ == '__main__':
    main()
