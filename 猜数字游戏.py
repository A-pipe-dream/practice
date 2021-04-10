# 导入随机库
import random

# 打印菜单选择栏
def menu():
    print()
    print("-" * 10, '1 (开始)  0 （退出）', "-" * 10)
    print("-" * 41)
    print("请选择:")

# 游戏主体
def game():
    ret = random.randint(1, 101)    # 生成1到100的随机数字
    # print(ret)
    while True:
        guess = int(input("请猜数字>>>:"))
        if guess > ret:
            print("偏大")
        elif guess < ret:
            print("偏小")
        else:
            print("恭喜,正确")
            break


def main():
    while True:
        menu()
        choose = int(input())
        if choose == 1:
            game()
        elif choose == 0:
            return
        else:
            print("输入错误")


if __name__ == '__main__':
    main()
