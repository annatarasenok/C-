import time
import run_cython

def count(limit):
    result = 0
    a = 0
    b = 0
    c = 0
    for a in range(1, limit + 1):
        for b in range(a + 1, limit + 1):
            for c in range(b + 1, limit + 1):
                if c * c > a * a + b * b:
                    break
 
                if c * c == (a * a + b * b):
                    result += 1

    return result

def main():
    start = time.time()
    result = run_cython.count(100)
    duration = time.time() - start
    print(result, duration)

    start = time.time()
    result = count(100)
    duration = time.time() - start
    print(result, duration)
 
if __name__ == "__main__":
    main()
