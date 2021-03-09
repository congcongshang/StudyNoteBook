fileName = "file.txt"
with open(fileName) as lines:
    for line in lines:
        print(line);

# 打开文件

f = open("file.txt", "r")
    print ("文件名为: ", f.name)



for line in fo.readlines():                          #依次读取每行

    line = line.strip()                             #去掉每行头尾空白

    print ("读取的数据为: %s" % (line))



# 关闭文件

fo.close()
