# PUG :dog: :heart:

![GitHub CI](https://github.com/angeldollface/pug/actions/workflows/clang.yml/badge.svg)

***An alternative to the popular "cat" command. :dog: :heart:***

## ABOUT :books:

I was looking for project ideas to implement in C. While thinking about this, I remembered the `cat` terminal command. And then I asked myself why cats should get all the attention! Since I like pugs and I thought pugs should get some attention too, I thought I'd write an alternative to the `cat` command in C. This repository contains the source code to that alternative. Enjoy. :heart:

## INSTALLATION :inbox_tray:

Make sure you have the following tools installed and available as commands from a terminal session:

- Git
- Clang
- CMake

To install ***Pug***, follow these steps:

- 1.) Download the utility's source code:

```bash
git clone https://github.com/angeldollface/pug.git
```

- 2.) Change into the source code's root directory:

```bash
cd pug
```

- 3.) Compile ***Pug***:

```bash
make
```

- 4.) Change the generated executable's permissions (on Mac OS or Linux):

```bash
make perm
```

- 5.) Move the file `pug` to a location on your system's `$PATH`.

## USAGE :hammer:

If you installed ***Pug***, the `pug` command should be available from a terminal session. You can use the `pug` command like this:

- Display the contents of `your_file.txt`:

```bash
pug your_file.txt
```

- Get version information on ***Pug*** itself:

```bash
pug version
```

- Get information on how to use ***Pug***:

```bash
pug help
```

- You can also use ***Pug*** with other tools:

```bash
pug your_file.txt | grep "word_to_search_for"
```

## CHANGELOG :black_nib:

### Version 0.1.0

- Initial release.
- Upload to GitHub.

# NOTE :scroll:

- *Pug :dog: :heart:* by Alexander Abraham :black_heart: a.k.a. *"Angel Dollface" :dolls: :ribbon:*
- Licensed under the MIT license.