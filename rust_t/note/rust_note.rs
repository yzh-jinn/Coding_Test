Rust Note

常量和变量（不论是否mut）的区别：
    同名变量可以重新被赋值，但是常量不行。

#注意：
  1.常量（const）一定要声明数据类型。
  2.如果变量被重新赋值了，说明之前的赋值失效，编译器会报错。
  
ex:  
{
    let str:&str = "Bob"; //字符串的类型：&str
    let str:i32 = 32;//可以通过

    const PI:i32 = 3.1415926;
    const PI:f64 = 3.888419; //invalid
}

