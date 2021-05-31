"""

linux 设置pycharm

"""

# tar -zxvf  pycharm-professional-2017.tar.gz
# sudo mv pycharm-2017.1.3/ /opt/
# cd /opt/pycharm-2017.1.3/bin
# ./pycharm.sh

# 我是注释,不用理我
class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n == 1:
            return True
        if n % 2 == 0:
            if n / 2 % 2 == 0:
                return True
            else:
                return False
        else:
            return False


n = -2147483648

if n == 1:
    print(True)
if n % 2 == 0:
    if n / 2 % 2 == 0:
        print(True)
    else:
        print(False)
else:
    print(False)