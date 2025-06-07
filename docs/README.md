# Man page instructions from Stackoverflow
##### https://stackoverflow.com/questions/33049205/how-to-make-a-man-page-for-my-shell-script

1. Become Superuser, `sudo su`
2. go to `/usr/bin`
3. `nvim name-of-your-function`
4. Copy and paste template below into file
```./" Manpage for your_fonction
.TH man 1 "10 September 2017" "1.0" "your_fonction man page"
.SH NAME
your_fonction - do.... 
.SH SYNOPSIS
your_fonction [optionnal argument] [optionnal argument]
.SH DESCRIPTION
your_fonction is a function which .....
.SH OPTIONS
your_fonction does not take any options
.SH BUGS
No known bugs.
.SH AUTHOR
written by your_name (your_website or your_github or whatever)
.SH REPORTING BUGS
you_github_repository/isssues for example```

5. Choose where your man page goes:
    (man1) 1 - Commands available to users
    (man2) 2 - Unix and C system calls
    (man3) 3 - C library routines for C programs <---
    (man4) 4 - Special file names
    (man5) 5 - File formats and conventions for files used by Unix
    (man6) 6 - Games
    (man7) 7 - Word processing packages
    (man8) 8 - Sysadmin commands and procedures

6. back to `/usr/bin`
7. make a copy with good suffix from above: `cp your_function.1`
8. gzip your_function.1
9. Deploy into correct folder: `cp your_function.1.gz /usr/share/man/man1/`
10. Test with `man your_function`
