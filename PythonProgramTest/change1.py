
# with open(fileName) as lines:
#     for line in lines:
#         print(line)
def writeFile(filename,data):
    f = open(filename,'w',encoding='gbk')
    f.writelines(data)
    f.close()

def openFile(filename):
    # 打开文件
    f = open(filename, "r", encoding='utf-8')
    # print("文件名为: ", f.name)
    res = f.readlines()
    # for line in f.readlines():  # 依次读取每行
    #     line = line.strip()     # 去掉每行头尾空白
    #     print("读取的数据为: %s" % (line))

    # 关闭文件
    f.close()
    return res

def main():
    result = openFile("teste.py")
    res = []
    for line in result:
        re = ""
        ok = True
        for i in line:
            if i == " " and ok:
                re += ','
                ok = False
            else:
                if i != " ":
                    re += i
                    ok = True
        res.append(re)

    writeFile("test.csv",res)



if __name__ == '__main__':
    main()
    # print(__name__)
