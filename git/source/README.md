### Git hooks for

- Format C/C++ files using clang-format

- Update ctags

#### How to use

1. clone this repo.

```
git clone git@github.com:vikkitharan/git_hooks.git /tmp/git_hooks
```


2. clone or initilize git repo with template directory. For example,
```
$ git init --template /tmp/git_hooks/template
```
or

```
$ git clone https://github.com/githubtraining/hellogitworld  --template /tmp/git_hooks/template ./
```

Or, if you want to use these hooks for an existing git repo, copy the hooks into ``` .git/hooks/```. )

 For example,

 ``` cp /tmp/git_hooks/template/hooks/* .git/hooks/ -r```



3. If you do not have a clang-format configuration file, create the clang-format configuration file.
```
clang-format -style=llvm -dump-config > ./.clang-format
```

Above command creates llvm style. Other styles are Google, Chromium, Mozilla, WebKit.
For further details are available in clang-format [webpage](https://clang.llvm.org/docs/ClangFormat.html)
