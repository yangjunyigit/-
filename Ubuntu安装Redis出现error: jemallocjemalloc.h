 编译 redis 报错 error: jemalloc/jemalloc.h: No such file or directory

gcc编译redis时报错：

zmalloc.h:50:31: error: jemalloc/jemalloc.h: No such file or directory
zmalloc.h:55:2: error: #error "Newer version of jemalloc required"

原因是jemalloc重载了Linux下的ANSI C的malloc和free函数。解决办法：make时添加参数。

make MALLOC=libc

