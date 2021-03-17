import csv
import matplotlib as plt


squares = []
with open('D:\concentrixSquare.csv') as csv_file:
    csv_reader = csv.reader(csv_file, delimiter=',')
    line_count = 0
    for square in csv_reader:
        for point in square:
            if(len(point.split(";")) > 1):
                squares.append(point.split(";"))
                print(squares)

"""
#matplotlib test
print("Matplotlib test")

w = 6
h = 6

plt.figure(figsize=(w, h))
#Draw squares

for square in squares:
    plt.plot(square[0], square[1])
    plt.plot(square[1], square[3])
    plt.plot(square[3], square[2])
    plt.plot(square[2], square[0])
        

#save a file
plt.savefig("out.png")
print("Done!\n\n")
"""