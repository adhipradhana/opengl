filename = 'kuda.txt'
filename_w = 'kuda_modified.txt'
fopen = open(filename, 'r')
fwrite = open(filename_w, 'w')

i = 0
for line in fopen :
    if line != '\n':
        x,y = line.split(',')
        x = (int(x) - 400) / 800
        y = (int(y) - 400) / 800
        fwrite.write('{},{},{}\n'.format(x, y, 0))
    else :
        fwrite.write('\n')

fopen.close()
fwrite.close()