def is_match(a, b, template):
    a_idx, b_idx = 0, 0
    for ch in template:
        if ch == '*':
            # Match zero or more characters
            while a_idx < len(a) and b_idx < len(b) and a[a_idx] != b[b_idx]:
                a_idx += 1
                b_idx += 1
            if a_idx == len(a) or b_idx == len(b):
                return False
            a_start, b_start = a_idx, b_idx
            while a_idx < len(a) and a[a_idx] == a[a_start]:
                a_idx += 1
            while b_idx < len(b) and b[b_idx] == b[b_start]:
                b_idx += 1
        else:
            if a_idx == len(a) or b_idx == len(b) or a[a_idx] != b[b_idx]:
                return False
            a_idx += 1
            b_idx += 1
    return True


def generate_templates(template, asterisks_left, a, b, result):
    if len(template) == len(a):
        if is_match(a, b, template):
            result.append(template)
        return
    if asterisks_left > 0:
        generate_templates(template + '*', asterisks_left - 1, a, b, result)
    generate_templates(template + a[len(template)], asterisks_left, a, b, result)


n = int(input())
for i in range(n):
    a = input().strip()
    b = input().strip()
    result = []
    for asterisks in range(len(a) + 1):
        generate_templates('', asterisks, a, b, result)
        if len(result) > 0:
            print("YES")
            print(result[0])
            break
    else:
        print("NO")