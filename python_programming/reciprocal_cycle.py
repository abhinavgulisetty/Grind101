def max_repetend_denom(d_max):
    """Finds the denominator with the longest repetend for fractions with denominators up to d_max."""
    d = rep = 0
    for i in range(3, d_max + 1, 2):  # Iterate over odd denominators
        counter = 1
        value = 10 % i
        j = d_max
        while value != 1 and j > 0:
            value = (value * 10) % i
            counter += 1
            j -= 1
        if counter > rep and j > 1:
            rep = counter
            d = i
    return d, rep

while True:
    d_max = int(input("Enter the maximum allowed absolute value of the denominator: "))
    if d_max <= 0:
        break

    if d_max < 3:
        print("No fraction with an absolute value of the denominator less than 3 can have a repetend.")
    else:
        d, rep = max_repetend_denom(d_max)
        digits = "digits)" if rep > 1 else "digit)"
        print(f"Fractions with an absolute value of the denominator no greater than {d_max} will have the longest possible repetend (of {rep} {digits} in their decimal expansion if they are in lowest terms and their denominator is {d}.")
