#!/usr/bin/python3

def largest_palindrome(n_digit_number):
    start = 10 ** (n_digit_number - 1)
    end = 10 ** (n_digit_number)
    result = 0

    for i in range(start, end):
        for j in range(i, end):
            product = i * j
            if str(product) == str(product)[::-1]:
                result = product

    return result


print(largest_palindrome(3))
