import os
import re


import xlrd
import xlwt
# def bianLi(rootDir):
#     for root,dirs,files in os.walk(rootDir):
#         for file in files:
#             print(os.path.join(root,file))
#         for dir in dirs:
#             bianLi(dir)

def bianLi(rootDir):
    finds = []
    for root,dirs,files in os.walk(rootDir):
        for file in files:
            finds.append(os.path.join(root,file))
    return finds
        #     print(os.path.join(root,file))
        # for dir in dirs:
        #     bianLi(dir)
rootDir = "files"
findFiles = bianLi(rootDir)

wb = xlwt.Workbook(encoding='utf-8')
ws = wb.add_sheet("ItemsTable2.name")


k = 0
for file in findFiles:
    Item = xlrd.open_workbook(file)
    Tablel = Item.sheets()[0]
    names = Tablel.col_values(2)
    for i in range(len(names)):
        matchObj = re.search( r'市场', names[i], re.M|re.I)
        if matchObj != None:
            row = Tablel.row_values(i)
            for j in range(len(row)):
                ws.write(k, j, label=row[j])
            k += 1
            continue

wb.save('008.xls')


