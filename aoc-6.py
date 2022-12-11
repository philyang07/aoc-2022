# Part 2
with open('inputs/input-6.txt') as f:
    input_text = f.readline()
    for i in range(0, len(input_text) - 13):
        if len(set(input_text[i:i+14])) == 14:
            print(i+14)
            break
