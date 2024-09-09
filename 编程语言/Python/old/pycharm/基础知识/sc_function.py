def mutilTable():
    """计算九九乘法表
    print(mutilTable.__doc__)
    mutilTable()
    """
    for row in range(1,10):
        for col in range(1,10):
            if col > row :
                break
            prod = row * col
            print(str(col) + '*' + str(row) + "=" + str(prod), '  ', end='')
            if prod < 10:
                print(' ', end='')
        print()





"""

linux 设置pycharm

"""

# tar -zxvf  pycharm-professional-2017.tar.gz
# sudo mv pycharm-2017.1.3/ /opt/
# cd /opt/pycharm-2017.1.3/bin
# ./pycharm.sh

# 我是注释,不用理我
# from typing import List
# from typing import List
#
#
# def canEat(self, candiesCount: List[int], queries: List[List[int]]) -> List[bool]:
#     return [0,0]
#
#
# print("heool")
# -----------------------------------------------------------------------------------------------------
# n=int(input("请输入一个整数:"))
# sum = 0
# for i in range ( n+1 ):
#     sum += i
# print("1~%d求和的结果为%d"%(n,sum))
#
# --------------------------------------------------------------------------------------------------------

# import math
# math.sin(3)
#
# from math import *
# sin(3)