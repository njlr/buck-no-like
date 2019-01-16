# buck-no-like

To build without Buck:

```bash=
./build.sh
./app
```

To build with Buck (must fix includes):

```bash=
buck run //:app
```

Can Buck build this project without changing the source-code?
