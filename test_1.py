# 单例模式 : 只能创建一个对象 对象的创建是依赖 __new__ 方法 可以自定义一个 __new__ 方法 重写 object 中的 __new__ 方法 达到目的
# 先创建一个类
class Sport:
    __instance = None  # 定义一个类变量 第一次执行是为 None 第二次是一个对象

    def __new__(cls, *args, **kwargs):  # 定义一个__new__ 方法 重写object 中的 __new__ 方法
        if cls.__instance is None:  # 第一次执行是为 None 第二次是一个对象 则不符合
            cls.__instance = object.__new__(Sport)  # 一旦执行就会创建一个对象
        return cls.__instance  # 把创建的对象返回出去使用

    def __init__(self, arg):
        self.arg = arg
