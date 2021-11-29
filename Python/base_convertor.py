alpha = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

n = int(input()) # addad dar mabna 10
k= int(input()) # mabna

def base(n, k):
    assert k <= len(alpha), f"Unable to convert to Mabna {k}"
    converted = ""
    while n > 0:
        converted += alpha[n % k]
        n //= k

    if len(converted) == 0:
        return "0"
    return converted[::-1]

print(base(n, k))
